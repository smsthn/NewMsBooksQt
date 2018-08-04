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


//Books Methoods
const Book & Disturbuter::getBook(QString name)
{
	Booksptr->getBook(name);
}

const QStringList & Disturbuter::getAllBooks()
{
	Booksptr->getAllBooks();
}

const QStringList & Disturbuter::getAllTags()
{
	Booksptr->getAllTags();
}

const QStringList & Disturbuter::getAllReadingStatus()
{
	Booksptr->getAllReadingStatus();
}

const QStringList & Disturbuter::getAllCatagories()
{
	Booksptr->getAllCatagories();
}

void Disturbuter::addBook(Book && book)
{
	Booksptr->addBook(std::move(book),nullptr);
}

void Disturbuter::removeBook(QString bookName)
{
	Booksptr->removeBook(bookName);
}

void Disturbuter::modifyBook(QString oldName, Book && newBook)
{
	Booksptr->modifyBook(oldName,std::move(newBook),nullptr);
}

void Disturbuter::addTag(QString tag)
{
	Booksptr->addTag(tag);
}
//