/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNewFile;
    QAction *actionOpenFile;
    QAction *actionSearch;
    QAction *actionInsert;
    QAction *actionDelete;
    QAction *actionUpdate;
    QAction *actionInsertTXT;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QTableWidget *table;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 800);
        actionNewFile = new QAction(MainWindow);
        actionNewFile->setObjectName(QStringLiteral("actionNewFile"));
        actionNewFile->setCheckable(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/new_file"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewFile->setIcon(icon);
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName(QStringLiteral("actionOpenFile"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/open_file"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenFile->setIcon(icon1);
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QStringLiteral("actionSearch"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/find"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearch->setIcon(icon2);
        actionInsert = new QAction(MainWindow);
        actionInsert->setObjectName(QStringLiteral("actionInsert"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/insert"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsert->setIcon(icon3);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/delete"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon4);
        actionUpdate = new QAction(MainWindow);
        actionUpdate->setObjectName(QStringLiteral("actionUpdate"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/update"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpdate->setIcon(icon5);
        actionInsertTXT = new QAction(MainWindow);
        actionInsertTXT->setObjectName(QStringLiteral("actionInsertTXT"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/insert_txt"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsertTXT->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1180, 685));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        table = new QTableWidget(scrollAreaWidgetContents);
        table->setObjectName(QStringLiteral("table"));

        verticalLayout->addWidget(table);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setIconSize(QSize(64, 64));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionNewFile);
        toolBar->addAction(actionOpenFile);
        toolBar->addAction(actionSearch);
        toolBar->addAction(actionInsert);
        toolBar->addAction(actionDelete);
        toolBar->addAction(actionUpdate);
        toolBar->addAction(actionInsertTXT);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNewFile->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNewFile->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\344\270\200\344\270\252\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionNewFile->setStatusTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionNewFile->setWhatsThis(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionOpenFile->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpenFile->setToolTip(QApplication::translate("MainWindow", "\344\273\216\344\273\245\344\277\235\345\255\230\347\232\204\346\226\207\344\273\266\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSearch->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSearch->setToolTip(QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\211\271\345\256\232\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionInsert->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionInsert->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\242\236\344\270\200\346\235\241\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244\347\211\271\345\256\232\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUpdate->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUpdate->setToolTip(QApplication::translate("MainWindow", "\346\233\264\346\226\260\346\225\260\346\215\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionInsertTXT->setText(QApplication::translate("MainWindow", "\346\211\271\351\207\217\346\226\260\345\242\236", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionInsertTXT->setToolTip(QApplication::translate("MainWindow", "\344\273\216TXT\346\226\207\344\273\266\346\211\271\351\207\217\346\226\260\345\242\236", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
