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

void DatabaseReaderWriter::newUser(QString username, QString password) //int income, int budget
{
    QSqlQuery qry;
    QString i = QString::number(0);
    qry.exec("insert into users values('"+username+"','"+password+"','"+i+"', '"+i+"','"+i+"')");
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
    //c_account ->setIncome(income);
    //c_account ->setSaving(savings);

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
      //c_account->setBudget(0);
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

void DatabaseReaderWriter::updateProfile(int income, int budget, int savings)
{
    income = c_account->getIncome();
    budget = c_account->getBudget();
    savings = c_account ->getSavings();
    QString inc = QString::number(income);
    QString budg = QString::number(budget);
    QString sav = QString::number(savings);
    QSqlQuery qry;
    qry.exec("update users set monthlyIncome='"+inc+"', monthlySavings='"+sav+"', monthlyBudget='"+budg+"'");
}

bool DatabaseReaderWriter::checkUserExists(QString username)
{
    QSqlQuery qry;
    int count = 0;
    if(qry.exec("select name from users where name ='"+username+"'"))
    {
        while(qry.next())
        {
            count++;
        }
        if(count > 0)
        {
            return true;
        }
        else
            return false;
    }
}
void DatabaseReaderWriter::updateMonthlyBudget()
{
    QSqlQuery bg;
    QString budget = QString::number(c_account -> getBudget());
    updateMonthlySavings();
    bg.exec("update users set monthlyBudget='"+budget+"',name='"+user+"',monthlyIncome='"+budget+"', monthlySavings='"+budget+"'where name='"+user+"'"); //where name ='"+user+"'");
}
void DatabaseReaderWriter::updateMonthlyIncome()
{
    QSqlQuery bg;
    QString income = QString::number(c_account -> getIncome());
    updateMonthlySavings();
    bg.exec("update users set monthlyIncome='"+income+"'"); //where name ='"+user+"'");
}
void DatabaseReaderWriter::updateMonthlySavings()
{
    QSqlQuery bg;
    QString savings = QString::number(c_account -> getSavings());
    bg.exec("update users set monthlySavings='"+savings+"' where name ='"+user+"'");
}

void DatabaseReaderWriter::addTransaction(QString category, QString name, QString date, QString type, int amount)
{
    QSqlQuery qry;
    QString amt = QString::number(amount);

    QString income = "Income";
    QString exp = "Expenses";
    int totalExpenses = c_account -> getTotaNumberOfTransactions(exp) - 1;
    int totalIncome = c_account -> getTotaNumberOfTransactions(income) - 1;
    income = QString::number(totalIncome);
    exp = QString::number(totalExpenses);

    if(type == "Expenses")
        qry.exec("insert into expenses values('"+category+"', '"+name+"', '"+date+"', '"+amt+"', '"+user+"', '"+exp+"')");
    else
        qry.exec("insert into income values('"+category+"', '"+name+"', '"+date+"', '"+amt+"', '"+user+"', '"+income+"')");
}
void DatabaseReaderWriter::removeTransaction(int rowIndex, QString type)
{
    QString i = QString::number(rowIndex);
    QSqlQuery qry, qry1;
    if(type == "Expenses")
    {
        qry.exec("delete from expenses where rowNum='"+i+"' AND user='"+user+"'");//'"+rowIndex+"' ");
        i = QString::number(++rowIndex);
        qry1.exec("update expenses set rowNum=(rowNum - 1) where rowNum >= '"+i+"'AND user='"+user+"'");
    }
    else
    {
        qry.exec("delete from income where rowNum='"+i+"' AND user='"+user+"'");//'"+rowIndex+"'");

        qry1.exec("update income set rowNum=(rowNum - 1) where rowNum >= '"+i+"'AND user='"+user+"'");
    }

}
void DatabaseReaderWriter::editTransaction(QString category, QString name, QString date, QString type, int amount, int index)
{
    QString amt = QString::number(amount);
    QString i = QString::number(index);
    QSqlQuery qry;
    if(type == "Expenses")
       qry.exec("update expenses set category='"+category+"', tName='"+name+"', tDate='"+date+"',amount='"+amt+"' where rowNum='"+i+"' AND user='"+user+"'");
    else
        qry.exec("update income set category='"+category+"', tName='"+name+"', tDate='"+date+"',amount='"+amt+"' where rowNum='"+i+"' AND user='"+user+"' ");
}


Account* DatabaseReaderWriter::getAccountInstance()
{
    return c_account;
}
