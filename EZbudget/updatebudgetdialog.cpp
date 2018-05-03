#include "updatebudgetdialog.h"
#include "ui_updatebudgetdialog.h"
#include "databasereaderwriter.h"

updateBudgetDialog::updateBudgetDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateBudgetDialog)
{
    ui->setupUi(this);
    int budget = currentAccount->getBudget();
    ui->budgetEntered->setValue(budget);
    ui->budgetWarning->hide();
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

    if(ui->budgetEntered->value() > currentAccount->getIncome())
        ui->budgetWarning->show();
    else
    {
        currentAccount->setBudget(ui->budgetEntered->value());
        db->updateMonthlyBudget();
        ui->budgetWarning->hide();
        this->hide();
    }

}

int updateBudgetDialog::updateBudget() const
{
    return ui->budgetEntered->value();
}

void updateBudgetDialog::on_cancelButton_clicked()
{
    reject();
}
