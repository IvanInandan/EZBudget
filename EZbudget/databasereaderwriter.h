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
#include "account.h"
#include "transaction.h"

class Account;

class DatabaseReaderWriter
{
protected:
    DatabaseReaderWriter();
public:
    static DatabaseReaderWriter* Instance();
    void newUser(QString username, QString password);
    bool databaseLoginCheck(QString username, QString password);
    bool checkConnection();
    void loadProfile();
    bool checkUserExists(QString username);

    void addTransaction(QString category, QString name, QString date, QString type, int amount);
    void removeTransaction(int rowIndex, QString type);
    void editTransaction(QString category, QString name, QString date, QString type, int amount, int index);
    void updateProfile(int income, int budget, int savings);

    void updateMonthlyBudget();

    Account* getAccountInstance();
    void removeAccountInstance();
private:
    QString user;
    static DatabaseReaderWriter* _instance;
    QSqlDatabase mydb;
    Account *c_account = new Account();
};

#endif // DATABASEREADERWRITER_H
