/********************************************************************************
** Form generated from reading UI file 'newfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILEDIALOG_H
#define UI_NEWFILEDIALOG_H

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

class Ui_NewFileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewFileDialog)
    {
        if (NewFileDialog->objectName().isEmpty())
            NewFileDialog->setObjectName(QStringLiteral("NewFileDialog"));
        NewFileDialog->resize(740, 478);
        verticalLayout = new QVBoxLayout(NewFileDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(NewFileDialog);
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

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));

        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(NewFileDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NewFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewFileDialog);
    } // setupUi

    void retranslateUi(QDialog *NewFileDialog)
    {
        NewFileDialog->setWindowTitle(QApplication::translate("NewFileDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("NewFileDialog", "\346\226\260\345\273\272\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewFileDialog: public Ui_NewFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILEDIALOG_H
