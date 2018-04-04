#include "spendingsbreakdownchart.h"
#include "spendingsbreakdownslice.h"

QT_CHARTS_USE_NAMESPACE

spendingsBreakdownSlice::spendingsBreakdownSlice(qreal value, QString prefix, QAbstractSeries *drilldownSeries)
    : m_drilldownSeries(drilldownSeries),
      m_prefix(prefix)

{
    setValue(value);
    updateLabel();
    setLabelFont(QFont("Arial", 8));
    connect(this, &spendingsBreakdownSlice::percentageChanged, this, &spendingsBreakdownSlice::updateLabel);
    connect(this, &spendingsBreakdownSlice::hovered, this, &spendingsBreakdownSlice::showHighlight);
}

//spendingsBreakdownSlice::spendingsBreakdownSlice(qreal value, QString prefix, QAbstractSeries *drilldownSeries)
//    : m_drilldownSeries(drilldownSeries),
//      m_prefix(prefix)

spendingsBreakdownSlice::~spendingsBreakdownSlice()
{

}

QAbstractSeries *spendingsBreakdownSlice::drilldownSeries() const
{
    return m_drilldownSeries;
}

void spendingsBreakdownSlice::updateLabel()
{
    QString label = m_prefix;
    label += " $";
    label += QString::number(this->value());
    label += ", ";
    label += QString::number(this->percentage() * 100, 'f', 1);
    label += "%";
    setLabel(label);
}

void spendingsBreakdownSlice::showHighlight(bool show)
{
    setLabelVisible(show);
    setExploded(show);
}
