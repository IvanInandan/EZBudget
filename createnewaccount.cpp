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

    ui->warningLabel->hide();

}

createNewAccount::~createNewAccount()
{
    delete ui;
}

void createNewAccount::on_okButton_clicked()
{
    QString username = ui->newUsername->text();
    QString newPassword = ui->newPassword->text();
    QString newRePassword = ui->newRePassword->text();


    if(db->checkUserExists(username) == false)
    {
        if(newPassword == newRePassword)
        {
            db->newUser(username, newPassword);
            this->close();
        }
        else
        {
            ui->warningLabel->setText("Passwords don't match. ");
            ui->warningLabel->show();
        }
    }
    else
    {
        ui->warningLabel->setText("Username already exists.");
        ui->warningLabel->show();
    }
}

void createNewAccount::on_cancelButton_clicked()
{
    this->close();
}
