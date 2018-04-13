#ifndef UPDATEBUDGETDIALOG_H
#define UPDATEBUDGETDIALOG_H

#include <QDialog>

namespace Ui {
class updateBudgetDialog;
}

class updateBudgetDialog : public QDialog
{
    Q_OBJECT

public:
    explicit updateBudgetDialog(QWidget *parent = 0);
    ~updateBudgetDialog();

    int updateBudget() const;

private slots:

    void on_okButton_clicked();

private:
    Ui::updateBudgetDialog *ui;
};

#endif // UPDATEBUDGETDIALOG_H
