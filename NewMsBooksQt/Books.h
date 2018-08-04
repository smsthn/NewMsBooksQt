#pragma once
#include "qstring.h"
#include "qstringlist.h"
#include "Book.h"
#include "TheSerializationClass.h"
#include <vector>
#include <memory>


class Books
{
	friend class Disturbuter;
private:
	Books(){}
	~Books();

	void initialize();
	void desirialize();


	const Book& getBook(QString name);
	const QStringList& getAllBooks();
	const QStringList& getAllTags();
	const QStringList& getAllReadingStatus();
	const QStringList& getAllCatagories();
	
	void addBook(Book&& book, std::function<void()> fail);
	void removeBook(QString bookName);
	void modifyBook(QString oldName,Book&& newBook, std::function<void()> fail);

	void addTag(QString tag);

private:
	bool checkValues(const Book& book);


private:
	static std::vector<std::unique_ptr<Book>> allBooks;
	static QStringList allTags;
	static QStringList allCatagories;
	static QStringList allReadingStatus;

};

