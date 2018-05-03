/*
 * Author: Alex Shershnov
 * Date last edited: 3/30/2018
 * Type: Implementation of login
 * This is an implementation of login where it'll check the connection, log the user in, and load the account
 */

#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{

    ui->setupUi(this);
    this->setWindowTitle("EZBudget");

    if(!db->checkConnection())
        ui->label->setText("Failed to open database");
    else
        ui->label->setText("Connected");
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{

    QString username, password;
    username = ui -> lineEdit_username->text();
    password = ui -> lineEdit_password->text();

    if(db -> databaseLoginCheck(username, password))
    {
        ui->label->setText("Logged in");
        this->hide();//hide the login screen
        //Load the profile that will display information
        db -> loadProfile();

    }
    else
        ui->label->setText("Failed to log in");
}
