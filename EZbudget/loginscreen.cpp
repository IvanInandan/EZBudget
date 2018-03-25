#include "loginscreen.h"
#include "ui_loginscreen.h"
#include "maindashboard.h"

loginScreen::loginScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginScreen)
{
    ui->setupUi(this);
    ui->invalidLogin->hide();
}

loginScreen::~loginScreen()
{
    delete ui;
}

void loginScreen::on_loginButton_clicked()
{
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();


    if(username ==  "test" && password == "test") {
        //QMessageBox::information(this, "Login", "Username and password is correct");
        //hide();
        close();
        mainDash = new mainDashboard(this);
        mainDash->show();
    }
    else {
        ui->invalidLogin->show();
    }
//    close();
//    mainDash = new mainDashboard(this);
//    mainDash->show();
}
