#include "updatebudgetdialog.h"
#include "ui_updatebudgetdialog.h"
#include "databasereaderwriter.h"
#include "account.h"

updateBudgetDialog::updateBudgetDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateBudgetDialog)
{
    ui->setupUi(this);

    DatabaseReaderWriter *db = DatabaseReaderWriter::Instance();
    Account *currentAccount = db->getAccountInstance();
}

updateBudgetDialog::~updateBudgetDialog()
{
    delete ui;
}
