#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NewMsBooksQt.h"
#include "Book.h"
#include "qstringlistmodel.h"
#include "IRequests.h"
#include "Disturbuter.h"
#include <memory>


class NewMsBooksQt : public QMainWindow, IRequests
{
	Q_OBJECT

public:
	NewMsBooksQt(QWidget *parent = Q_NULLPTR);

private:
	Ui::NewMsBooksQtClass ui;

	std::shared_ptr<Disturbuter> disturbuter;

	QStringListModel* catagoriesModel;
	QStringListModel* readingStatusModel;
	QStringListModel* booksModel;
	QStringListModel* tagsModel;

private:
	const QString& getSelectedItem(QListView* listview);
	QStringList getSelectedItems(QListView* listview);


public slots:
	void initLists();
	void refreshList(const QString& listName, QStringList list);

	void prepareRequest();

	void sendRequestToDisturbuter(Book& book,MSFlags flags);

};
