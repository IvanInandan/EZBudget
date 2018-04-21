#include "createnewaccount.h"
#include "ui_createnewaccount.h"

createNewAccount::createNewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createNewAccount)
{
    ui->setupUi(this);
    setMinimumSize(600, 600);
    setStyleSheet("QDialog {background: #a9e5aa}");
    this->setWindowTitle("New Account");
    this->setWindowIcon(QIcon("C:/Users/sekos/Downloads/IMG_20180417_171012_152.jpg"));
}

createNewAccount::~createNewAccount()
{
    delete ui;
}
