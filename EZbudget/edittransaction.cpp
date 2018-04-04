#include "edittransaction.h"
#include "ui_edittransaction.h"
#include <QPushButton>

editTransaction::editTransaction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editTransaction)
{
    ui->setupUi(this);
    ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Save Edit");
    ui->buttonBox->button(QDialogButtonBox::Cancel)->setText("Cancel Edit");
}

editTransaction::~editTransaction()
{
    delete ui;
}

QString editTransaction::transactionName() const
{
    return ui->transactionNameEdit->text();
}

QString editTransaction::transactionCategory() const
{
    return ui->transactionCategoryEdit->currentText();
}

QDate editTransaction::transactionDate() const
{
    return ui->transactionDateEdit->date();
}

double editTransaction::transactionAmount() const
{
    return ui->transactionAmountEdit->value();
}


QString editTransaction::transactionType() const
{
    return ui->transactionTypeEdit->currentText();
}


void editTransaction::on_buttonBox_accepted()
{
    accept();
}

void editTransaction::on_buttonBox_rejected()
{
    reject();
}
