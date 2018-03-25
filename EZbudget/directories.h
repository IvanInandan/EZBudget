#ifndef DIRECTORIES_H
#define DIRECTORIES_H

#include<QDir>
#include<stdio.h>
#include<iostream>
#include<QDebug>
#include<QString>
#include<QObject>
#include"account.h"
#include"category.h"

class Directories
{
protected:
    Directories();
private:
    QVector <Account>accounts;
    static Directories* _instance;
    bool checkLogin(QString username, QString password); //Attemp to login the user
public:
    static Directories* Instance();
    void fileReader(QString &string, int &number);
    QString currentAccount();
    void save();//Saves user-entered info into a file
    void load();//Loads from a file into Account
    bool createNewAccount(QString username);//Create a new account
    bool takeLoginInfo(QString usernameEntered, QString pwd);//Take the login info
    //Account currentAccount();
};

#endif // DIRECTORIES_H
