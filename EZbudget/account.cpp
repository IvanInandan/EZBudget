/*
 * Account implementation file
 * Author: Jose Quirarte
 * Date 2/24/18
 *
 * */
#include "account.h"
#include "maindashboard.h"
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

//This function adds a transaction and labels it to the appropriate category based on information
//received from the database
//Author: Alex Shershnov
//Date: 4/2/2018
//void Account::addTransaction(QString tCategory, QString tName, QString tDate, float num, QString type)
//{
//    if(expenditures.size() == 0)
//    {
//        addCategory(tCategory);
//        expenditures[0].addTransaction(tCategory, tName, tDate, num, type);
//        spendingIndex++;
//        return;
//    }
//    for(int i = 0; i < expenditures.size(); i++)
//    {
//        if(expenditures[i].getCategoryName() == tCategory)
//        {
//            expenditures[i].addTransaction(tCategory, tName, tDate, num, type);
//            return;
//        }
//    }
//        //return ++spendingIndex;

//    addCategory(tCategory);
//    expenditures[spendingIndex].addTransaction(tCategory, tName, tDate, num, type);
//    spendingIndex++;
//    return;

//}







/* PURPOSE: It will return the monthly budget.
 * Author: Jose Quirarte
 * Date: 2/24/18
 * */
//int Account::getBudget() const
//{
//    return monthlyBudget;
//}

/* PURPOSE: It will return the monthly savings.
 * Author: Jose Quirarte
 * Date: 2/24/18
 * */
//int Account::getSavings() const
//{
//    return monthlySavings;
//}


/* PURPOSE: It will return the savings Percentage.
 * Author: Jose Quirarte
 * Date: 2/24/18
 * */
//int Account::getSavingsPercent() const
//{
//    return savingsPercentage;
//}

/*PURPOSE:It will return the number of categories the user has created.
 * Author: Jose Quirarte
 * Date: 3/5/18
 * */
//int Account::getNumCategories() const
//{

//    return expenditures.size();
//}

/* PURPOSE: It will make the passed category be a copy of a category within the expenditures vector
 * PARAMETER: index will be used to to figure out which category to make section the copy of.
 *            section is just a category object that will be overwritten
 * Author: Jose Quirarte
 * Date: 3/5/18
 * */
//void Account::getCategory(int index, Category &section ) const
//{
//    section  = expenditures[index];
//}


/* PURPOSE: It will create a temp category, rename it using the parameter, and
 * add it to the vector.
 * PARAMETER: s is the name of the new category
 * Author: Jose Quirarte
 * Date: 3/5/18
 * */
//void Account::addCategory(QString s)
//{
//    Category temp;
//    temp.setCategoryName(s);
//    expenditures.push_back(temp);
//}


/* PURPOSE: It will add up all the total Amounts from each category and then return the sum.
 * Author: Jose Quirarte
 * Date:3/5/18
 * */
//int Account::getTotalSpendingsFromAllCategories() const
//{
//    int total = 0;
//    for(int i = 0; i < expenditures.size();i++)
//        total+=expenditures[i].totalTransactions();

//    return total;
//}

/*PURPOSE: It will set the income to what the user inputted for income
 *
 * */
//bool Account::setIncome(int i)
//{
//    if(verifyNumber(i) == success && monthlyBudget != i)
//        {
//            monthlyIncome = i;
//            emit accountModified();
//            return success;
//        }
//    return failure;
//}

//int Account::getIncome() const
//{
//    return monthlyIncome;
//}

//PURPOSE: It overwrites a category at the specified index with a category that was passed to it.
//Date: 3/15/19
//PARAMETER: index is the index of the category that we want to overwrite
//           section is the updated category and will be used to overwrite a category
//void Account::setCategory(int index, Category &section)
//{
//    // we make index unsigned to get rid of warning
//    if (index >= expenditures.size())
//        return;   // output some error message here

//    expenditures[index] = section;
//    emit accountModified();

//}

//PURPOSE: It will retrieve the name of the category at the specified index
//Author: Jose Quirarte
//Date: 3/16/17
//PARAMETER: index is the index of the target category
//QString Account::getCategoryTitle(int index) const
//{
//    return expenditures[index].getCategoryName();
//}

//PURPOSE: It will calculate and return the budget left by subtracting the total transaction amount
//         from the budget they inputted.
//Author: Jose Quirarte
//Date: 3/21/2018
//int Account::calculateBudgetLeft() const
//{
//    return (getBudget() - getTotalSpendingsFromAllCategories());
//}

