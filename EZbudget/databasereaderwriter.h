/*
 * Author: Alex Shershnov
 * Date last edited: 3/30/2018
 * Type: Header
 * This class provides for connection between the database and the program, verifying the login
 * passing in information to account that eventually populates the UI
 */

#ifndef DATABASEREADERWRITER_H
#define DATABASEREADERWRITER_H

#include <QtDebug>
#include <QString>
#include <QtSql>
#include <QFileInfo>
#include <iostream>
#include <Account.h>
//#include "maindashboard.h"

class DatabaseReaderWriter
{
protected:
    DatabaseReaderWriter();
public:
    static DatabaseReaderWriter* Instance();
    bool databaseLoginCheck(QString username, QString password);
    bool checkConnection();
    void loadProfile();
    void saveProfile();
    Account* getAccountInstance();
private:
    QString user;
    static DatabaseReaderWriter* _instance;
    QSqlDatabase mydb;
    Account *c_account = new Account();
    //mainDashboard *mainDash;
};

#endif // DATABASEREADERWRITER_H
