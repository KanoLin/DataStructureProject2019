#ifndef UPDATEDIALOG1_H
#define UPDATEDIALOG1_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class UpdateDialog1;
}

class UpdateDialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateDialog1(QWidget *parent = nullptr);
    ~UpdateDialog1();
    void setMainWindow(MainWindow *w);
    void accept();

private:
    Ui::UpdateDialog1 *ui;
    MainWindow *mw;
};

#endif // UPDATEDIALOG1_H
