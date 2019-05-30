/********************************************************************************
** Form generated from reading UI file 'updatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDIALOG_H
#define UI_UPDATEDIALOG_H

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

class Ui_UpdateDialog
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
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UpdateDialog)
    {
        if (UpdateDialog->objectName().isEmpty())
            UpdateDialog->setObjectName(QStringLiteral("UpdateDialog"));
        UpdateDialog->resize(184, 300);
        verticalLayout = new QVBoxLayout(UpdateDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(UpdateDialog);
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
        label_2 = new QLabel(UpdateDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(UpdateDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_3 = new QLabel(UpdateDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        comboBox_2 = new QComboBox(UpdateDialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_2);

        label_4 = new QLabel(UpdateDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit = new QLineEdit(UpdateDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit);

        label_5 = new QLabel(UpdateDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit_2 = new QLineEdit(UpdateDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_2);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(UpdateDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UpdateDialog);

        QMetaObject::connectSlotsByName(UpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateDialog)
    {
        UpdateDialog->setWindowTitle(QApplication::translate("UpdateDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("UpdateDialog", "\344\277\256\346\224\271\346\225\260\346\215\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("UpdateDialog", "\345\214\271\351\205\215\345\261\236\346\200\247", Q_NULLPTR));
        label_3->setText(QApplication::translate("UpdateDialog", "\346\235\241\344\273\266", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("UpdateDialog", "=", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("UpdateDialog", "\345\200\274", Q_NULLPTR));
        label_5->setText(QApplication::translate("UpdateDialog", "\344\277\256\346\224\271\344\270\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UpdateDialog: public Ui_UpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDIALOG_H
