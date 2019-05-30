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
    void setMainWindow(MainWindow *w);
    void accept();

private:
    Ui::SearchDialog1 *ui;
    MainWindow *mw;
};

#endif // SEARCHDIALOG2_H
