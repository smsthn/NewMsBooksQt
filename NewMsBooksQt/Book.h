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
	Book(Book &&book) {
		mName = book.mName;
		mCatagory = book.mCatagory;
		mReadingStatus = book.mReadingStatus;
		mTags = book.mTags;
		mPageNumber = book.mPageNumber;
		mBookNotes = book.mBookNotes;
		book.mPageNumber = 0;
		book.mBookNotes.clear();
		book.mTags.clear();
		book.mReadingStatus.clear();
		book.mName.clear();
	}
	Book& operator=(Book&& book) {
		mName = book.mName;
		mCatagory = book.mCatagory;
		mReadingStatus = book.mReadingStatus;
		mTags = book.mTags;
		mPageNumber = book.mPageNumber;
		mBookNotes = book.mBookNotes;
		book.mPageNumber = 0;
		book.mBookNotes.clear();
		book.mTags.clear();
		book.mReadingStatus.clear();
		book.mName.clear();
		return *this;
	}
	Book(const Book &book) {
		mName = book.mName;
		mCatagory = book.mCatagory;
		mReadingStatus = book.mReadingStatus;
		mTags = book.mTags;
		mPageNumber = book.mPageNumber;
		mBookNotes = book.mBookNotes;
	};
	Book& operator=(const Book& book) {
		mName = book.mName;
		mCatagory = book.mCatagory;
		mReadingStatus = book.mReadingStatus;
		mTags = book.mTags;
		mPageNumber = book.mPageNumber;
		mBookNotes = book.mBookNotes;
		return *this;
	}
};