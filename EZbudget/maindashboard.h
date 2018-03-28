#ifndef MAINDASHBOARD_H
#define MAINDASHBOARD_H

#include <QMainWindow>
#include "account.h"
#include <QtCharts/QBarSet>
#include <QtCharts/QPieSeries>
#include "tablewidget.h"
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

public slots:
    void updateUi();

private slots:
    void on_spendingsButton_clicked();

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
    tableWidget table;
};

#endif // MAINDASHBOARD_H
