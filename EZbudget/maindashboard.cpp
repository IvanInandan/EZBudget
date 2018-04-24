#include "maindashboard.h"
#include "ui_maindashboard.h"
#include "spendingsbreakdownchart.h"
#include "spendingsbreakdownslice.h"
#include "tablewidget.h"
#include <QApplication>
#include <QTableWidget>
#include "databasereaderwriter.h"
#include "account.h"
#include "transaction.h"
using namespace std;

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCore/QRandomGenerator>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QHorizontalBarSeries>
#include <QtCharts/QHorizontalPercentBarSeries>

using namespace QtCharts;

mainDashboard::mainDashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainDashboard)
{
    ui->setupUi(this);
    this->setWindowTitle("My Dashboard");
    {
        //bar chart: spendings vs budget left
        spendingsBarSet = new QBarSet("Spendings");
        budgetLeftBarSet = new QBarSet("Budget Left");

        spendingsBarSet->append(0);             //show nothing initially
        budgetLeftBarSet->append(0);

        spendingsBarSet->setLabel("Spendings");
        budgetLeftBarSet->setLabel("Budget Left");

        QHorizontalPercentBarSeries *barSeries = new QHorizontalPercentBarSeries();
        barSeries->append(spendingsBarSet);
        barSeries->append(budgetLeftBarSet);

        QChart *spendSaveChart = new QChart();
        spendSaveChart->addSeries(barSeries);
        spendSaveChart->setTitle("Spendings vs. Budget Left");
        spendSaveChart->setAnimationOptions(QChart::SeriesAnimations);

        QStringList chartForMonth;  //label on the side
        chartForMonth << "Month";
        QBarCategoryAxis *axis = new QBarCategoryAxis();
        axis->append(chartForMonth);
        spendSaveChart->createDefaultAxes();
        spendSaveChart->setAxisY(axis, barSeries);

        spendSaveChart->legend()->setVisible(true);
        spendSaveChart->legend()->setAlignment(Qt::AlignBottom);

        QChartView *spendSaveChartView = new QChartView(spendSaveChart);
        spendSaveChartView->setRenderHint(QPainter::Antialiasing);
        spendSaveChartView->setParent(this);
        spendSaveChartView->setGeometry(ui->spendSaveChartPlaceholder->geometry());
        spendSaveChartView->showNormal();


        //drilldown pie chart: spendings breakdown
        spendingsBreakDownChart *spendingsBreakdown = new spendingsBreakDownChart();
        spendingsBreakdown->setTheme(QChart::ChartThemeLight);
        spendingsBreakdown->setAnimationOptions(QChart::AllAnimations);
        spendingsBreakdown->legend()->setVisible(true);
        spendingsBreakdown->legend()->setAlignment(Qt::AlignRight);

        spendSeries= new QtCharts::QPieSeries();
        spendSeries->setName("Spendings Breakdown");

        //catSeries = new QPieSeries(); //take this out

        QStringList transactions = {"Transaction"};
        QStringList categories = {"Transaction"};
        /*
        QStringList categories = pCurrentAcount->getSpendingCategories();
        for(QString category : categories)
        {
            // You now have a category name
            QList<Transaction> transactions = pCurrentAcount->getSpendingTransactions(category);
            // You now have all the transactions for that specific category
            // You need to have a loop here that goes through the transactions and does something
            // ...
        }
        */

        for (const QString &category : categories) {
            catSeries = new QPieSeries();
            catSeries->setName("Spendings - " + category);

            for (const QString &transaction : transactions)
                catSeries->append(new spendingsBreakdownSlice(1, transaction, spendSeries));

            QObject::connect(catSeries, &QPieSeries::clicked, spendingsBreakdown, &spendingsBreakDownChart::handleSliceClicked);

            spendSeries->append(new spendingsBreakdownSlice(catSeries->sum(), category, catSeries));
        }

        QObject::connect(spendSeries, &QPieSeries::clicked, spendingsBreakdown, &spendingsBreakDownChart::handleSliceClicked);

        spendingsBreakdown->changeSeries(spendSeries);

        QChartView *spendBreakdownChartView = new QChartView(spendingsBreakdown);
        spendBreakdownChartView->setRenderHint(QPainter::Antialiasing);
        spendBreakdownChartView->setParent(this);
        spendBreakdownChartView->setGeometry(ui->spendingChartPlaceholder->geometry());
        spendBreakdownChartView->showNormal();

    }
    DatabaseReaderWriter* db = DatabaseReaderWriter::Instance();
    Account* pCurrentAcount = db -> getAccountInstance();
    QObject::connect(pCurrentAcount, SIGNAL(accountModified()),this, SLOT(updateUi()));
}

mainDashboard::~mainDashboard()
{
    delete ui;
}

