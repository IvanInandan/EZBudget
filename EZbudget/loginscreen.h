#include "maindashboard.h"
#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QDialog>

namespace Ui {
class loginScreen;
}

class loginScreen : public QDialog
{
    Q_OBJECT

public:
    explicit loginScreen(QWidget *parent = 0);
    ~loginScreen();

private slots:
    void on_loginButton_clicked();

private:
    Ui::loginScreen *ui;
    mainDashboard *mainDash;
};

#endif // LOGINSCREEN_H
