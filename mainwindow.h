#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <map>
#include <string>
#include <QStringList>

#include "Operation.h"
#include <sys/time.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void showNewFile();         //新建数据表
    void showOpenFile();        //打开数据表
    void showInsert();          //插入数据
    void showDelete();          //删除数据
    void showSearch();          //查询数据
    void showUpdate();          //更新数据
    void showInsertTXT();       //批量插入
    void setTableHead();        //显示表头
    void showTable();           //更新表格
    double getTime();           //计算操作时间

    QString filePath;           //数据表文件
    bool isOpenTable=false;     //是否已打开文件
    std::string table_name;     //数据表名
    int column_num;             //属性数量
    int type_list[20];          //属性类型，0为Int，1为String
    int primary_key;            //主键序号，从0开始
    char column_name[20][30];   //属性名称
    QStringList column_list;    //属性名称 字符串容器
    char insert_content[20][30];//插入
    int result_row;             //结果行数
    int select_column;          //选择的匹配属性序号
    int select_where;           //选择的匹配条件
    int update_column;          //选择的更新属性序号
    char input_line[30];        //输入的匹配值
    char input_line2[30];       //输入的修改值

    struct timeval tpstart,tpend;//时间计算相关
    double timeuse;             //时间计算结果

    Operation *operation;       //***数据库文件操作对象
                                //  小组其他成员编写***
    ~MainWindow();

private:
    Ui::MainWindow *ui;         //界面UI文件
};

#endif // MAINWINDOW_H
