#pragma once

#include <QListView>
#include "NewMsBooksQt.h"

class CustomListView : public QListView
{
	Q_OBJECT

public:
	CustomListView(QWidget *parent);
	~CustomListView();

	void currentChanged(const QModelIndex &current, const QModelIndex &previous) override;

signals:
	void changedSelection();
};
