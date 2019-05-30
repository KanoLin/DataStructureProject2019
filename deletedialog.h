#ifndef DELETEDIALOG_H
#define DELETEDIALOG_H

#include <QDialog>
#include "mainwindow.h"
#include <QLineEdit>

namespace Ui {
class DeleteDialog;
}

class DeleteDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteDialog(QWidget *parent = nullptr);
    ~DeleteDialog();
    Ui::DeleteDialog *ui;
    void setMainWindow(MainWindow *w);
    void accept();
private:

    MainWindow *mw;
};

#endif // DELETEDIALOG_H
