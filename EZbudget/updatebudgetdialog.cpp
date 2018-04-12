#include "updatebudgetdialog.h"
#include "ui_updatebudgetdialog.h"

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
