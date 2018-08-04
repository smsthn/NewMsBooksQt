/********************************************************************************
** Form generated from reading UI file 'NewMsBooksQt.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMSBOOKSQT_H
#define UI_NEWMSBOOKSQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewMsBooksQtClass
{
public:
    QWidget *centralWidget;
    QFrame *MainGridView;
    QGridLayout *gridLayout;
    QHBoxLayout *TopHL;
    QVBoxLayout *CatagoriesVL;
    QLabel *label;
    QListView *CatagoriesListView;
    QVBoxLayout *ReadingStatusVL;
    QLabel *label_2;
    QListView *ReadingStatusListView;
    QVBoxLayout *TagsVL;
    QLabel *label_3;
    QListView *TagsListView;
    QFrame *BottomHL_2;
    QHBoxLayout *BottomHL;
    QFrame *ButtonsVL;
    QVBoxLayout *verticalLayout_2;
    QPushButton *SafeSaveBtn;
    QPushButton *AddBtn;
    QPushButton *DeleteBtn;
    QPushButton *ModifyBtn;
    QFrame *BookAndNotesHL;
    QHBoxLayout *horizontalLayout;
    QFrame *BooksVL;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *BookSearchTxtBx;
    QListView *BooksListView;
    QStackedWidget *NoteAndDiscriptionStackWidget;
    QWidget *DiscriptionPage;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QWidget *DiscriptionPage_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QListView *BookNotesListVIew;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NewMsBooksQtClass)
    {
        if (NewMsBooksQtClass->objectName().isEmpty())
            NewMsBooksQtClass->setObjectName(QStringLiteral("NewMsBooksQtClass"));
        NewMsBooksQtClass->resize(752, 501);
        NewMsBooksQtClass->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(NewMsBooksQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("#centralWidget{\n"
"background-color:white;\n"
"}"));
        MainGridView = new QFrame(centralWidget);
        MainGridView->setObjectName(QStringLiteral("MainGridView"));
        MainGridView->setGeometry(QRect(9, 9, 731, 431));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainGridView->sizePolicy().hasHeightForWidth());
        MainGridView->setSizePolicy(sizePolicy);
        MainGridView->setSizeIncrement(QSize(0, 0));
        MainGridView->setBaseSize(QSize(0, 0));
        gridLayout = new QGridLayout(MainGridView);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        TopHL = new QHBoxLayout();
        TopHL->setSpacing(6);
        TopHL->setObjectName(QStringLiteral("TopHL"));
        TopHL->setContentsMargins(0, -1, -1, -1);
        CatagoriesVL = new QVBoxLayout();
        CatagoriesVL->setSpacing(6);
        CatagoriesVL->setObjectName(QStringLiteral("CatagoriesVL"));
        label = new QLabel(MainGridView);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        CatagoriesVL->addWidget(label);

        CatagoriesListView = new QListView(MainGridView);
        CatagoriesListView->setObjectName(QStringLiteral("CatagoriesListView"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CatagoriesListView->sizePolicy().hasHeightForWidth());
        CatagoriesListView->setSizePolicy(sizePolicy1);

        CatagoriesVL->addWidget(CatagoriesListView);


        TopHL->addLayout(CatagoriesVL);

        ReadingStatusVL = new QVBoxLayout();
        ReadingStatusVL->setSpacing(6);
        ReadingStatusVL->setObjectName(QStringLiteral("ReadingStatusVL"));
        label_2 = new QLabel(MainGridView);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        ReadingStatusVL->addWidget(label_2);

        ReadingStatusListView = new QListView(MainGridView);
        ReadingStatusListView->setObjectName(QStringLiteral("ReadingStatusListView"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ReadingStatusListView->sizePolicy().hasHeightForWidth());
        ReadingStatusListView->setSizePolicy(sizePolicy2);

        ReadingStatusVL->addWidget(ReadingStatusListView);


        TopHL->addLayout(ReadingStatusVL);

        TagsVL = new QVBoxLayout();
        TagsVL->setSpacing(6);
        TagsVL->setObjectName(QStringLiteral("TagsVL"));
        TagsVL->setContentsMargins(0, -1, -1, -1);
        label_3 = new QLabel(MainGridView);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        TagsVL->addWidget(label_3);

        TagsListView = new QListView(MainGridView);
        TagsListView->setObjectName(QStringLiteral("TagsListView"));
        sizePolicy2.setHeightForWidth(TagsListView->sizePolicy().hasHeightForWidth());
        TagsListView->setSizePolicy(sizePolicy2);

        TagsVL->addWidget(TagsListView);


        TopHL->addLayout(TagsVL);


        gridLayout->addLayout(TopHL, 0, 0, 1, 1);

        BottomHL_2 = new QFrame(MainGridView);
        BottomHL_2->setObjectName(QStringLiteral("BottomHL_2"));
        BottomHL = new QHBoxLayout(BottomHL_2);
        BottomHL->setSpacing(6);
        BottomHL->setContentsMargins(11, 11, 11, 11);
        BottomHL->setObjectName(QStringLiteral("BottomHL"));
        ButtonsVL = new QFrame(BottomHL_2);
        ButtonsVL->setObjectName(QStringLiteral("ButtonsVL"));
        verticalLayout_2 = new QVBoxLayout(ButtonsVL);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(26, 15, 24, 16);
        SafeSaveBtn = new QPushButton(ButtonsVL);
        SafeSaveBtn->setObjectName(QStringLiteral("SafeSaveBtn"));

        verticalLayout_2->addWidget(SafeSaveBtn);

        AddBtn = new QPushButton(ButtonsVL);
        AddBtn->setObjectName(QStringLiteral("AddBtn"));

        verticalLayout_2->addWidget(AddBtn);

        DeleteBtn = new QPushButton(ButtonsVL);
        DeleteBtn->setObjectName(QStringLiteral("DeleteBtn"));

        verticalLayout_2->addWidget(DeleteBtn);

        ModifyBtn = new QPushButton(ButtonsVL);
        ModifyBtn->setObjectName(QStringLiteral("ModifyBtn"));

        verticalLayout_2->addWidget(ModifyBtn);


        BottomHL->addWidget(ButtonsVL);

        BookAndNotesHL = new QFrame(BottomHL_2);
        BookAndNotesHL->setObjectName(QStringLiteral("BookAndNotesHL"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(BookAndNotesHL->sizePolicy().hasHeightForWidth());
        BookAndNotesHL->setSizePolicy(sizePolicy3);
        BookAndNotesHL->setMinimumSize(QSize(554, 0));
        BookAndNotesHL->setSizeIncrement(QSize(0, 0));
        BookAndNotesHL->setBaseSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(BookAndNotesHL);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BooksVL = new QFrame(BookAndNotesHL);
        BooksVL->setObjectName(QStringLiteral("BooksVL"));
        verticalLayout_3 = new QVBoxLayout(BooksVL);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(BooksVL);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_3->addWidget(label_4);

        BookSearchTxtBx = new QLineEdit(BooksVL);
        BookSearchTxtBx->setObjectName(QStringLiteral("BookSearchTxtBx"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(BookSearchTxtBx->sizePolicy().hasHeightForWidth());
        BookSearchTxtBx->setSizePolicy(sizePolicy4);
        BookSearchTxtBx->setMinimumSize(QSize(0, 27));

        verticalLayout_3->addWidget(BookSearchTxtBx);

        BooksListView = new QListView(BooksVL);
        BooksListView->setObjectName(QStringLiteral("BooksListView"));
        sizePolicy2.setHeightForWidth(BooksListView->sizePolicy().hasHeightForWidth());
        BooksListView->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(BooksListView);


        horizontalLayout->addWidget(BooksVL);

        NoteAndDiscriptionStackWidget = new QStackedWidget(BookAndNotesHL);
        NoteAndDiscriptionStackWidget->setObjectName(QStringLiteral("NoteAndDiscriptionStackWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(NoteAndDiscriptionStackWidget->sizePolicy().hasHeightForWidth());
        NoteAndDiscriptionStackWidget->setSizePolicy(sizePolicy5);
        NoteAndDiscriptionStackWidget->setMinimumSize(QSize(277, 207));
        DiscriptionPage = new QWidget();
        DiscriptionPage->setObjectName(QStringLiteral("DiscriptionPage"));
        verticalLayout = new QVBoxLayout(DiscriptionPage);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(DiscriptionPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_5->addWidget(label_6);


        verticalLayout->addLayout(verticalLayout_5);

        NoteAndDiscriptionStackWidget->addWidget(DiscriptionPage);
        DiscriptionPage_2 = new QWidget();
        DiscriptionPage_2->setObjectName(QStringLiteral("DiscriptionPage_2"));
        verticalLayoutWidget_4 = new QWidget(DiscriptionPage_2);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(-1, -1, 281, 211));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_4->addWidget(label_5);

        BookNotesListVIew = new QListView(verticalLayoutWidget_4);
        BookNotesListVIew->setObjectName(QStringLiteral("BookNotesListVIew"));
        sizePolicy2.setHeightForWidth(BookNotesListVIew->sizePolicy().hasHeightForWidth());
        BookNotesListVIew->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(BookNotesListVIew);

        NoteAndDiscriptionStackWidget->addWidget(DiscriptionPage_2);

        horizontalLayout->addWidget(NoteAndDiscriptionStackWidget);


        BottomHL->addWidget(BookAndNotesHL);


        gridLayout->addWidget(BottomHL_2, 1, 0, 1, 1);

        NewMsBooksQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NewMsBooksQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 752, 21));
        NewMsBooksQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NewMsBooksQtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        NewMsBooksQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NewMsBooksQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NewMsBooksQtClass->setStatusBar(statusBar);

        retranslateUi(NewMsBooksQtClass);

        NoteAndDiscriptionStackWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(NewMsBooksQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *NewMsBooksQtClass)
    {
        NewMsBooksQtClass->setWindowTitle(QApplication::translate("NewMsBooksQtClass", "NewMsBooksQt", nullptr));
        label->setText(QApplication::translate("NewMsBooksQtClass", "Catagories", nullptr));
        label_2->setText(QApplication::translate("NewMsBooksQtClass", "ReadingStatus", nullptr));
        label_3->setText(QApplication::translate("NewMsBooksQtClass", "Tags", nullptr));
        SafeSaveBtn->setText(QApplication::translate("NewMsBooksQtClass", "SafeSave", nullptr));
        AddBtn->setText(QApplication::translate("NewMsBooksQtClass", "Add", nullptr));
        DeleteBtn->setText(QApplication::translate("NewMsBooksQtClass", "Delete", nullptr));
        ModifyBtn->setText(QApplication::translate("NewMsBooksQtClass", "Modify", nullptr));
        label_4->setText(QApplication::translate("NewMsBooksQtClass", "Books", nullptr));
        BookSearchTxtBx->setPlaceholderText(QApplication::translate("NewMsBooksQtClass", "Search Books", nullptr));
        label_6->setText(QApplication::translate("NewMsBooksQtClass", "BookDiscription", nullptr));
        label_5->setText(QApplication::translate("NewMsBooksQtClass", "BookNotes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewMsBooksQtClass: public Ui_NewMsBooksQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMSBOOKSQT_H
