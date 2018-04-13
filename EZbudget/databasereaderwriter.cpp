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
    mydb.setDatabaseName("C:/sqlite2/QtEzBudget.db");
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
    QSqlQuery qry1, qry2, qry3;
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
    int amount;

    //Query for getting information about transactions

//    qry2.exec("select * from transac where user='"+user +"'");
//    {
//        while(qry2.next())
//        {
//            category = qry2.value(1).toString();
//            name = qry2.value(2).toString();
//            date = qry2.value(3).toString();
//            type = qry2.value(5).toString();
//            amount = qry2.value(4).toFloat();
//            c_account -> addTransactions(category, name, date, type, amount);
//        }
//    }
      QString t = "Expenses";
      qry2.exec("select * from expenses where user='"+user+"'");
      {
        while(qry2.next())
        {
            category = qry2.value(0).toString();
            name = qry2.value(1).toString();
            date = qry2.value(2).toString();
            amount = qry2.value(3).toInt();
            c_account -> addTransactions(category, name, date, t, amount);
        }
      }
      t = "Income";
      qry3.exec("select * from income where user='"+user+"'");
      {
        while(qry3.next())
        {
            category = qry3.value(0).toString();
            name = qry3.value(1).toString();
            date = qry3.value(2).toString();
            amount = qry3.value(3).toInt();
            c_account -> addTransactions(category, name, date, t, amount);
        }
      }
      c_account->invokeUi();
//    mainDash = new mainDashboard();
//    mainDash->show();
//    mainDash->updateUi(c_account);

}


//create table expenses
//(
//category varchar2(25),
//tName varchar2(25),
//tDate DATE,
//amount NUMBER,
//user varchar2(15),
//FOREIGN KEY(user) REFERENCES users(name)
//)



//Contains quieries to save the data user entered into the database
//void DatabaseReaderWriter::saveProfile()
//{

//    int tempBudget, tempIncome, tempSavings;
//    c_account->getBudget();
//    c_account->getIncome();
//    c_account->getSavings();
//    QSqlQuery qryUpdateUserData, qryUpdateTransactions;
//    Updating all user data within the users table
//    qryUpdateUserData.exec("update users set monthlyIncome='"+tempIncome +"', monthlyBudget='"+tempBudget +"', monthlySavings='"+tempSavings +"' where name='"+user +"'");

//    Updating all transactions, will use a for loop here;
//    qryUpdateTransactions.exec("update transaction set category='""', tName='""', tDate='""', type='""', tAmount='""' where userID='"+user +"'");
//}




void DatabaseReaderWriter::addTransaction(QString category, QString name, QString date, QString type, int amount)
{
    QSqlQuery qry;
    if(type == "Expenses")
        qry.exec("insert into expenses values('"+category+"', '"+name+"', '"+date+"', '"+amount+"', '"+user+"')");
    else
        qry.exec("insert into income values('"+category+"', '"+name+"', '"+date+"', '"+amount+"', '"+user+"')");
}
void DatabaseReaderWriter::removeTransaction(int rowIndex, QString type)
{
    QString i = QString::number(rowIndex);
    QSqlQuery qry;
    if(type == "Expenses")
        qry.exec("delete from expenses where rowid=1");//'"+rowIndex+"' ");
    else
        qry.exec("delete from income where rowid=1");//'"+rowIndex+"'");


}
void DatabaseReaderWriter::editTransaction(QString category, QString name, QString date, QString type, int amount, int index)
{
    QString amt = QString::number(amount);
    QString i = QString::number(index);
    QSqlQuery qry;
    if(type == "Expenses")
       qry.exec("update expenses where rowid='"+i+"' AND user='"+user+"' set category='"+category+"', tName='"+name+"', tDate='"+date+"',amount='"+amt+"' ");
    else
        qry.exec("update income where rowid='"+i+"' AND user='"+user+"' set category='"+category+"', tName='"+name+"', tDate='"+date+"',amount='"+amt+"' ");
}


Account* DatabaseReaderWriter::getAccountInstance()
{
    return c_account;
}
