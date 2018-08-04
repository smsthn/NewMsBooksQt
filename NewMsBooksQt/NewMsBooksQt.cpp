#include "stdafx.h"
#include "NewMsBooksQt.h"

NewMsBooksQt::NewMsBooksQt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	disturbuter = std::make_shared<Disturbuter>(this);

	catagoriesModel = new QStringListModel(this);
	readingStatusModel = new QStringListModel(this);
	booksModel = new QStringListModel(this);
	tagsModel = new QStringListModel(this);

	initLists();

	connect(ui.AddBtn, &QAbstractButton::clicked, [&]() {prepareRequest(); });
	connect(ui.ModifyBtn, &QAbstractButton::clicked, [&]() {prepareRequest(); });
	connect(ui.DeleteBtn, &QAbstractButton::clicked, [&]() {prepareRequest(); });
}

const QString & NewMsBooksQt::getSelectedItem(QListView * listview)
{
	return listview->selectionModel()->selectedIndexes()[0].data(Qt::DisplayRole).toString();
}

QStringList NewMsBooksQt::getSelectedItems(QListView * listview)
{
	QStringList slctedItems;
	for (const auto& slctd : listview->selectionModel()->selectedIndexes())
	{
		slctedItems.push_back(slctd.data(Qt::DisplayRole).toString());
	}
	return slctedItems;
}

void NewMsBooksQt::initLists()
{
	QStringList temp(0);
	QString ctg = "Catagories";
	QString rdstts = "ReadingStatus";
	QString tgs = "Tags";
	QString bks = "Books";
	Book book(bks,"","",temp,0);
	sendRequestToDisturbuter(book, MSFlags::RefreshListRequest);
	book.mName = ctg;
	sendRequestToDisturbuter(book, MSFlags::RefreshListRequest);
	book.mName = rdstts;
	sendRequestToDisturbuter(book, MSFlags::RefreshListRequest);
	book.mName = tgs;
	sendRequestToDisturbuter(book, MSFlags::RefreshListRequest);

}

void NewMsBooksQt::refreshList(const QString& listName, QStringList list)
{
	
	if (listName == "Catagories")
	{
		catagoriesModel->setStringList(list);
		ui.CatagoriesListView->setModel(catagoriesModel);
		return;
	}
	if (listName == "ReadingStatus")
	{
		readingStatusModel->setStringList(list);
		ui.CatagoriesListView->setModel(readingStatusModel);
		return;
	}
	if (listName == "Tags")
	{
		tagsModel->setStringList(list);
		ui.CatagoriesListView->setModel(tagsModel);
		return;
	}
	if (listName == "Books")
	{
		booksModel->setStringList(list);
		ui.CatagoriesListView->setModel(booksModel);
		return;
	}
}

void NewMsBooksQt::prepareRequest()
{
	if (sender() == ui.CatagoriesListView|| sender() == ui.TagsListView|| sender() == ui.ReadingStatusListView )
	{
		QString catagory = getSelectedItem(ui.CatagoriesListView);
		QString readingStatus = getSelectedItem(ui.ReadingStatusListView);
		QStringList tags = getSelectedItems(ui.TagsListView);
		Book book("Books", catagory, readingStatus, tags, 0);
		sendRequestToDisturbuter(book,MSFlags::RefreshListRequest);
		return;
	}
	if (sender() == ui.AddBtn)
	{
		QString sh = "";
		QStringList msh(0);
		Book book("", "", "", msh, 0);
		sendRequestToDisturbuter(book, MSFlags::OpenAddWindowRequest);
		return;
	}
	if (sender() == ui.ModifyBtn)
	{
		if (ui.BooksListView->selectionModel()->selectedIndexes().empty())return;
		QString name = getSelectedItem(ui.BookNotesListVIew);
		QStringList msh(0);
		Book book(name, "", "", msh, 0);
		sendRequestToDisturbuter(book, MSFlags::OpenModifyWindowRequest);
		return;
	}
	if (sender() == ui.DeleteBtn)
	{
		QString name = getSelectedItem(ui.BookNotesListVIew);
		QStringList msh(0);
		Book book(name, "", "", msh, 0);
		sendRequestToDisturbuter(book, MSFlags::RemoveRequest);
		return;
	}

}

void NewMsBooksQt::sendRequestToDisturbuter(Book & book, MSFlags flags)
{
	disturbuter->recieveRequest(this, book, flags);
}
