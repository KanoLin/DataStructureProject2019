#ifndef INSERTDIALOG_H
#define INSERTDIALOG_H

#include <QDialog>
#include "mainwindow.h"
#include <QLineEdit>
namespace Ui {
class InsertDialog;
}

class InsertDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InsertDialog(QWidget *parent = nullptr);
    ~InsertDialog();
    void setMainWindow(MainWindow *w);
    void accept();

private:
    Ui::InsertDialog *ui;
    MainWindow *mw;
    QLineEdit input[20];

};

#endif // INSERTDIALOG_H
