#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NewMsBooksQt.h"

class NewMsBooksQt : public QMainWindow
{
	Q_OBJECT

public:
	NewMsBooksQt(QWidget *parent = Q_NULLPTR);

private:
	Ui::NewMsBooksQtClass ui;
};
