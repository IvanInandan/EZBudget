#ifndef MAINDASHBOARD_H
#define MAINDASHBOARD_H

#include <QMainWindow>
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
#include <QApplication>
#include <QTableWidget>

#include "tablewidget.h"
#include "updatebudgetdialog.h"
#include "databasereaderwriter.h"
#include "calculator.h"
#include "account.h"
#include "transaction.h"
#include "calculator.h"
#include "spendingsbreakdownchart.h"
#include "spendingsbreakdownslice.h"

using namespace std;
using namespace QtCharts;

namespace Ui {
class mainDashboard;
}

class mainDashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainDashboard(QWidget *parent = 0);
    ~mainDashboard();
    int getFlag();

public slots:
    void updateUi();

private slots:
    void on_spendingsButton_clicked();

    void on_incomeButton_clicked();


    void on_updateBudgetButton_clicked();

    void on_calculatorButton_clicked();


private:
    Ui::mainDashboard *ui;

    QtCharts::QPieSeries *m_pieSeries; //m_pieSeries
    QtCharts::QPieSeries *spendSeries; //yearSeries
    QtCharts::QPieSeries *catSeries; //cat_series
    QtCharts::QBarSet *spendingsBarSet; //m_set0
    QtCharts::QBarSet *budgetLeftBarSet; //m_set1

    DatabaseReaderWriter* db = DatabaseReaderWriter::Instance();
    Account* pCurrentAcount = db -> getAccountInstance();

    tableWidget spendingsTable;
    tableWidget incomeTable;
    int flag;

    updateBudgetDialog updateBudgetWindow;
    Calculator calc;

};

#endif // MAINDASHBOARD_H
