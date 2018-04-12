#ifndef MAINDASHBOARD_H
#define MAINDASHBOARD_H

#include <QMainWindow>
#include "account.h"
#include <QtCharts/QBarSet>
#include <QtCharts/QPieSeries>
#include "tablewidget.h"
#include "updatebudgetdialog.h"
//class QPieSeries;
//class QBarSet;

//#include "spendingchart.h"

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

private:
    Ui::mainDashboard *ui;
    //QBarSet *m_set;
    //spendingChart *SpendingChart;
    QtCharts::QPieSeries *m_pieSeries; //m_pieSeries
    QtCharts::QPieSeries *spendSeries; //yearSeries
    QtCharts::QPieSeries *catSeries; //cat_series
    QtCharts::QBarSet *spendingsBarSet; //m_set0
    QtCharts::QBarSet *budgetLeftBarSet; //m_set1
    //QtCharts::QBarSet *m_set2;
    tableWidget spendingsTable;
    tableWidget incomeTable;
    int flag;
    updateBudgetDialog updateBudgetWindow;
};

#endif // MAINDASHBOARD_H
