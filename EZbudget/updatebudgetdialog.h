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

private:
    Ui::updateBudgetDialog *ui;
};

#endif // UPDATEBUDGETDIALOG_H
