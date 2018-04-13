#include "updatebudgetdialog.h"
#include "ui_updatebudgetdialog.h"
#include "databasereaderwriter.h"

updateBudgetDialog::updateBudgetDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateBudgetDialog)
{
    ui->setupUi(this);
}

updateBudgetDialog::~updateBudgetDialog()
{
    delete ui;
}

void updateBudgetDialog::on_okButton_clicked()
{
//    QString budgetEntered = ui->budgetEntered->text();
//    /*QStringList lst = budgetEntered.split(" ");
//    int value = lst[1].toInt()*/;

    DatabaseReaderWriter *db = DatabaseReaderWriter::Instance();
    Account *currentAccount = db->getAccountInstance();

    currentAccount->setBudget(ui->budgetEntered->value());

//     db -> saveProfile();
    this->hide();
}

int updateBudgetDialog::updateBudget() const
{
    return ui->budgetEntered->value();
}
