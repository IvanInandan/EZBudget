#ifndef EDITTRANSACTION_H
#define EDITTRANSACTION_H

#include <QDialog>

namespace Ui {
class editTransaction;
}

class editTransaction : public QDialog
{
    Q_OBJECT

public:
    explicit editTransaction(QWidget *parent = 0);
    ~editTransaction();

    QString transactionName() const;
    QString transactionCategory() const;
    QDate transactionDate() const;
    double transactionAmount() const;
    //QString transactionType() const; // Check

signals:


private slots:

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::editTransaction *ui;
};

#endif // EDITTRANSACTION_H
