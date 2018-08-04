#pragma once

#include <QObject>
#include <memory>
#include "Book.h"
#include "Books.h"
#include "NewMsBooksQt.h"
#include "IRequests.h"


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


	void recieveRequest(IRequests* sender,Book& book, IRequests::MSFlags flags);












	/*
	//Books Methods
	const Book getBook(QString name);
	const QStringList getAllBooks();
	const QStringList getAllTags();
	const QStringList getAllReadingStatus();
	const QStringList getAllCatagories();
	QStringList getFilteredBooksList(const QString& catagory, const QString& readingStatus, const QStringList& tags);

	void addBook(Book& book);
	void removeBook(QString bookName);
	void modifyBook(QString oldName, Book& newBook);

	void addTag(QString tag);
	//
	*/
};
