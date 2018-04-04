#include "expensedialog.h"
#include "ui_expensedialog.h"

ExpenseDialog::ExpenseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExpenseDialog)
{
    ui->setupUi(this);
    setMinimumWidth(600);
}

ExpenseDialog::~ExpenseDialog()
{
    delete ui;
}


QString ExpenseDialog::transactionName() const
{
    return ui->transactionNameEdit->text();
}

QString ExpenseDialog::transactionCategory() const
{
    return ui->transactionCategoryEdit->currentText();
}

QDate ExpenseDialog::transactionDate() const
{
    return ui->transactionDateEdit->date();
}

double ExpenseDialog::transactionAmount() const
{
    return ui->transactionAmountEdit->value();
}

/*
QString ExpenseDialog::transactionType() const
{
    return ui->transactionType->currentText();
}
*/

void ExpenseDialog::on_buttonBox_accepted()
{
    accept();
}

void ExpenseDialog::on_buttonBox_rejected()
{
    reject();
}
