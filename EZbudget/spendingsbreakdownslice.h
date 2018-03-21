#ifndef SPENDINGSBREAKDOWNSLICE_H
#define SPENDINGSBREAKDOWNSLICE_H

#include <QtCharts/QPieSlice>

QT_CHARTS_BEGIN_NAMESPACE
class QAbstractSeries;
QT_CHARTS_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE

class spendingsBreakdownSlice : public QPieSlice
{
    Q_OBJECT

public:
    spendingsBreakdownSlice(qreal value, QString prefix, QAbstractSeries *drilldownSeries);
    virtual ~spendingsBreakdownSlice();
    QAbstractSeries *drilldownSeries() const;

public Q_SLOTS:
    void updateLabel();
    void showHighlight(bool show);

private:
    QAbstractSeries *m_drilldownSeries;
    QString m_prefix;
};

#endif // SPENDINGSBREAKDOWNSLICE_H
