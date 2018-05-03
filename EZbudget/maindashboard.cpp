#include "maindashboard.h"
#include "ui_maindashboard.h"

mainDashboard::mainDashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainDashboard)
{
    ui->setupUi(this);
    this->setWindowTitle("My Dashboard");

    setStyleSheet("QMainWindow {background: #a9e5aa}");

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

        //default transaction/categories
        QStringList transactions = {"Transaction"};
        QStringList categories = {"Transaction"};

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

    QObject::connect(pCurrentAcount, SIGNAL(accountModified()),this, SLOT(updateUi()));
}

mainDashboard::~mainDashboard()
{
    delete ui;
}

void mainDashboard::updateUi()
{
    if(pCurrentAcount->isSpendingsEmpty() == true && pCurrentAcount->isIncomeEmpty() == true)
        ui->emptyLabel->show();
    else
        ui->emptyLabel->hide();

    string Expenses = "Expenses";
    string income = "Income";
    QString qExpenses = QString::fromStdString(Expenses);
    QString qIncome = QString::fromStdString(income);
    QString updatedBudgetLeft = "$" + QString::number(pCurrentAcount->calculateBudgetLeft(qExpenses));
    ui->updateBudgetLeftLabel->setText(updatedBudgetLeft);

    QString updatedCurrentIncome = "$" + QString::number(pCurrentAcount->getIncome());
    ui->updateCurrentIncomeLeftLabel->setText(updatedCurrentIncome);

    QString updatedCurrentSavings = "$" + QString::number(pCurrentAcount->getSavings());
    ui->updateCurrentSavingsLabel->setText(updatedCurrentSavings);

    spendingsBarSet->replace(0, pCurrentAcount->getTotalFromType(qExpenses));
    budgetLeftBarSet->replace(0, pCurrentAcount->calculateBudgetLeft(qExpenses));

    QString spendingLabel = "Spendings, $" + QString::number(pCurrentAcount->getTotalFromType(qExpenses));
    QString budgetLeftLabel = "Budget Left, $" + QString::number(pCurrentAcount->calculateBudgetLeft(qExpenses));
    spendingsBarSet->setLabel(spendingLabel);
    budgetLeftBarSet->setLabel(budgetLeftLabel);

    spendSeries->clear();
    catSeries->clear();

    spendingsBreakDownChart *spendingsBreakdown = new spendingsBreakDownChart();
    spendingsBreakdown->setTheme(QChart::ChartThemeLight);
    spendingsBreakdown->setAnimationOptions(QChart::AllAnimations);
    spendingsBreakdown->legend()->setVisible(true);
    spendingsBreakdown->legend()->setAlignment(Qt::AlignRight);

    QStringList categories = pCurrentAcount->getSpendingCategories();

    spendSeries= new QtCharts::QPieSeries();
    spendSeries->setName("Spendings Breakdown");

    for(QString category : categories)
    {
        catSeries = new QPieSeries();
        catSeries->setName("Spendings - " + category);
        QList<Transaction> transactions = pCurrentAcount->getSpendingTransactions(category);

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


    if(spendingsTable.getRowCount() == 0)
    {spendingsTable.updateUi(spendingsTable.windowTitle());}

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
    updateBudgetWindow.setWindowTitle("Update Budget");
}

void mainDashboard::on_calculatorButton_clicked()
{
    calc.show();
}


void mainDashboard::on_actionLog_Out_triggered()
{
    this->close();
    db->removeAccountInstance();
    newLogin.show();
}

void mainDashboard::on_actionQuit_triggered()
{
    db->removeAccountInstance();
    this->close();
}
