/********************************************************************************
** Form generated from reading UI file 'insertdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTDIALOG_H
#define UI_INSERTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InsertDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InsertDialog)
    {
        if (InsertDialog->objectName().isEmpty())
            InsertDialog->setObjectName(QStringLiteral("InsertDialog"));
        InsertDialog->resize(350, 287);
        verticalLayout = new QVBoxLayout(InsertDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(InsertDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));

        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(InsertDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(InsertDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), InsertDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InsertDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(InsertDialog);
    } // setupUi

    void retranslateUi(QDialog *InsertDialog)
    {
        InsertDialog->setWindowTitle(QApplication::translate("InsertDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("InsertDialog", "\346\226\260\345\242\236\346\225\260\346\215\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InsertDialog: public Ui_InsertDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTDIALOG_H
