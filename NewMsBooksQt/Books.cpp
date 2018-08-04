#include "stdafx.h"
#include "Books.h"




Books::~Books()
{
}

void Books::initialize()
{
	//get all books from file
	TheSerializationClass sr;
	sr.deserializeTheBooks("D:/MassoudBooks/prsave.dat");
	allBooks = sr.allBooksStd;
	for (const auto& tag : sr.allTagsStd)
	{
		allTags.push_back(QString::fromStdString(tag));
	}
	//init allCatatgories and allReadingStatus
	allCatagories = std::move(QStringList() << "Any"<< "Math"<< "GameDev"<< "CSharp"<< "Java"<< "Cs"<< "Cpp"<< "Emmbedded"<< "PyAndMl"<< "Art"<< "Android");
	allReadingStatus = std::move(QStringList() << "Any" << "Reading" << "WannaRead" << "WannaRead2" << "YetToWannaRead" << "DelayedReading" << "Finished" << "Dropped");
}




//Getters
const Book & Books::getBook(QString name)
{
	for (const auto& book : allBooks) if (book->mName == name) return *book;
}

const QStringList & Books::getAllBooks()
{
	QStringList tempBooksLst;
	for (const auto& book : allBooks)tempBooksLst.push_back(book->mName);
}

const QStringList & Books::getAllTags()
{
	QStringList tempTagsLst;
	for (const auto& tag : allTags)tempTagsLst.push_back(tag);
}

const QStringList & Books::getAllReadingStatus()
{
	QStringList tempRdSttsLst;
	for (const auto& rdStts : allReadingStatus)tempRdSttsLst.push_back(rdStts);
}

const QStringList & Books::getAllCatagories()
{
	QStringList tempCtgLst;
	for (const auto& ctgry : allCatagories)tempCtgLst.push_back(ctgry);
}
//


//Modifiers
void Books::addBook(Book && book, std::function<void()> fail = nullptr)
{
	for (auto& bk : allBooks)if (bk->mName == book.mName)if (fail != nullptr) { fail(); }return;
	if(checkValues(book))if (fail != nullptr) { fail(); }return;
	allBooks.push_back(std::make_unique<Book>(std::move(book)));
}

void Books::removeBook(QString bookName)
{
	for (auto& book : allBooks)if (book->mName == bookName)allBooks.erase(book);
}

void Books::modifyBook(QString oldName, Book && newBook, std::function<void()> fail = nullptr)
{
	if (checkValues(book))if (fail != nullptr) { fail(); }return;
	for (auto& book : allBooks)if (book->mName == oldName)*book = std::move(newBook);
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