#pragma once

#include <QObject>
#include <memory>
#include "Book.h"
#include "Books.h"
#include "NewMsBooksQt.h"


//class Book;
class Books;
class NewMsBooksQt;

class Disturbuter : public QObject
{
	Q_OBJECT

public:
	Disturbuter(QObject *parent);
	Disturbuter(NewMsBooksQt* mainWindow);
	~Disturbuter();



private:
	std::unique_ptr<Books> Booksptr;
	NewMsBooksQt* mainWindow;


public:
	//Books Methods
	const Book& getBook(QString name);
	const QStringList& getAllBooks();
	const QStringList& getAllTags();
	const QStringList& getAllReadingStatus();
	const QStringList& getAllCatagories();

	void addBook(Book&& book);
	void removeBook(QString bookName);
	void modifyBook(QString oldName, Book&& newBook);

	void addTag(QString tag);
	//
};
