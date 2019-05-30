#include "newfilesecondwizardpage.h"
#include "ui_newfilesecondwizardpage.h"
#include <QWizardPage>
#include <QWizard>
#include <QList>
#include <QLineEdit>
#include <QComboBox>
#include <QLayout>
#include <QGridLayout>
#include <QDebug>
#include <QSpinBox>
#include <QAbstractButton>
#include <QLabel>
#include <QLayout>
#include <QLayoutItem>

NewFileSecondWizardPage::NewFileSecondWizardPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::NewFileSecondWizardPage)
{
    ui->setupUi(this);
    for (int i=0;i<20;i++){
        nl[i]=new QLineEdit;
        tl[i]=new QComboBox;
        tl[i]->addItem("Int",0);
        tl[i]->addItem("String",1);
        registerField("input_name"+QString::number(i)+"*",nl[i]);
        registerField("input_type"+QString::number(i),tl[i]);
    }
    primary_key=new QSpinBox;
    primary_key->setMinimum(1);
    primary_key->setMaximum(20);
    registerField("primary_key",primary_key);

    label=new QLabel;
    label->setText("设置主键序号：");
}


void NewFileSecondWizardPage::initializePage()
{
    QString table_name=field("table_name").toString();
    int column_num=field("column_num").toInt();
    setTitle("设置“"+table_name+"”的属性");
//    QLabel *l1=new QLabel("属性名");
//    QLabel *l2=new QLabel("属性类型");
//    ui->gridLayout->addWidget(l1,0,0,1,1);
//    ui->gridLayout->addWidget(l2,0,1,1,1);
    for (int i=0;i<column_num;i++){
        nl[i]->setParent(this);
        tl[i]->setParent(this);
        nl[i]->clear();
        ui->gridLayout->addWidget(nl[i],i+2,0,1,1);
        ui->gridLayout->addWidget(tl[i],i+2,1,1,1);
        QString str="input_name"+QString::number(i);
        //qDebug()<<str<<endl;
    }
    for (int i=column_num;i<20;i++){
        nl[i]->setParent(NULL);
        tl[i]->setParent(NULL);
        nl[i]->setText("-10007"+QString::number(i));
    }
    delete primary_key;

    primary_key=new QSpinBox;
    registerField("primary_key",primary_key);
    primary_key->setMinimum(1);
    primary_key->setMaximum(column_num);
    delete label;
    label=new QLabel;
    label->setText("设置主键序号：");

    ui->gridLayout->addWidget(label,column_num+2,0,1,1);
    ui->gridLayout->addWidget(primary_key,column_num+2,1,1,1);
}



NewFileSecondWizardPage::~NewFileSecondWizardPage()
{
    delete ui;
}
