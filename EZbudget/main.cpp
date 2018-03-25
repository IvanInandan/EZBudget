#include "maindashboard.h"
#include <QApplication>
#include <QObject>
#include <iostream>
#include "account.h"
#include "loginscreen.h"
#include "directories.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Directories* d = Directories::Instance();
    d -> createNewAccount("ripichip");
    loginScreen l;
    l.show();

    //mainDashboard w;
    //w.show();

/*
    Account *PcurrentAccount = Account::Instance();

    Account *P2 = Account::Instance();

    cout << "budget: " << PcurrentAccount -> getBudget() << endl;
    cout << "savings: " << PcurrentAccount -> getSavings() << endl;
    cout << "Percent: " << PcurrentAccount -> getSavingsPercent() << " % " << endl;
    cout << "Budget Left: " << PcurrentAccount -> calculateBudgetLeft() << endl;

    //testing to see if negative numbers dont work
    cout << PcurrentAccount ->setBudget(-1) << endl;
    cout << PcurrentAccount ->setSavings(-20) << endl;



    //testing to see if P2 will point to the same instance as before
    cout << "budget: " << P2 -> getBudget() << endl;
    cout << "savings: " << P2 -> getSavings() << endl;
    cout << "Percent: " << P2 -> getSavingsPercent() << " % " << endl;


    //testing to see if setters work with proper values
    cout << PcurrentAccount ->setBudget(15000) << endl;
    cout << PcurrentAccount ->setSavings(30) << endl;


    cout << "budget: " << PcurrentAccount -> getBudget() << endl;
    cout << "savings: " << PcurrentAccount -> getSavings() << endl;
    cout << "Percent: " << PcurrentAccount -> getSavingsPercent() << " % " << endl;



    return 0;
*/

    return a.exec();
}
