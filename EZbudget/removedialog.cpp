#include "removedialog.h"
#include "ui_removedialog.h"
#include <QString>

RemoveDialog::RemoveDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveDialog)
{
    ui->setupUi(this);
}

RemoveDialog::~RemoveDialog()
{
    delete ui;
}

int RemoveDialog::removeRowNumber()
{
    return ui->removeRowEdit->value();
}


