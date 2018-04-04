#ifndef REMOVEDIALOG_H
#define REMOVEDIALOG_H

#include <QDialog>
#include<QString>
namespace Ui {
class RemoveDialog;
}

class RemoveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveDialog(QWidget *parent = 0);
    ~RemoveDialog();

    int removeRowNumber();

private:
    Ui::RemoveDialog *ui;
};

#endif // REMOVEDIALOG_H
