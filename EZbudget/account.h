/*
 * The Account class will set the user's inputted data into the appropiate members,
 * keep track of their spendings, and update the diagrams through
 * the use of slots and signals.
 *
 * Author: Jose Quirarte
 * Date: 2/24/18
 * */


#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <vector>
#include <QObject> //allows usage of signals and slots
#include <QString>
using namespace std;

#include "category.h"

class Account : public QObject
{
    Q_OBJECT

protected:
    Account();
private:
    int monthlyIncome;                     //monthly income
    int monthlyBudget;                     //stores monthly budget
    int savingsPercentage;                 //will be used to calculate monthly savings
    int monthlySavings;                    //stores monthly savings
    vector<Category> expenditures;         //spendings
    //vector<Category> revenue;            //income transactions
    static bool failure;
    static bool success;
    static Account* _instance;             //used to point to a new or existing account


public:
    static Account* Instance();            //will be used to make sure there is only one account
    bool verifyNumber(int input);          //will make sure inputs are not negative
    void addCategory(QString s);           //adds a category to one of the vectors

    //getters
    int getBudget() const;
    int getSavings() const;
    int getSavingsPercent() const;
    int getNumCategories() const;                               //will return the number of categories in expenditures
    void getCategory(int index, Category &section) const;       // will return a category object specified by the index
    int getTotalSpendingsFromAllCategories() const;
    int getIncome() const;
    QString getCategoryTitle(int index) const;                  //will retrieve the name of the category at a specified index
    int calculateBudgetLeft() const;                            // will figure out how much budget is left

public slots:
    //setters
    bool setBudget(int b);
    bool setSavings(int savingPercent);
    bool setIncome(int i);
    void setCategory(int index, Category &section);             //makes changes made to categories permanent

signals:
    //the following function will send out a signal to inform diagrams to update themselves
    void accountModified();
};

#endif // ACCOUNT_H
