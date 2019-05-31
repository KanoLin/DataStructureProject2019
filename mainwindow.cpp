#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "insertdialog.h"
#include "newfilewizard.h"
#include "deletedialog.h"
//#include "updatedialog.h"
//#include "searchdialog.h"
#include "searchdialog1.h"
#include "updatedialog1.h"

#include <QAction>
#include <QWidget>
#include <QObject>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QStringList>
#include <QByteArray>
#include <string>
#include <cstring>
#include <QStatusBar>
#include "Operation.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    this->setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint);//去掉帮助按钮
    connect(ui->actionNewFile,&QAction::triggered,this,&MainWindow::showNewFile);
    connect(ui->actionOpenFile,&QAction::triggered,this,&MainWindow::showOpenFile);
    connect(ui->actionInsert,&QAction::triggered,this,&MainWindow::showInsert);
    connect(ui->actionDelete,&QAction::triggered,this,&MainWindow::showDelete);
    connect(ui->actionSearch,&QAction::triggered,this,&MainWindow::showSearch);
    connect(ui->actionUpdate,&QAction::triggered,this,&MainWindow::showUpdate);
    connect(ui->actionInsertTXT,&QAction::triggered,this,&MainWindow::showInsertTXT);
    this->operation=new Operation();
    result_row=0;
    statusBar()->showMessage("欢迎 数据表未打开");
}

MainWindow::~MainWindow()
{
    delete operation;
    delete ui;
}


void MainWindow::showNewFile()
{
    NewFileWizard w(this);
    w.setMainWindow(this);
    if(w.exec()&&this->table_name!="") this->isOpenTable=true;
    setTableHead();
    char c[30];
    std::strcpy(c,this->table_name.c_str());
    operation->buildNewTable(c,this->column_num,this->column_name,this->type_list,this->primary_key+1);
//    operation->saveBPlusTree();
    qDebug()<<"记录长度："<<operation->recordSize<<endl;
    statusBar()->showMessage(QString("当前数据表：")+QString::fromStdString(this->table_name));
}

void MainWindow::showOpenFile()
{
    QFileDialog f(this);
    f.setWindowTitle("打开数据库文件");
    f.setDirectory(".");
    f.setNameFilter("*.dat");

    if (f.exec()){
        this->filePath=f.selectedFiles()[0];
        this->table_name=this->filePath.split("/").last().split(".").first().toStdString();
        qDebug()<<"已选择文件："<<filePath<<endl;
        qDebug()<<"文件名："<<QString::fromStdString(this->table_name)<<endl;
        this->isOpenTable=true;
        char c[30];
        std::strcpy(c,this->table_name.c_str());
        operation->chooseOldTable(c);

        qDebug()<<"打开 记录："<<operation->recordSize;

        this->column_list.clear();
        this->column_num=operation->rowNum;
        for (int i=0;i<this->column_num;i++){
            std::strcpy(this->column_name[i],operation->rowName[i]);
            this->column_list<<QString(this->column_name[i]);
        }

        this->primary_key=operation->primaryKeyNum-1;

        setTableHead();
        statusBar()->showMessage(QString("当前数据表：")+QString::fromStdString(this->table_name));
    }
}

void MainWindow::showInsert()
{
    if (!this->isOpenTable){
        qDebug()<<"警告：未打开数据表";
        QMessageBox::warning(this,"警告","未打开数据表！");
        return;
    }
    InsertDialog i(this);
    i.setMainWindow(this);
    memset(this->insert_content,'\0',sizeof(insert_content));
    if(i.exec()){
//        ui->table->clearContents();
        if (!operation->insertByHands(this->insert_content)){
            QMessageBox::warning(this,"警告","插入失败！");
        }
        operation->saveBPlusTree();
        qDebug()<<operation->binFileName<<endl;
        statusBar()->showMessage("操作已完成,影响1行");
    }
}

