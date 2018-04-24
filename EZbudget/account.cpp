/*
 * Account implementation file
 * Author: Jose Quirarte
 * Date 2/24/18
 *
 * */
#include "account.h"
#include "maindashboard.h"

#include "databasereaderwriter.h"
DatabaseReaderWriter *db = DatabaseReaderWriter::Instance();

bool Account::failure = false;
bool Account::success = true;


/* PURPOSE:  The default constructor of Account.
 * Author: Jose Quirarte
 * Date:   2/24/18
 * */
Account::Account()
{

        //connect(this, SIGNAL(spendingsTableChanged(QString,QString,QString,float)), ,SLOT(updateSpendingsUi(QString,QString,QString,float)));
}

//Author:Alex Shershnov
//Purpose: Initial call to bring up the main dashboard UI
void Account::invokeUi()
{
    mainDash = new mainDashboard();
    mainDash->show();
    mainDash->updateUi();
}


//REFACTORING

//Author:Alex Shershnov
//Adds a transaction and pushes it into the appropriate vector based on type of the transaction
void Account::addTransactions(QString category, QString tName, QString tDate, QString &type, int amount)
{
    Transaction t = Transaction();
    t.setTransactionCategory(category);
    t.setTransactionName(tName);
    t.setTransactionDate(tDate);
    t.setTransactionType(type);
    t.setTransactionAmount(amount);
    if(type == "Expenses")
        spendings.push_back(t);
    else
    {
        income.push_back(t);
        //setIncome(monthlyIncome+amount);
    }
    emit accountModified();

}
//Author:Alex Shershnov
//Removes a transaction from a vector based on index and type provided
void Account::removeTransactions(int index, QString &type)
{
    if(type == "Expenses")
        spendings.remove(index);
    else
    {
        //setIncome(monthlyIncome-income[index].getTransactionAmount());
        income.remove(index);
    }
        // db->removeTransaction(index, type);
    emit accountModified();
}
//Author: Alex Shershnov
//Edit a particular instance of transaction from a vector based on index and type provided
void Account::editTransactions(QString category, QString tName, QString tDate, QString &type, int amount, int index)
{
    if(type == "Expenses")
    {
        spendings[index].setTransactionAmount(amount);
        spendings[index].setTransactionCategory(category);
        spendings[index].setTransactionDate(tDate);
        spendings[index].setTransactionName(tName);
    }
    else
    {
        income[index].setTransactionAmount(amount);
        income[index].setTransactionCategory(category);
        income[index].setTransactionDate(tDate);
        income[index].setTransactionName(tName);
        //setIncome(monthlyIncome+amount);
    }
    //db->editTransaction(category, tName, tDate, type, amount, index);
    emit accountModified();
}
//Author:Alex Shershnov
//Returns a total amount from one one category based on specified type and a category
int Account::getTotalFromOneCategory(QString &category, QString &type)const
{
    int total = 0;
    if(type == "Expenses")
    {
        for(int i = 0; i < spendings.size(); i++)
        {
            if(spendings[i].getTransactionCategory() == category)
                total += spendings[i].getTransactionAmount();
        }
    }
    else
    {
        for(int i = 0; i < income.size(); i++)
        {
            if(income[i].getTransactionCategory() == category)
                total += income[i].getTransactionAmount();
        }
    }
    return total;
}
//Author:Alex Shershnov
//Returns by reference the name of the transaction based on the index specified
void Account::getCategoryOfTransaction(int index, QString &category, QString &type)const
{
    if(type == "Expenses")
        category = spendings[index].getTransactionCategory();
    else
        category = income[index].getTransactionCategory();
}

QStringList Account::getSpendingCategories()
{
    QMap<QString, bool> catMap;
    QStringList result;

    // Step 1 - get all the categories put into map (map avoids duplicates!)
    for(Transaction trans : spendings){
        catMap[ trans.getTransactionCategory() ] = true;
    }

    // Step 2 - convert map to a list

    QMap<QString, bool>::iterator it = catMap.begin();
    for(; it != catMap.end(); it++)
    {
        QString category = it.key();
        result.push_back(category);
    }

    return result;
}

QList<Transaction> Account::getSpendingTransactions(const QString &category)
{
    QList<Transaction> result;
    for(Transaction trans : spendings){
        if(trans.getTransactionCategory() == category)
            result.push_back(trans);
    }
    return result;
}

