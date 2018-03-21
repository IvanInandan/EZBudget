#include "spendingsbreakdownchart.h"
#include "spendingsbreakdownslice.h"

spendingsBreakDownChart::spendingsBreakDownChart(QGraphicsItem *parent, Qt::WindowFlags wFlags)
    : QChart(QChart::ChartTypeCartesian, parent, wFlags), m_currentS(0)
{

}

spendingsBreakDownChart::~spendingsBreakDownChart()
{

}

void spendingsBreakDownChart::changeSeries(QAbstractSeries *abSeries)
{
    // NOTE: if the series is owned by the chart it will be deleted
    // here the "window" owns the series...
    if (m_currentS)
        removeSeries(m_currentS);
    m_currentS = abSeries;
    addSeries(abSeries);
    setTitle(abSeries->name());
}

void spendingsBreakDownChart::handleSliceClicked(QPieSlice *slice)
{
    spendingsBreakdownSlice *drilldownSlice = static_cast<spendingsBreakdownSlice *>(slice);
    changeSeries(drilldownSlice->drilldownSeries());
}
