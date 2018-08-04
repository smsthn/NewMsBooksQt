#pragma once
#include "qstring.h"
#include "qstringlist.h"
#include "Book.h"
#include "TheSerializationClass.h"
#include <vector>
#include <memory>


class Books
{
public:
	Books() {}
	~Books() {}
	friend class Disturbuter;
private:
	
	

	void initialize();
	void desirialize();


	Book getBook(QString name);
	 QStringList getAllBooks();
	const QStringList& getAllTags();
	const QStringList& getAllReadingStatus();
	const QStringList& getAllCatagories();
	QStringList getFilteredBooksList(const QString& catagory, const QString& readingStatus, const QStringList& tags);
	
	void addBook(Book & book, std::function<void()> fail);
	void removeBook(QString bookName);
	void modifyBook(QString oldName, Book & newBook, std::function<void()> fail);

	void addTag(QString tag);

private:
	bool checkValues(const Book& book);
	bool checkTagsInBook(const Book& book, const QStringList& tags);


private:
	 std::vector<std::unique_ptr<Book>> allBooks;
	 QStringList allTags;
	 QStringList allCatagories;
	 QStringList allReadingStatus;

};

