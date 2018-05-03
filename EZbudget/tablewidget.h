#ifndef TABLEWIDGET_H
#define TABLEWIDGET_H

#include <QWidget>
#include <account.h>

class mainDashboard;
namespace Ui {
class tableWidget;
}

class tableWidget : public QWidget
{
    Q_OBJECT

public:
    explicit tableWidget(QWidget *parent = 0);
    ~tableWidget();
    void updateUi(QString type);
    int getRowCount();

    //void removeFromExpenditures(int index);

private slots:
    void on_addTransactionButton_clicked();

    void on_removeTransactionButton_clicked();

    void on_editTransactionButton_clicked();

private:
    Ui::tableWidget *ui;

    enum Column
    {
        NAME, CATEGORY, DATE, AMOUNT
    };
};

#endif // TABLEWIDGET_H