//PURPOSE: It will retrieve the total amount spent in one category
//Author: Jose Quirarte
//Date: 3/26/18
//int Account::getTotalFromOneCategory(int index) const
//{
//    return expenditures[index].totalTransactions();
//}

/*void Account::populateTables()
{
    for(int i = 0; i < expenditures.size(); i++)
        {
           for(int j = 0; j < expenditures[i].Transactions.size(); j++)
           {   QString transacName = expenditures[i].getSpecificTransactionName(j);
               QString transacDate = expenditures[i].getSpecificTransactionDate(j);
               QString transacCategory = expenditures[i].getCategoryName();
               double transacAmount = expenditures[i].getSpecificTransactionAmount(j);

              emit spendingsTableChanged(transacCategory, transacName, transacDate, transacAmount);
           }
        }
}*/

//QString Account::getExpenditureTransactionName(int firstIndex, int secondIndex)
//{
//    return expenditures[firstIndex].getSpecificTransactionName(secondIndex);
//}

//QString Account::getExpenditureTransactionDate(int firstIndex, int secondIndex)
//{
//    return expenditures[firstIndex].getSpecificTransactionDate(secondIndex);
//}

//double Account::getExpenditureTransactionAmount(int firstIndex, int secondIndex)
//{
//    return expenditures[firstIndex].getSpecificTransactionAmount(secondIndex);
//}

//int Account::getExpenditureSize()
//{
//    return expenditures.size();
//}

//int Account::getExpenditureTransactionSize(int index)
//{
//    return expenditures[index].getTransactionSize();
//}

//void Account::saveFromSpendings(QString transacCategory, QString transacName, QString transacDate, float amount, int row)
//{
//    for(int i=0; i < expenditures.size(); i++)
//    {

//        if(transacCategory == expenditures[i].getCategoryName())
//        {
//          //if user changes to a category with less transactions
//          if(row > expenditures[i].getTransactionSize())
//          {
//           expenditures[i].addTransaction(transacCategory, transacName, transacDate, amount, "Spendings");
//           return;
//          }

//            expenditures[i].editTransaction(transacCategory, transacName, transacDate, amount, row-1);

//        }

//     }

//  //not sure what to do if user makes new category!!
//}

void Account::invokeUi()
{
    mainDash = new mainDashboard();
    mainDash->show();
    mainDash->updateUi();
}


//REFACTORING


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
        income.push_back(t);

    emit accountModified();

}
//Removes a transaction from a vector based on index and type provided
void Account::removeTransactions(int index, QString &type)
{
    if(type == "Expenses")
        spendings.remove(index);
    else
        income.remove(index);

    emit accountModified();
}
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
    }

    emit accountModified();
}
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

//Returns by reference the name of the transaction based on the index specified
void Account::getCategoryOfTransaction(int index, QString &category, QString &type)const
{
    if(type == "Expenses")
        category = spendings[index].getTransactionCategory();
    else
        category = income[index].getTransactionCategory();
}

/*
int Account::getNumberOfCategories()
{
    QVector tempCategories;
    int count;

    if(type == "Expenses")
    {
        for(int i = 0; i < spendings.size(); i++)
        {
            if()
        }
    }
    else if(type == "Income")
}
*/

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


//Returns how many categories are within a specified vector
int Account::getTotaNumberOfTransactions(QString &type)const
{
    if(type == "Expenses")
        return spendings.size();
    else
        return income.size();
}

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

/*PURPOSE: It will set the income to what the user inputted for income
 * Author: Jose
 * */
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
 * */

bool Account::setSavings(int savingsPercent)
{
    //we convert savingsPercent to decimal and then multiply it with the monthly budget to get
    // the new savings amount
    int newSavings = monthlyIncome * ((double) savingsPercent / 100);

    //we dont want m_savings and new_savings to be the same in case of cyclic connections to avoid infinte looping
    //and we also want to make sure new_savings is positive
    if(monthlySavings != newSavings && verifyNumber(newSavings) == success)
        {
            savingsPercentage = savingsPercent;
            monthlySavings = newSavings;
            emit accountModified();
            return success;
        }
    return failure;
}
int Account::getSavings() const
{
    return monthlySavings;
}
int Account::getBudget() const
{
    return monthlyBudget;
}
int Account::getIncome() const
{
    return monthlyIncome;
}

mainDashboard* Account::getDash()
{
 return mainDash;
}
