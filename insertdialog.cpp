#include "insertdialog.h"
#include "ui_insertdialog.h"
#include <QDebug>
#include <string>
#include <QString>
#include <QLatin1String>
#include <QLabel>
#include <QDialogButtonBox>
#include <QPushButton>
#include <QMessageBox>
#include <QByteArray>
#include <cstring>
#include <QRegExp>

InsertDialog::InsertDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InsertDialog)
{
    ui->setupUi(this);
    this->setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint);//去掉帮助按钮
    QPushButton *btnok=ui->buttonBox->button(QDialogButtonBox::Ok);
    btnok->setText("插入");
    QPushButton *btncancel=ui->buttonBox->button(QDialogButtonBox::Cancel);
    btncancel->setText("取消");

}

void InsertDialog::setMainWindow(MainWindow *w)
{
    this->mw=w;
    this->setWindowTitle(QString::fromStdString(mw->table_name));
    QLabel *label;
    QString str;
    for (int i=0;i<mw->column_num;i++){
        str=QString(QLatin1String(mw->column_name[i]));
        label=new QLabel(str);
        this->input[i].setMaxLength(30);
        ui->formLayout->addRow(label,&this->input[i]);
    }
}

void InsertDialog::accept()
{
    QRegExp rx("-?[0-9]+");
    for (int i=0;i<mw->column_num;i++){
        if (this->input[i].text().isEmpty()){
            QMessageBox::warning(this,"警告","请输入完整！");
            return;
        }else if (this->mw->type_list[i]==0 && !rx.exactMatch(this->input[i].text().trimmed())){
            QMessageBox::warning(this,"警告",QString(QLatin1String(mw->column_name[i]))+"属性为Int！");
            return;
        }
    }
    QByteArray ba;

    for (int i=0;i<mw->column_num;i++){
        ba=this->input[i].text().toLatin1();
        std::strcpy(mw->insert_content[i],ba.data());
//        qDebug()<<mw->insert_content[i];
    }
    QDialog::accept();
}

InsertDialog::~InsertDialog()
{
    delete ui;
}
