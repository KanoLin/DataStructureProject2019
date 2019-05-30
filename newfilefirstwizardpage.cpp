#include "newfilefirstwizardpage.h"
#include "ui_newfilefirstwizardpage.h"
#include <QDebug>

NewFileFirstWizardPage::NewFileFirstWizardPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::NewFileFirstWizardPage)
{
    ui->setupUi(this);
    setTitle("设置表");
//    connect(this,&QWizardPage::completeChanged,this,[=](){qDebug()<<"completeChange";});
    registerField("table_name*",ui->lineEdit);
    registerField("column_num",ui->spinBox);
}

NewFileFirstWizardPage::~NewFileFirstWizardPage()
{
    delete ui;
}
