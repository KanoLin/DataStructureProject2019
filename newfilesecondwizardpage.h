#ifndef NEWFILESECONDWIZARDPAGE_H
#define NEWFILESECONDWIZARDPAGE_H

#include <QWizardPage>
#include <QLineEdit>
#include <QComboBox>
#include <QSpinBox>
#include <QLabel>
namespace Ui {
class NewFileSecondWizardPage;
}

class NewFileSecondWizardPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit NewFileSecondWizardPage(QWidget *parent = nullptr);
    ~NewFileSecondWizardPage();
    void initializePage();
    QLineEdit *nl[20];
    QComboBox *tl[20];
    QSpinBox *primary_key;
    QLabel *label;

private:
    Ui::NewFileSecondWizardPage *ui;
};

#endif // NEWFILESECONDWIZARDPAGE_H
