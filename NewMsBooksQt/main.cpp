#include "stdafx.h"
#include "NewMsBooksQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	NewMsBooksQt w;
	w.show();
	return a.exec();
}