void mainDashboard::updateUi()
{
    //ui->emptyLabel->hide();
    // lets get the account
    DatabaseReaderWriter* db = DatabaseReaderWriter::Instance();
    Account* pCurrentAcount = db -> getAccountInstance();
    //Account *pCurrentAcount = ref;//new Account();

    string Expenses = "Expenses";
    QString qExpenses = QString::fromStdString(Expenses);

    QString updatedBudgetLeft = "$" + QString::number(pCurrentAcount->calculateBudgetLeft(qExpenses));
    ui->updateBudgetLeftLabel->setText(updatedBudgetLeft);

    QString updatedCurrentIncome = "$" + QString::number(pCurrentAcount->getIncome());
    ui->updateCurrentIncomeLeftLabel->setText(updatedCurrentIncome);

    QString updatedCurrentSavings = "$" + QString::number(pCurrentAcount->getSavings());
    ui->updateCurrentSavingsLabel->setText(updatedCurrentSavings);

    spendingsBarSet->replace(0, pCurrentAcount->getTotalFromType(qExpenses));
    budgetLeftBarSet->replace(0, pCurrentAcount->calculateBudgetLeft(qExpenses));

   /* QString spendingLabel = "$" + spendingsBarSet->label();
    QString budgetLeftLabel = "$" + budgetLeftBarSet->label()*/;
    //spendingLabel += QString::number(pCurrentAcount->getTotalFromType(qExpenses));
    //budgetLeftLabel += QString::number(pCurrentAcount->calculateBudgetLeft(qExpenses));

    QString spendingLabel = "Spendings, $" + QString::number(pCurrentAcount->getTotalFromType(qExpenses));
    QString budgetLeftLabel = "Budget Left, $" + QString::number(pCurrentAcount->calculateBudgetLeft(qExpenses));
    spendingsBarSet->setLabel(spendingLabel);
    budgetLeftBarSet->setLabel(budgetLeftLabel);

    //budgetLeftBarSet->replace(0, pCurrentAcount->getSpendings());
    // we got rid of spendings, we can use getTotalSpendingsFromAllCategories()
    // but we need to add transactions to our categories first or we could hardcode something


    //m_set2->replace(0, pCurrentAcount->getSavings());

    // Now we will call methods in Account and update the series
    // First lets clear the series
    //    m_pieSeries->clear();
    //    int numExpenses = pCurrentAcount->getNumExpenses();
    //    for(int i=0; i<numExpenses; ++i)
    //    {
    //        Expense *pExpense = pCurrentAcount->getExpense(i);
    //        m_pieSeries->add(pCurrentAcount->getFirstExpense());
    //        m_pieSeries->append(pExpense->getCategoryName(), pExpense->getTotalExpense());
    //    }

    // Now lets do the same for the series

    spendSeries->clear();
    catSeries->clear();

    spendingsBreakDownChart *spendingsBreakdown = new spendingsBreakDownChart();
    spendingsBreakdown->setTheme(QChart::ChartThemeLight);
    spendingsBreakdown->setAnimationOptions(QChart::AllAnimations);
    spendingsBreakdown->legend()->setVisible(true);
    spendingsBreakdown->legend()->setAlignment(Qt::AlignRight);

    QStringList categories = pCurrentAcount->getSpendingCategories();
//    QStringList transactions = pCurrentAcount->getSpendingTransactions();


    spendSeries= new QtCharts::QPieSeries();
    spendSeries->setName("Spendings Breakdown");

    for(QString category : categories)
    {
        catSeries = new QPieSeries();
        catSeries->setName("Spendings - " + category);
        // You now have a category name
        QList<Transaction> transactions = pCurrentAcount->getSpendingTransactions(category);
        // You now have all the transactions for that specific category
        // You need to have a loop here that goes through the transactions and does something
        // ...
        for(Transaction trans : transactions)
            catSeries->append(new spendingsBreakdownSlice(trans.getTransactionAmount(),trans.getTransactionName(),spendSeries));

        QObject::connect(catSeries, &QPieSeries::clicked, spendingsBreakdown, &spendingsBreakDownChart::handleSliceClicked);

        spendSeries->append(new spendingsBreakdownSlice((pCurrentAcount->getTotalFromOneCategory(category, qExpenses)), category, catSeries));
    }

    QObject::connect(spendSeries, &QPieSeries::clicked, spendingsBreakdown, &spendingsBreakDownChart::handleSliceClicked);
    spendingsBreakdown->changeSeries(spendSeries);

     QChartView *spendBreakdownChartView = new QChartView(spendingsBreakdown);
    spendBreakdownChartView->setRenderHint(QPainter::Antialiasing);
    spendBreakdownChartView->setParent(this);
    spendBreakdownChartView->setGeometry(ui->spendingChartPlaceholder->geometry());
    spendBreakdownChartView->showNormal();

}





void mainDashboard::on_spendingsButton_clicked()
{
    flag = 0;
    spendingsTable.show();
    spendingsTable.setWindowTitle("Expenses");

    //Account* currentAccount = new Account;
    //currentAccount = currentAccount->thisAcc();

    //DatabaseReaderWriter *db = DatabaseReaderWriter::Instance();
    //Account *currentAccount = db->getAccountInstance();
    //If there are transactions in the vector & no data in the
    //table, the ui will be updated.

    if(spendingsTable.getRowCount() == 0)
    {spendingsTable.updateUi(spendingsTable.windowTitle());}

    //if(currentAccount->getExpenditureSize() == 0)
    //{spendingsTable.setWindowTitle("0 in Vector");}
}


void mainDashboard::on_incomeButton_clicked()
{
    flag = 1;
    incomeTable.show();
    incomeTable.setWindowTitle("Income");

    if(incomeTable.getRowCount() == 0)
    {incomeTable.updateUi(incomeTable.windowTitle());}
}

int mainDashboard::getFlag()
{
    return flag;
}

void mainDashboard::on_updateBudgetButton_clicked()
{
    updateBudgetWindow.show();
    updateBudgetWindow.setWindowTitle("");


}
