/********************************************************************************
** Form generated from reading UI file 'deletedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDIALOG_H
#define UI_DELETEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeleteDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeleteDialog)
    {
        if (DeleteDialog->objectName().isEmpty())
            DeleteDialog->setObjectName(QStringLiteral("DeleteDialog"));
        DeleteDialog->resize(184, 300);
        verticalLayout = new QVBoxLayout(DeleteDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DeleteDialog);
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
        label_2 = new QLabel(DeleteDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(DeleteDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_3 = new QLabel(DeleteDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        comboBox_2 = new QComboBox(DeleteDialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_2);

        label_4 = new QLabel(DeleteDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit = new QLineEdit(DeleteDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(DeleteDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DeleteDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DeleteDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DeleteDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DeleteDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteDialog)
    {
        DeleteDialog->setWindowTitle(QApplication::translate("DeleteDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DeleteDialog", "\345\210\240\351\231\244\346\225\260\346\215\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("DeleteDialog", "\345\214\271\351\205\215\345\261\236\346\200\247", Q_NULLPTR));
        label_3->setText(QApplication::translate("DeleteDialog", "\346\235\241\344\273\266", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("DeleteDialog", "=", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("DeleteDialog", "\345\200\274", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteDialog: public Ui_DeleteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDIALOG_H
