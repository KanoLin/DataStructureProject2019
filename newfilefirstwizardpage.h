#ifndef NEWFILEFIRSTWIZARDPAGE_H
#define NEWFILEFIRSTWIZARDPAGE_H

#include <QWizardPage>

namespace Ui {
class NewFileFirstWizardPage;
}

class NewFileFirstWizardPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit NewFileFirstWizardPage(QWidget *parent = nullptr);
    ~NewFileFirstWizardPage();

private:
    Ui::NewFileFirstWizardPage *ui;

};

#endif // NEWFILEFIRSTWIZARDPAGE_H
