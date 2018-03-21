#ifndef SPENDINGSBREAKDOWNCHART_H
#define SPENDINGSBREAKDOWNCHART_H

#include <QtCharts/QChart>

QT_CHARTS_BEGIN_NAMESPACE
class QAbstractSeries;
class QPieSlice;
QT_CHARTS_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE

class spendingsBreakDownChart : public QChart
{
        Q_OBJECT
public:
    explicit spendingsBreakDownChart(QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
    ~spendingsBreakDownChart();
    void changeSeries(QAbstractSeries *abSeries);

public Q_SLOTS:
     void handleSliceClicked(QPieSlice *slice);

private:
     QtCharts::QAbstractSeries *m_currentS;

};

#endif // SPENDINGSBREAKDOWNCHART_H
