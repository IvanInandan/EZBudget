/*
 * Author: Alex Shershnov
 * Date last edited: 3/30/2018
 * Type: Implementation file
 * Implements all ideas listed in the header of this class
 */

#include "databasereaderwriter.h"
#include <QVariant>
DatabaseReaderWriter* DatabaseReaderWriter::_instance = 0;

DatabaseReaderWriter* DatabaseReaderWriter::Instance()
{
    if(_instance == 0)
        _instance = new DatabaseReaderWriter();
    return _instance;
}

DatabaseReaderWriter::DatabaseReaderWriter()
{
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/Users/elainejoymutuc/Documents/qtprojects/EZBudget/EZbudget/QtEzBudget.db");
}

bool DatabaseReaderWriter::databaseLoginCheck(QString username, QString password)
{
    int count = 0;
    QSqlQuery qry;
    user = username;
    if(qry.exec("select * from users where name='"+username + "' and password='"+password +"'"))
     {
        while(qry.next())
        {
            count++;
        }
        if(count != 1)
            return false;
        else
            return true;
     }
    return false;
}
//Function that verifies that you're connected to the database
bool DatabaseReaderWriter::checkConnection()
{
    if(!mydb.open())
        return false;
    else
        return true;
}
//Run queries and populate the account's variables
void DatabaseReaderWriter::loadProfile()
{
    int income, budget, savings;
    QSqlQuery qry1, qry2;
    qry1.exec("select * from users where name='"+user + "'");
    {
        while(qry1.next())
        {
           income = qry1.value(2).toString().toInt();
           budget = qry1.value(3).toString().toInt();
           savings = qry1.value(4).toString().toInt();
        }
    }
    c_account ->setBudget(budget);
    c_account ->setIncome(income);
    c_account ->setSavings(savings);

    //Temp variables
    QString category, name, date, type;
    float amount;

    //Query for getting information about transactions

    qry2.exec("select * from transactions where userID='"+user +"'");
    {
        while(qry2.next())
        {
            category = qry2.value(0).toString();
            name = qry2.value(1).toString();
            date = qry2.value(2).toString();
            type = qry2.value(3).toString();
            amount = qry2.value(4).toFloat();
            c_account -> addTransactions(category, name, date, type, amount);
        }
    }
    //c_account->thisAcc(c_account);
    c_account->invokeUi();
//    mainDash = new mainDashboard();
//    mainDash->show();
//    mainDash->updateUi(c_account);

}
//Contains quieries to save the data user entered into the database
void DatabaseReaderWriter::saveProfile()
{

//    int tempBudget, tempIncome, tempSavings;
//    c_account->getBudget();
//    c_account->getIncome();
//    c_account->getSavings();
//    QSqlQuery qryUpdateUserData, qryUpdateTransactions;
//    Updating all user data within the users table
//    qryUpdateUserData.exec("update users set monthlyIncome='"+tempIncome +"', monthlyBudget='"+tempBudget +"', monthlySavings='"+tempSavings +"' where name='"+user +"'");

//    Updating all transactions, will use a for loop here;
//    qryUpdateTransactions.exec("update transaction set category='""', tName='""', tDate='""', type='""', tAmount='""' where userID='"+user +"'");
}
Account* DatabaseReaderWriter::getAccountInstance()
{
    return c_account;
}