void MainWindow::showInsertTXT()
{
    if (!this->isOpenTable){
        qDebug()<<"警告：未打开数据表";
        QMessageBox::warning(this,"警告","未打开数据表！");
        return;
    }
    QFileDialog f(this);
    f.setWindowTitle("从TXT中插入数据");
    f.setDirectory(".");
    f.setNameFilter("*.txt");
    if (f.exec()){
        //this->filePath=f.selectedFiles()[0];
        //this->table_name=this->filePath.split("/").last().split(".").first().toStdString();
        QString txt_name=f.selectedFiles()[0];
//        qDebug()<<"已选择文件："<<filePath<<endl;
//        qDebug()<<"文件名："<<QString::fromStdString(this->table_name)<<endl;
        char c[50];
        std::strcpy(c,txt_name.toStdString().c_str());

        if (!operation->insertByFile(c)){
            QMessageBox::warning(this,"警告","插入失败！");
        };
        operation->saveBPlusTree();
        statusBar()->showMessage("批量插入已完成");
        //setTableHead();
    }
}
void MainWindow::showDelete()
{
    if (!this->isOpenTable){
        qDebug()<<"警告：未打开数据表";
        QMessageBox::warning(this,"警告","未打开数据表！");
        return;
    }
    DeleteDialog d(this);
    d.setMainWindow(this);
    if (d.exec()){
        //ui->table->clearContents();
        if (this->select_column==-1){

        }else if (!operation->deletee(this->select_column+1,this->input_line)){
            QMessageBox::warning(this,"警告","删除失败！");
            return;
        }
        statusBar()->showMessage("删除已完成");
        operation->saveBPlusTree();
    }

}

void MainWindow::showUpdate()
{
    if (!this->isOpenTable){
        qDebug()<<"警告：未打开数据表";
        QMessageBox::warning(this,"警告","未打开数据表！");
        return;
    }
    UpdateDialog1 u(this);
    u.setMainWindow(this);
    if (u.exec()){
//        ui->table->clearContents();
        if (!operation->revise(this->select_column+1,this->input_line,this->input_line2,this->update_column+1)){
            QMessageBox::warning(this,"警告","修改失败！");
            return;
        }
        statusBar()->showMessage("修改已完成");
        operation->saveBPlusTree();
    }
}

void MainWindow::showSearch()
{

    if (!this->isOpenTable){
        qDebug()<<"警告：未打开数据表";
        QMessageBox::warning(this,"警告","未打开数据表！");
        return;
    }
    //SearchDialog s(this);
    SearchDialog1 s2(this);
    s2.setMainWindow(this);
    //s2.exec();
    //s.exec();
    if (s2.exec()){
        if(!operation->search(select_column+1,input_line,this->select_where+1)){
            QMessageBox::warning(this,"警告","记录不存在！");
            return;
        }

        this->result_row=operation->shownum;
        statusBar()->showMessage("共有"+QString::number(this->result_row)+"条记录");
        qDebug()<<this->result_row;

        showTable();
    }

}

void MainWindow::setTableHead()
{
    ui->table->clear();
    ui->table->setColumnCount(this->column_list.count());
    qDebug()<<"column"<<ui->table->columnCount();
    QTableWidgetItem *head_item;
    for (int i=0;i<this->column_list.count();i++){
        head_item=new QTableWidgetItem(column_list.at(i));
        if (this->primary_key==i)head_item->setTextColor(Qt::red);
        ui->table->setHorizontalHeaderItem(i,head_item);
    }
    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void MainWindow::showTable()
{
    ui->table->clearContents();
    ui->table->setRowCount(result_row);
    QTableWidgetItem *item;
    for (int i=0;i<result_row;i++){
        for (int j=0;j<column_list.count();j++){
            item=new QTableWidgetItem(QString(operation->show[i][j]));
            item->setTextAlignment(Qt::AlignRight);
//            qDebug()<<QString(operation->show[i][j])<<endl;
            ui->table->setItem(i,j,item);
        }
    }
    //ui->table->show();
}


