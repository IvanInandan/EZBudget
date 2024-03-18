#include "loginwithlogo.h"
#include "ui_loginwithlogo.h"
#include "createnewaccount.h"
#include "forgotpassword.h"

loginWithLogo::loginWithLogo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loginWithLogo)
{
    ui->setupUi(this);
    QPixmap pix("/Users/elainejoymutuc/Downloads/2018-04-24 17.49.22.jpg");
    ui->logo->setPixmap(pix);

    setMinimumSize(600, 600);
    setStyleSheet("QMainWindow {background: #a9e5aa}");
    this->setWindowTitle("EZBudget");
    this->setWindowIcon(QIcon("C:/sqlite2/photo_2018-04-24_15-26-23.jpg"));
    if(!db->checkConnection())
        ui->status_label->setText("Failed to open database");
    else
        ui->status_label->setText("Connected");

}

loginWithLogo::~loginWithLogo()
{
    delete ui;
}

void loginWithLogo::on_pushButton_clicked()
{

    QString username, password;
    username = ui -> lineEdit_username->text();
    password = ui -> lineEdit_password->text();

    if(db -> databaseLoginCheck(username, password))
    {
        ui->status_label->setText("Logged in");
        this->hide();//hide the login screen
        //Load the profile that will display information
        db -> loadProfile();

    }
    else
        ui->status_label->setText("Failed to log in");
}

void loginWithLogo::on_createAccountButton_clicked()
{
    int na;
    createNewAccount newAccount(this);
    na = newAccount.exec();
    if(na == QDialog::Rejected)
     return;

}

void loginWithLogo::on_forgotPassword_clicked()
{
    int fp;
    forgotPassword forgotPassword(this);
    fp = forgotPassword.exec();
    if (fp == QDialog::Rejected)
        return;
}


