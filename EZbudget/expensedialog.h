#ifndef EXPENSEDIALOG_H
#define EXPENSEDIALOG_H

#include <QDialog>
#include <QDate>

namespace Ui {
class ExpenseDialog;
}

class ExpenseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExpenseDialog(QWidget *parent = 0);
    ~ExpenseDialog();

    QString transactionName() const;
    QString transactionCategory() const;
    QDate transactionDate() const;
    QString transactionType() const; // Check
    double transactionAmount() const;


private slots:

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

  //  void on_transactionTypeEdit_activated(const QString &arg1);

private:
    Ui::ExpenseDialog *ui;
};

#endif // EXPENSEDIALOG_H
