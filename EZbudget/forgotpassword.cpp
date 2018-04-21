#include "forgotpassword.h"
#include "ui_forgotpassword.h"

forgotPassword::forgotPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forgotPassword)
{
    ui->setupUi(this);
    setStyleSheet("QDialog {background: #a9e5aa}");
    setMinimumSize(600, 400);
    this->setWindowTitle("Forgot Password");
    this->setWindowIcon(QIcon("C:/Users/sekos/Downloads/IMG_20180417_171012_152.jpg"));
}

forgotPassword::~forgotPassword()
{
    delete ui;
}
