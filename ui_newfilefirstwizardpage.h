/********************************************************************************
** Form generated from reading UI file 'newfilefirstwizardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILEFIRSTWIZARDPAGE_H
#define UI_NEWFILEFIRSTWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_NewFileFirstWizardPage
{
public:
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QSpinBox *spinBox;

    void setupUi(QWizardPage *NewFileFirstWizardPage)
    {
        if (NewFileFirstWizardPage->objectName().isEmpty())
            NewFileFirstWizardPage->setObjectName(QStringLiteral("NewFileFirstWizardPage"));
        NewFileFirstWizardPage->resize(400, 300);
        formLayout = new QFormLayout(NewFileFirstWizardPage);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::SpanningRole, verticalSpacer);

        label = new QLabel(NewFileFirstWizardPage);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(NewFileFirstWizardPage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(NewFileFirstWizardPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        spinBox = new QSpinBox(NewFileFirstWizardPage);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(20);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox);


        retranslateUi(NewFileFirstWizardPage);

        QMetaObject::connectSlotsByName(NewFileFirstWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *NewFileFirstWizardPage)
    {
        NewFileFirstWizardPage->setWindowTitle(QApplication::translate("NewFileFirstWizardPage", "WizardPage", Q_NULLPTR));
        label->setText(QApplication::translate("NewFileFirstWizardPage", "\350\241\250\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("NewFileFirstWizardPage", "\345\261\236\346\200\247\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewFileFirstWizardPage: public Ui_NewFileFirstWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILEFIRSTWIZARDPAGE_H
