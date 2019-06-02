#ifndef SEARCHDIALOG1_H
#define SEARCHDIALOG1_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class SearchDialog1;
}

class SearchDialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog1(QWidget *parent = nullptr);
    ~SearchDialog1();
    void setMainWindow(MainWindow *w);  //绑定主窗口对象
    void accept();                      //重载QDialog函数

private:
    Ui::SearchDialog1 *ui;              //界面布局文件
    MainWindow *mw;                     //主窗口对象指针
};

#endif // SEARCHDIALOG2_H
