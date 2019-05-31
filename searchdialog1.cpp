#include "searchdialog1.h"
#include "ui_searchdialog1.h"
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>
#include <QByteArray>
#include <QLatin1String>
#include <QString>
#include <string>

SearchDialog1::SearchDialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog1)
{
    ui->setupUi(this);
    this->setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint);//去掉帮助按钮
    QPushButton *btnok=ui->buttonBox->button(QDialogButtonBox::Ok);
    btnok->setText("查询");
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

void SearchDialog1::setMainWindow(MainWindow *w)
{
    this->mw=w;
    this->setWindowTitle(QString::fromStdString(mw->table_name));
    for(int i=0;i<mw->column_num;i++){
        ui->comboBox->addItem(QString(QLatin1String(mw->column_name[i])),i);
    }

}

void SearchDialog1::accept()
{
    if (ui->lineEdit->text().isEmpty()){
        QMessageBox::warning(this,"警告","请输入完整！");
        return;
    }
    this->mw->select_column=ui->comboBox->currentData().toInt();
    this->mw->select_where=ui->comboBox_2->currentData().toInt();
    QByteArray ba;
    ba=ui->lineEdit->text().toLatin1();
    std::strcpy(this->mw->input_line,ba.data());
    qDebug()<<"accept!!!"<<endl;
    QDialog::accept();
}


SearchDialog1::~SearchDialog1()
{
    delete ui;
}
