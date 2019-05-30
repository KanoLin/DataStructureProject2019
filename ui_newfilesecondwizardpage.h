/********************************************************************************
** Form generated from reading UI file 'newfilesecondwizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILESECONDWIZARDPAGE_H
#define UI_NEWFILESECONDWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_NewFileSecondWizardPage
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWizardPage *NewFileSecondWizardPage)
    {
        if (NewFileSecondWizardPage->objectName().isEmpty())
            NewFileSecondWizardPage->setObjectName(QStringLiteral("NewFileSecondWizardPage"));
        NewFileSecondWizardPage->resize(400, 300);
        gridLayout = new QGridLayout(NewFileSecondWizardPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(NewFileSecondWizardPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label = new QLabel(NewFileSecondWizardPage);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);


        retranslateUi(NewFileSecondWizardPage);

        QMetaObject::connectSlotsByName(NewFileSecondWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *NewFileSecondWizardPage)
    {
        NewFileSecondWizardPage->setWindowTitle(QApplication::translate("NewFileSecondWizardPage", "WizardPage", Q_NULLPTR));
        label_2->setText(QApplication::translate("NewFileSecondWizardPage", "\345\261\236\346\200\247\347\261\273\345\236\213", Q_NULLPTR));
        label->setText(QApplication::translate("NewFileSecondWizardPage", "\345\261\236\346\200\247\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewFileSecondWizardPage: public Ui_NewFileSecondWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILESECONDWIZARDPAGE_H
