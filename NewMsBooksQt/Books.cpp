#include "stdafx.h"
#include "Books.h"






void Books::initialize()
{
	//get all books from file
	TheSerializationClass sr;
	sr.deserializeTheBooks("D:/MassoudBooks/prsave.dat");
	allBooks = std::move(sr.allBooksStd);
	for (const auto& tag : sr.allTagsStd)
	{
		allTags.push_back(QString::fromStdString(tag));
	}
	//init allCatatgories and allReadingStatus
	allCatagories = std::move(QStringList() << "Any" << "Math" << "GameDev" << "CSharp" << "Java" << "Cs" << "Cpp" << "Emmbedded" << "PyAndMl" << "Art" << "Android");
	allReadingStatus = std::move(QStringList() << "Any" << "Reading" << "WannaRead" << "WannaRead2" << "YetToWannaRead" << "DelayedReading" << "Finished" << "Dropped");
	
}




//Getters
Book  Books::getBook(QString name)
{
	for (const auto& book : allBooks) if (book->mName == name) return *book;
	Book bk(QString::fromStdString("NoBookFound"), QString::fromStdString("Any"), QString::fromStdString("Any"), QStringList(), 0);
	return bk;
}

 QStringList  Books::getAllBooks()
{
	QStringList tempBooksLst;
	for (const auto& book : allBooks)tempBooksLst.push_back(book->mName);
	return tempBooksLst;
}

const QStringList & Books::getAllTags()
{
	
	return allTags;
}

const QStringList & Books::getAllReadingStatus()
{
	return allReadingStatus;
}

const QStringList & Books::getAllCatagories()
{
	return allCatagories;
}

QStringList  Books::getFilteredBooksList(const QString & catagory, const QString & readingStatus, const QStringList & tags)
{
	QStringList filteredList;

	QString ctgry = "Any";
	if (catagory.trimmed() != "") ctgry = catagory;

	QString rdStts = "Any";
	if (readingStatus.trimmed() != "")rdStts = readingStatus;

	QStringList tgs;
	for (const auto& tag : tags)if (tag.trimmed() != "")tgs.push_back(tag);

	for (const auto& book : allBooks)
	{
		if (book->mCatagory == ctgry && book->mReadingStatus == rdStts && checkTagsInBook(*book,tgs))
		{
			filteredList.push_back(book->mName);
		}
	}
	return filteredList;
}
//


//Modifiers
void Books::addBook(Book & book, std::function<void()> fail = nullptr)
{
	for (auto& bk : allBooks)if (bk->mName == book.mName)if (fail != nullptr) { fail(); }return;
	if (checkValues(book))if (fail != nullptr) { fail(); }return;
	allBooks.push_back(std::make_unique<Book>(book));
}

void Books::removeBook(QString bookName)
{
	for (auto& itr = allBooks.begin(); itr != allBooks.end();itr++)if (itr->get()->mName == bookName) {
		//std::unique_ptr<Book> bk= std::move(book);
		allBooks.erase(itr);
	}
}

void Books::modifyBook(QString oldName, Book & newBook, std::function<void()> fail = nullptr)
{
	if (checkValues(newBook))if (fail != nullptr) { fail(); }return;
	for (auto& book : allBooks)if (book->mName == oldName)*book = newBook;
}
void Books::addTag(QString tag)
{
}
//
bool Books::checkValues(const Book & book)
{
	bool name = book.mName.trimmed() != "";
	bool catagory = book.mCatagory.trimmed() != "";
	bool rdStts = book.mReadingStatus.trimmed() != "";
	return name && catagory && rdStts;

}

bool Books::checkTagsInBook(const Book & book, const QStringList & tags)
{
	bool hasTags = true;
	for (const auto& tg : tags)
	{
		for (const QString& bktg : book.mTags)
		{
			hasTags &= bktg == tg;
		}
	}
	return hasTags;
}
