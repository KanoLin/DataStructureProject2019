#include "openfilefirstwizardpage.h"
#include "ui_openfilefirstwizardpage.h"

OpenFileFirstWizardPage::OpenFileFirstWizardPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::OpenFileFirstWizardPage)
{
    ui->setupUi(this);
}

OpenFileFirstWizardPage::~OpenFileFirstWizardPage()
{
    delete ui;
}
