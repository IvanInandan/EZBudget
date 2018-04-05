/*
 * Account implementation file
 * Author: Jose Quirarte
 * Date 2/24/18
 *
 * */
#include "account.h"

bool Account::failure = false;
bool Account::success = true;


/* PURPOSE:  The default constructor of Account.
 * Author: Jose Quirarte
 * Date:   2/24/18
 * */
Account::Account()
{

    // I hardcoded some numbers so that we dont have to use setters for testing purposes
//    monthlyIncome = 4000;
//    monthlyBudget = 2000;
//    monthlySavings = 2000;
//    savingsPercentage = 50;
//    setIncome(4000);
//    setBudget(2000);
//    setSavings(50);


        addCategory("Bills");
        addCategory("Grocery/Food");
        addCategory("Gas");
        addCategory( "Misc");

//    expenditures[0].addTransaction("Bills", "Electricity", "4/03/17", 50.00,"expenses");
//    expenditures[0].addTransaction("Bills", "Gas", "4/03/17", 30.00,"expenses");
//    expenditures[1].addTransaction("Grocery/Food", "Groceries", "4/02/17", 70.00,"expenses");
//    expenditures[1].addTransaction("Grocery/Food", "Milk", "4/03/17", 3.00,"expenses");
//    expenditures[2].addTransaction("Gas", "Fuel for the week", "4/04/17", 60.00, "expenses");
//    expenditures[3].addTransaction("Misc", "Gym Membership", "4/10/17", 12.00, "expenses");
//    expenditures[3].addTransaction("Misc", "Movie Ticket", "4/10/17", 16.00, "expenses");


        //connect(this, SIGNAL(spendingsTableChanged(QString,QString,QString,float)), ,SLOT(updateSpendingsUi(QString,QString,QString,float)));
}

//This function adds a transaction and labels it to the appropriate category based on information
//received from the database
//Author: Alex Shershnov
//Date: 4/2/2018
void Account::addTransaction(QString tCategory, QString tName, QString tDate, float num, QString type)
{
    if(expenditures.size() == 0)
    {
        addCategory(tCategory);
        expenditures[0].addTransaction(tCategory, tName, tDate, num, type);
        spendingIndex++;
        return;
    }
    for(int i = 0; i < expenditures.size(); i++)
    {
        if(expenditures[i].getCategoryName() == tCategory)
        {
            expenditures[i].addTransaction(tCategory, tName, tDate, num, type);
            return;
        }
    }
        //return ++spendingIndex;

    addCategory(tCategory);
    expenditures[spendingIndex].addTransaction(tCategory, tName, tDate, num, type);
    spendingIndex++;
    return;

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



/* PURPOSE: It will return the monthly budget.
 * Author: Jose Quirarte
 * Date: 2/24/18
 * */
int Account::getBudget() const
{
    return monthlyBudget;
}

/* PURPOSE: It will return the monthly savings.
 * Author: Jose Quirarte
 * Date: 2/24/18
 * */
int Account::getSavings() const
{
    return monthlySavings;
}


/* PURPOSE: It will return the savings Percentage.
 * Author: Jose Quirarte
 * Date: 2/24/18
 * */
int Account::getSavingsPercent() const
{
    return savingsPercentage;
}

/*PURPOSE:It will return the number of categories the user has created.
 * Author: Jose Quirarte
 * Date: 3/5/18
 * */
int Account::getNumCategories() const
{

    return expenditures.size();
}

/* PURPOSE: It will make the passed category be a copy of a category within the expenditures vector
 * PARAMETER: index will be used to to figure out which category to make section the copy of.
 *            section is just a category object that will be overwritten
 * Author: Jose Quirarte
 * Date: 3/5/18
 * */
void Account::getCategory(int index, Category &section ) const
{
    section  = expenditures[index];
}


/* PURPOSE: It will create a temp category, rename it using the parameter, and
 * add it to the vector.
 * PARAMETER: s is the name of the new category
 * Author: Jose Quirarte
 * Date: 3/5/18
 * */
void Account::addCategory(QString s)
{
    Category temp;
    temp.setCategoryName(s);
    expenditures.push_back(temp);
}


/* PURPOSE: It will add up all the total Amounts from each category and then return the sum.
 * Author: Jose Quirarte
 * Date:3/5/18
 * */
int Account::getTotalSpendingsFromAllCategories() const
{
    int total = 0;
    for(int i = 0; i < expenditures.size();i++)
        total+=expenditures[i].totalTransactions();

    return total;
}

/*PURPOSE: It will set the income to what the user inputted for income
 *
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

int Account::getIncome() const
{
    return monthlyIncome;
}

//PURPOSE: It overwrites a category at the specified index with a category that was passed to it.
//Date: 3/15/19
//PARAMETER: index is the index of the category that we want to overwrite
//           section is the updated category and will be used to overwrite a category
void Account::setCategory(int index, Category &section)
{
    // we make index unsigned to get rid of warning
    if (index >= expenditures.size())
        return;   // output some error message here

    expenditures[index] = section;
    emit accountModified();

}

//PURPOSE: It will retrieve the name of the category at the specified index
//Author: Jose Quirarte
//Date: 3/16/17
//PARAMETER: index is the index of the target category
QString Account::getCategoryTitle(int index) const
{
    return expenditures[index].getCategoryName();
}

//PURPOSE: It will calculate and return the budget left by subtracting the total transaction amount
//         from the budget they inputted.
//Author: Jose Quirarte
//Date: 3/21/2018
int Account::calculateBudgetLeft() const
{
    return (getBudget() - getTotalSpendingsFromAllCategories());
}

//PURPOSE: It will retrieve the total amount spent in one category
//Author: Jose Quirarte
//Date: 3/26/18
int Account::getTotalFromOneCategory(int index) const
{
    return expenditures[index].totalTransactions();
}

Account* Account::thisAcc()
{return this;}

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

QString Account::getExpenditureTransactionName(int firstIndex, int secondIndex)
{
    return expenditures[firstIndex].getSpecificTransactionName(secondIndex);
}

QString Account::getExpenditureTransactionDate(int firstIndex, int secondIndex)
{
    return expenditures[firstIndex].getSpecificTransactionDate(secondIndex);
}

double Account::getExpenditureTransactionAmount(int firstIndex, int secondIndex)
{
    return expenditures[firstIndex].getSpecificTransactionAmount(secondIndex);
}

int Account::getExpenditureSize()
{
    return expenditures.size();
}

int Account::getExpenditureTransactionSize(int index)
{
    return expenditures[index].getTransactionSize();
}
