#include "updatedialog1.h"
#include "ui_updatedialog1.h"
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>
#include <QByteArray>
#include <QLatin1String>
#include <QString>
#include <string>

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
    if (ui->lineEdit->text().isEmpty()||ui->lineEdit_2->text().isEmpty()){
        QMessageBox::warning(this,"警告","请输入完整！");
        return;
    }
    this->mw->select_column=ui->comboBox->currentData().toInt();
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
