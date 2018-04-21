#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H

#include <QDialog>

namespace Ui {
class forgotPassword;
}

class forgotPassword : public QDialog
{
    Q_OBJECT

public:
    explicit forgotPassword(QWidget *parent = 0);
    ~forgotPassword();

private:
    Ui::forgotPassword *ui;
};

#endif // FORGOTPASSWORD_H
