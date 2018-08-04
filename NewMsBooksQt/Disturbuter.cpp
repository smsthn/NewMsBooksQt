#include "stdafx.h"
#include "Disturbuter.h"

Disturbuter::Disturbuter(QObject *parent)
	: QObject(parent)
{
}
Disturbuter::Disturbuter(NewMsBooksQt* mainWindow): QObject(){
	this->mainWindow = mainWindow;
	Booksptr = std::make_unique<Books>();
}

Disturbuter::~Disturbuter()
{
	mainWindow = nullptr;
}

void Disturbuter::recieveRequest(IRequests * sender, Book & book, IRequests::MSFlags flags)
{
}










/*
//Books Methoods
const Book  Disturbuter::getBook(QString name)
{
	return Booksptr->getBook(name);
}

const QStringList  Disturbuter::getAllBooks()
{
	return Booksptr->getAllBooks();
}

const QStringList  Disturbuter::getAllTags()
{
	return Booksptr->getAllTags();
}

const QStringList  Disturbuter::getAllReadingStatus()
{
	return Booksptr->getAllReadingStatus();
}

const QStringList  Disturbuter::getAllCatagories()
{
	return Booksptr->getAllCatagories();
}

QStringList Disturbuter::getFilteredBooksList(const QString & catagory, const QString & readingStatus, const QStringList & tags)
{
	return Booksptr->getFilteredBooksList(catagory, readingStatus, tags);
}

void Disturbuter::addBook(Book & book)
{
	Booksptr->addBook(std::move(book),nullptr);
}

void Disturbuter::removeBook(QString bookName)
{
	Booksptr->removeBook(bookName);
}

void Disturbuter::modifyBook(QString oldName, Book & newBook)
{
	Booksptr->modifyBook(oldName,std::move(newBook),nullptr);
}

void Disturbuter::addTag(QString tag)
{
	Booksptr->addTag(tag);
}
//
*/