/*
 * The Account class will set the user's inputted data into the appropiate members,
 * keep track of their spendings, and update the diagrams through
 * the use of slots and signals.
 *
 * Author: Jose Quirarte
 * Date: 2/24/18
 *
 * Edited by Alex Shershnov on 4/2/2018
 * */


#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <QStringList>
#include <QVector>
#include <QObject> //allows usage of signals and slots
#include <QString>
#include "category.h"
#include "tablewidget.h"
#include "transaction.h"

//#include "maindashboard.h"


class mainDashboard;

class Account : public QObject
{
    Q_OBJECT

private:
    int monthlyIncome;                     //monthly income
    int monthlyBudget;                     //stores monthly budget
    int savingsPercentage;                 //will be used to calculate monthly savings
    int monthlySavings;                    //stores monthly savings
    //int spendingIndex = 0;

    //QVector<Category> expenditures;         //spendings

    QVector<Transaction> spendings;
    QVector<Transaction> income;

    static bool failure;
    static bool success;
    mainDashboard *mainDash;
public:

    //getters
    //void addCategory(QString s);           //adds a category to one of the vectors
    //int getBudget() const;//good
    //int getSavings() const;//good
    //int getSavingsPercent() const;//good
    //int getNumCategories() const;                               //will return the number of categories in expenditures NOT GOOD
    //void getCategory(int index, Category &section) const;       // will return a category object specified by the index
    //int getTotalSpendingsFromAllCategories() const;
    //int getIncome() const;
    //QString getCategoryTitle(int index) const;                  //will retrieve the name of the category at a specified index
    //int calculateBudgetLeft() const;                            // will figure out how much budget is left
    //int getTotalFromOneCategory(int index) const;
    //void addTransaction(QString tCategory, QString tName, QString tDate, float num, QString type);
    //Account * thisAcc();
    //QString getExpenditureTransactionName(int firstIndex, int secondIndex);
    //QString getExpenditureTransactionDate(int firstIndex, int secondIndex);
    //double getExpenditureTransactionAmount(int firstIndex, int secondIndex);
    //int getExpenditureSize();
    //int getExpenditureTransactionSize(int index);

    //void saveFromSpendings(QString transacCategory, QString transacName, QString transacDate, float amount, int row);
    //Refactored functions
    Account();

    void getTransaction(int index, QString &category, QString &tName, QString &tDate, QString &type, int &amount)const;

    void getCategoryOfTransaction(int index, QString &category, QString &type)const;

    int calculateBudgetLeft(QString &type) const;


    int getTotalFromType(QString &type)const;
    int getTotalFromOneCategory(QString &category, QString &type)const;
    int getTotalFromTransaction(int index, QString &type)const;
    int getTotaNumberOfTransactions(QString &type)const;
    bool verifyNumber(int input);          //will make sure inputs are not negative
    int getBudget()const;
    int getIncome()const ;
    int getSavings()const;
    void invokeUi();
    mainDashboard* getDash(); //this is the only way to send the type when editing a transaction

    QStringList getSpendingCategories();
    QList<Transaction> getSpendingTransactions(const QString &category);

public slots:
    //setters
    bool setBudget(int b);
    bool setSavings(int savingPercent);
    bool setIncome(int i);
    void editTransactions(QString category, QString tName, QString tDate, QString &type, int amount, int index);
    void addTransactions(QString category, QString tName, QString tDate, QString &type, int amount);
    void removeTransactions(int index, QString &type);

    //void setCategory(int index, Category &section);             //makes changes made to categories permanent

signals:
    //the following function will send out a signal to inform diagrams to update themselves
    void accountModified();
    //void spendingsTableChanged(QString transacCategory, QString transacName, QString transacDate, float amount);
};

#endif // ACCOUNT_H
