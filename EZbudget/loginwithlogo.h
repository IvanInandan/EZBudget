/*
 * Author: Alex Shershnov
 * Date last edited: 3/30/2018
 * Type: Header file
 * This is a header file for login UI and implementation
 */
#ifndef LOGINWITHLOGO_H
#define LOGINWITHLOGO_H

#include <QMainWindow>
#include <QtDebug>
#include <QString>
#include "databasereaderwriter.h"

namespace Ui {
class loginWithLogo;
}

class loginWithLogo : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginWithLogo(QWidget *parent = 0);
    ~loginWithLogo();

private slots:
    void on_pushButton_clicked();

    void on_createAccountButton_clicked();

    void on_forgotPassword_clicked();


private:
    Ui::loginWithLogo *ui;
    DatabaseReaderWriter* db = DatabaseReaderWriter::Instance();
};

#endif // LOGINWITHLOGO_H
