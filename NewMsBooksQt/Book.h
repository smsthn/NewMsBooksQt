#pragma once

#include "qstring.h"
#include "qstringlist.h"


struct Book
{
	QString mName;
	QString mCatagory;
	QString mReadingStatus;
	QStringList mTags;
	int32_t mPageNumber;
	QStringList mBookNotes;

	Book(QString name, QString catagory, QString readingStatus, QStringList tags, int32_t pageNumber)
		:mName(name),mCatagory(catagory),mReadingStatus(readingStatus), mTags(tags), mPageNumber(pageNumber)
	{}
	Book(Book &&book) = default;
	Book& operator=(Book&& book) = default;
};