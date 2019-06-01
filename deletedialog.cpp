#include "deletedialog.h"
#include "ui_deletedialog.h"
#include <QDebug>
#include <string>
#include <QString>
#include <QLatin1String>
#include <QLabel>
#include <QDialogButtonBox>
#include <QPushButton>
#include <QComboBox>
#include <QDialog>
#include <QMessageBox>
#include <QRegExp>

DeleteDialog::DeleteDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteDialog)
{
    ui->setupUi(this);
    this->setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint);//去掉帮助按钮
    QPushButton *btnok=ui->buttonBox->button(QDialogButtonBox::Ok);
    btnok->setText("删除");
    QPushButton *btncancel=ui->buttonBox->button(QDialogButtonBox::Cancel);
    btncancel->setText("取消");
    ui->comboBox->addItem("*",-1);
    ui->comboBox_2->addItem("=",0);
    ui->comboBox_2->addItem("<",1);
    ui->comboBox_2->addItem("<=",2);
    ui->comboBox_2->addItem(">",3);
    ui->comboBox_2->addItem(">=",4);
    ui->comboBox_2->addItem("like",5);
}

void DeleteDialog::setMainWindow(MainWindow *w)
{
    this->mw=w;
    this->setWindowTitle(QString::fromStdString(mw->table_name));
    for(int i=0;i<mw->column_num;i++){
        ui->comboBox->addItem(QString(QLatin1String(mw->column_name[i])),i);
    }
}

void DeleteDialog::accept()
{
    QRegExp rx("-?[0-9]+");
    int index=ui->comboBox->currentData().toInt();
    if (ui->lineEdit->text().isEmpty()){
        QMessageBox::warning(this,"警告","请输入完整！");
        return;
    }else if (index!=-1 && this->mw->type_list[index]==0 && !rx.exactMatch(ui->lineEdit->text())){
        QMessageBox::warning(this,"警告",QString(QLatin1String(mw->column_name[index]))+"属性为Int！");
        return;
    }

    this->mw->select_column=ui->comboBox->currentData().toInt();
    this->mw->select_where=ui->comboBox_2->currentData().toInt();

    QByteArray ba;
    ba=ui->lineEdit->text().toLatin1();
    std::strcpy(this->mw->input_line,ba.data());
//    qDebug()<<"delete accept"<<this->mw->select_column<<endl;

    QDialog::accept();
}


DeleteDialog::~DeleteDialog()
{
    delete ui;
}