int Account::calculateBudgetLeft(QString &type) const
{
    std::string Expenses = "Expenses";
    QString qExpenses = QString::fromStdString(Expenses);
    return (getBudget() - getTotalFromType(qExpenses));
}
//Author: Alex Shershnov
//Purpose: Gets a total amount of cash spent based on type -- expenses/income
int Account::getTotalFromType(QString &type)const
{
    int total = 0;
    if(type == "Expenses")
    {
        for(int i = 0; i < getTotaNumberOfTransactions(type); i++)
        {
            total += spendings[i].getTransactionAmount();
        }

    }
    else if(type == "Income")
        for(int i = 0; i < getTotaNumberOfTransactions(type); i++)
        {
            total += income[i].getTransactionAmount();
        }
    return total;

}
//Author:Alex Shershnov
//Returns an amount from a specific transaction based on index provided
int Account::getTotalFromTransaction(int index, QString &type)const
{
    if(type == "Expenses")
    {
        return spendings[index].getTransactionAmount();
    }
    else
        return income[index].getTransactionAmount();
}

//Author:Alex Shershnov
//Returns how many categories are within a specified vector
int Account::getTotaNumberOfTransactions(QString &type)const
{
    if(type == "Expenses")
        return spendings.size();
    else
        return income.size();
}
//Author:Alex Shershnov
//Returns a particular transaction based on a specific index within the vector
void Account::getTransaction(int index, QString &category, QString &tName, QString &tDate, QString &type, int &amount)const
{
    if(type == "Expenses")
    {
        category = spendings[index].getTransactionCategory();
        tName = spendings[index].getTransactionName();
        tDate = spendings[index].getTransactionDate();
        amount = spendings[index].getTransactionAmount();
    }
    else
    {
        category = income[index].getTransactionCategory();
        tName = income[index].getTransactionName();
        tDate = income[index].getTransactionDate();
        amount = income[index].getTransactionAmount();
    }
}

/* PURPOSE:  verifyNumber will check to see if the user inputted
 * value is valid. It will return failure if the value is negative.
 * Otherwise, returns success
 *
 * PARAMETER: input is a number that the user enters
 * Author: Jose Quirarte
 * Date: 2/24/18
 * */
bool Account::verifyNumber(int input)
{
    //We dont want a negative input
    if(input < 0)
        return failure;

    return success;
}
/*
/*PURPOSE: It will set the income to what the user inputted for income
 * Author: Jose
 *
bool Account::setIncome(int i)
{
    if(verifyNumber(i) == success && monthlyBudget != i)
        {
            monthlyIncome = i;
            emit accountModified();
            return success;
        }
    return failure;
}
*/

/* PURPOSE: It will set the monthly budget, informs a slot of the change and returns success
 * if certain conditions are met.
 * Otherwise returns failure.
 *
 * PARAMETER: b is the what the user wants to set the monthly budget to.
 * Author: Jose Quirarte
 * Date: 2/24/18
 * */
bool Account::setBudget(int b)
{
    //we dont want m_budget and b to be the same in case of cyclic connections to avoid infinite looping
    //and we also want to make sure b is positive
    if(verifyNumber(b) == success && monthlyBudget != b)
        {
            monthlyBudget = b;
            emit accountModified();
            db ->updateMonthlyBudget();
            return success;
        }
    return failure;
}
/* PURPOSE: It will set monthly savings to the product of
 * monthly budget and savingsPercent (after savingsPercent has been converted),
 * it informs a slot of the change, and returns success if certain conditions are met;
 * otherwise returns failure.
 *
 * PARAMETER: savingsPercent is the percentage of the budget the user wants to save
 * Author: Jose Quirarte
 * Date: 2/24/18
 *
 *

bool Account::setSaving(int savings)
{

    //we dont new_savings to be the same in case of cyclic connections to avoid infinte looping
    //and we also want to make sure new_savings is positive
    if(monthlySavings != savings && verifyNumber(savings) == success)
        {
            monthlySavings = savings;
            emit accountModified();
            return success;
        }
    return failure;
}
*/

bool Account::isSpendingsEmpty() const
{
    return spendings.isEmpty();
}

bool Account::isIncomeEmpty() const
{
    return income.isEmpty();
}

int Account::getSavings() const
{
    return (monthlyIncome - monthlyBudget);
}
int Account::getBudget() const
{
    return monthlyBudget;
}
int Account::getIncome() const
{
    string income = "Income";
    QString qIncome = QString::fromStdString(income);

    return getTotalFromType(qIncome);
}

mainDashboard* Account::getDash()
{
 return mainDash;
}
