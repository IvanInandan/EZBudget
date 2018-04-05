/*Category will have a name specified by the user and will contain a vector
 * full of transactions that belong to a specific category
 * change to what Team wants
 *
 * Author: Jose Quirarte
 * Date: 3/5/18
 *
 * */


#ifndef CATEGORY_H
#define CATEGORY_H
#include <QVector>
#include <QString>
#include "transaction.h"

class Category
{
private:
    QString name;                     //name of category
    QVector<Transaction> Transactions;

public:
    Category();

    void setCategoryName(QString Name);
    QString getCategoryName() const;
    void addTransaction(QString category, QString Name, QString date, double amount, QString type);
    //void editTransaction(int index);  talk to group about how to implement this function
    void removeTransaction(int index);     //removes a transaction from the category
    void editTransaction(QString category, QString Name, QString date, double amount, QString type, int row);
    int totalTransactions() const;           //adds up all of the amounts of every transaction in one category
    int getTotalNumOfTransactions()const;    // returns the number of transactions within a category

    QString getSpecificTransactionName(int index);
    QString getSpecificTransactionDate(int index);
    double getSpecificTransactionAmount(int index);

    int getTransactionSize();
};

#endif // CATEGORY_H
