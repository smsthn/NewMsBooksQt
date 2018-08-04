#include "CustomListView.h"

CustomListView::CustomListView(QWidget *parent)
	: QListView(parent)
{
	connect(this, SIGNAL(changedSelection()), parent, SLOT(prepareRequest()));
}

CustomListView::~CustomListView()
{
}

void CustomListView::currentChanged(const QModelIndex & current, const QModelIndex & previous)
{
	QListView::currentChanged(current, previous);
	emit changedSelection();
}
