#include "maindashboard.h"
#include "ui_maindashboard.h"
#include "spendingsbreakdownchart.h"
#include "spendingsbreakdownslice.h"
#include "tablewidget.h"
#include <QApplication>
#include <QTableWidget>
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
    {
        //bar chart: spendings vs budget left
        spendingsBarSet = new QBarSet("Spendings");
        budgetLeftBarSet = new QBarSet("Budget Left");

        spendingsBarSet->append(5);
        budgetLeftBarSet->append(10);

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

        QStringList months = {
            "T1", "T2", "T3", "T4", "T5", "T6"
        };

        QStringList categories = {
            "Bills", "Gas", "Food", "Entertainment"
        };

//        for(int i = 0; i < categories.size(); i++)
//        {
//            spendSeries->append(new spendingsBreakdownSlice(QRandomGenerator::global()->bounded(1000), categories.at(i), catSeries));
//        }

        for (const QString &category : categories) {
            catSeries = new QPieSeries();
            catSeries->setName("Spendings - " + category);

            for (const QString &month : months)
                catSeries->append(new spendingsBreakdownSlice(QRandomGenerator::global()->bounded(1000), month, spendSeries));

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
}

mainDashboard::~mainDashboard()
{
    delete ui;
}

void mainDashboard::updateUi(Account* ref)
{
    // lets get the account
    Account *pCurrentAcount = ref;//new Account();

    QString updatedBudgetLeft = QString::number(pCurrentAcount->calculateBudgetLeft());
    ui->budgetLabelUpdate->clear();
    updatedBudgetLeft += "$";
    ui->budgetLabelUpdate->setText(updatedBudgetLeft);

    spendingsBarSet->replace(0, pCurrentAcount->getTotalSpendingsFromAllCategories());
    budgetLeftBarSet->replace(0, pCurrentAcount->calculateBudgetLeft());


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
    //catSeries->clear();
    QStringList categories;

    for(int i = 0; i < pCurrentAcount->getNumCategories(); i++)
    {
        QString pCategoryTitle= pCurrentAcount->getCategoryTitle(i);
        categories << pCategoryTitle;
        int pCategoryTotal = pCurrentAcount->getTotalFromOneCategory(i);
        spendSeries->append(new spendingsBreakdownSlice(pCategoryTotal, pCategoryTitle, catSeries));
    }


    //    for (const QString &category : categories) {
    //        catSeries = new QPieSeries();
    //        //catSeries->setName("Spendings by Category " + name);

    //        //for (const QString &month : months)
    //        //    catSeries->append(new spendingsBreakdownSlice(QRandomGenerator::global()->bounded(1000), month, spendSeries));

    //        //QObject::connect(catSeries, &QPieSeries::clicked, spendingsBreakdown, &spendingsBreakDownChart::handleSliceClicked);

    //        spendSeries->append(new spendingsBreakdownSlice(13, category, catSeries));
    //    }


}



void mainDashboard::on_spendingsButton_clicked()
{
       table.show();
}

