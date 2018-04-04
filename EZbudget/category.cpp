#include <QString>
#include "category.h"

Category::Category()
{
name = "";
}

/* PURPOSE: It will create a temporary object of type Transaction,
 * set its attributes using the passed parameters, and then add that temporary object
 * to the Transaction vector.
 *
 * PARAMETERS: category is the category name that the transaction belongs to
 *             name is the name of the transaction
 *             date is the date that the transaction was made
 *             amount is the amount of the transaction
 *             type is a flag that determines whether it is an expense or income
 * */
void Category::addTransaction(QString category, QString Name, QString date, double amount, QString type)
{
    Transaction temp;
    temp.setTransactionCategory(category);
    temp.setTransactionDate(date);
    temp.setTransactionName(Name);
    temp.setTransactionAmount(amount);
    temp.setTransactionType(type);
    Transactions.push_back(temp);
}

<<<<<<< HEAD
/* PURPOSE: This function will serve to edit the current instance of the transaction
 *
 * PARAMETERS: category is the category name that the transaction belongs to
 *             name is the name of the transaction
 *             date is the date that the transaction was made
 *             amount is the amount of the transaction
 *             type is a flag that determines whether it is an expense or income
 *  Author: Ivan Inandan
 *  Date: 4/2/2018
 */
//void Category::editTransaction(QString category, QString Name, QString date, double amount, QString type, int row)
//{
// /*
//    Transactions[row].setTransactionCategory(category);
//    Transactions[row].setTransactionName(Name);
//    Transactions[row].setTransactionDate(date);
//    Transactions[row].setTransactionAmount(amount);
//    Transactions[row].setTransactionType(type);
//  */
//}

=======
>>>>>>> parent of e2fe72f... Merge branch 'master' of https://github.com/EZBudget/EZBudget
/*PURPOSE: It will add up the amounts of every transaction and return it.
 * Author: Jose Quirarte
 * Date: 3/6/18
 *
 * */
int Category::totalTransactions() const
{
    int   total = 0;

    for(int i = 0; i < Transactions.size(); i++)
        total += Transactions[i].getTransactionAmount();

    return total;
}

void Category::setCategoryName(QString Name)
{
    name = Name;
}


QString Category::getCategoryName() const
{
    return name;
}


//PURPOSE: It will remove a transaction from the Transactions vector at the passed index
//PARAMETER: index will be used to remove a transaction at a specific spot in the vector
//Author: Jose Quirarte
//Date: 3/7/18
void Category::removeTransaction(int index)
{
    Transactions.erase(Transactions.begin() + index);
}


