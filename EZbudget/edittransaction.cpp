#include "edittransaction.h"
#include "ui_edittransaction.h"

editTransaction::editTransaction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editTransaction)
{
    ui->setupUi(this);
}

editTransaction::~editTransaction()
{
    delete ui;
}
