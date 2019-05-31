#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <map>
#include <string>
#include <QStringList>

#include "Operation.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void showNewFile();//新建数据表
    void showOpenFile();//打开数据表
    void showInsert();//插入数据
    void showDelete();//删除数据
    void showSearch();//查询数据
    void showUpdate();
    void showInsertTXT();

    void setTableHead();
    void showTable();

    QString filePath;//数据表文件
    bool isOpenTable=false;//是否已打开文件
    std::string table_name;
    int column_num;
    int type_list[20];
    int primary_key;
    char column_name[20][30];
    char insert_content[20][30];
//    char result[10000][20][30];
    int result_row;
    int select_column;
    int select_where;
    int update_column;
    char input_line[30];
    char input_line2[30];

    QStringList column_list;

    Operation *operation;


    ~MainWindow();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
