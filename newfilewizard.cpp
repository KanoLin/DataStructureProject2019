#include "newfilewizard.h"
#include <QAbstractButton>
#include <QDebug>
#include <QDialog>
#include <string>
#include <cstring>
NewFileWizard::NewFileWizard(QWidget *parent) :
    QWizard(parent)
{
    fp=new NewFileFirstWizardPage;
    sp=new NewFileSecondWizardPage;
    addPage(fp);
    addPage(sp);
    this->setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint);//去掉帮助按钮
    setWizardStyle( QWizard::ModernStyle );//设置导航样式
    setWindowTitle( "新建数据表 向导");
    setButtonText(QWizard::NextButton,"下一步");
    setButtonText(QWizard::BackButton,"上一步");
    setButtonText(QWizard::FinishButton,"创建");
    setButtonText(QWizard::CancelButton,"取消");
}

void NewFileWizard::accept()
{

    qDebug()<<"accept"<<endl;
    this->mw->column_num=field("column_num").toInt();
    this->mw->table_name=field("table_name").toString().toStdString();
    this->mw->primary_key=field("primary_key").toInt()-1;
    std::string name;
    int type;
    for (int i=0;i<this->mw->column_num;i++)
    {
        name=field("input_name"+QString::number(i)).toString().toStdString();
        type=field("input_type"+QString::number(i)).toInt();
        this->mw->column_list<<field("input_name"+QString::number(i)).toString();
        std::strcpy(this->mw->column_name[i],name.c_str());
        this->mw->type_list[i]=type;
    }

    QDialog::accept();
}

void NewFileWizard::setMainWindow(MainWindow *w)
{
    this->mw=w;
}
NewFileWizard::~NewFileWizard()
{
    delete fp;
    delete sp;
}
