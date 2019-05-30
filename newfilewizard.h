#ifndef NEWFILEWIZARD_H
#define NEWFILEWIZARD_H

#include <QWizard>
#include "newfilefirstwizardpage.h"
#include "newfilesecondwizardpage.h"
#include "mainwindow.h"
#include <QString>


//namespace Ui {
//class NewFileWizard;
//}

class NewFileWizard : public QWizard
{
    Q_OBJECT

public:
    explicit NewFileWizard(QWidget *parent = nullptr);
    ~NewFileWizard();
    void setMainWindow(MainWindow *w);
    void accept();


private:
    //Ui::NewFileWizard *ui;
    NewFileFirstWizardPage *fp;
    NewFileSecondWizardPage *sp;
    MainWindow *mw;
};

#endif // NEWFILEWIZARD_H
