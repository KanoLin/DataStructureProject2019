#include "updatedialog1.h"
#include "ui_updatedialog1.h"
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>
#include <QByteArray>
#include <QLatin1String>
#include <QString>
#include <string>
#include <QRegExp>


UpdateDialog1::UpdateDialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateDialog1)
{
    ui->setupUi(this);
    this->setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint);//去掉帮助按钮
    QPushButton *btnok=ui->buttonBox->button(QDialogButtonBox::Ok);
    btnok->setText("修改");
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

void UpdateDialog1::setMainWindow(MainWindow *w)
{
    this->mw=w;
    this->setWindowTitle(QString::fromStdString(mw->table_name));
    for(int i=0;i<mw->column_num;i++){
        ui->comboBox->addItem(QString(QLatin1String(mw->column_name[i])),i);
    }
    for(int i=0;i<mw->column_num;i++){
        ui->comboBox_3->addItem(QString(QLatin1String(mw->column_name[i])),i);
    }

}

void UpdateDialog1::accept()
{
    QRegExp rx("-?[0-9]+");
    int index=ui->comboBox->currentData().toInt();
    int index2=ui->comboBox_3->currentData().toInt();
    if (ui->lineEdit->text().isEmpty()){
        QMessageBox::warning(this,"警告","请输入完整！");
        return;
    }else if (index!=-1 && this->mw->type_list[index]==0 && !rx.exactMatch(ui->lineEdit->text())){
        QMessageBox::warning(this,"警告",QString(QLatin1String(mw->column_name[index]))+"属性为Int！");
        return;
    }else if (this->mw->type_list[index2]==0 && !rx.exactMatch(ui->lineEdit_2->text())){
        QMessageBox::warning(this,"警告",QString(QLatin1String(mw->column_name[index2]))+"属性为Int！");
        return;
    }

    this->mw->select_column=ui->comboBox->currentData().toInt();
    this->mw->select_where=ui->comboBox_2->currentData().toInt();
    this->mw->update_column=ui->comboBox_3->currentData().toInt();

    QByteArray ba;
    ba=ui->lineEdit->text().toLatin1();
    std::strcpy(this->mw->input_line,ba.data());
    ba=ui->lineEdit_2->text().toLatin1();
    std::strcpy(this->mw->input_line2,ba.data());
    qDebug()<<"update accept"<<endl;
    QDialog::accept();
}

UpdateDialog1::~UpdateDialog1()
{
    delete ui;
}
