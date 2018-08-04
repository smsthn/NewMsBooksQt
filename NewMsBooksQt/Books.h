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
	Books();
	~Books();

	void initialize();
	void desirialize();

	static const Book& getBook(QString name);
	static const QStringList& getAllBooks();
	static const QStringList& getAllTags();
	static const QStringList& getAllReadingStatus();
	static const QStringList& getAllCatagories();
	
	static void addBook(Book&& book, std::function<void()> fail);
	static void removeBook(QString bookName);
	static void modifyBook(QString oldName,Book&& newBook, std::function<void()> fail);

	static void addTag(QString tag);

private:
	static bool checkValues(const Book& book);


private:
	static std::vector<std::unique_ptr<Book>> allBooks;
	static QStringList allTags;
	static QStringList allCatagories;
	static QStringList allReadingStatus;
};

