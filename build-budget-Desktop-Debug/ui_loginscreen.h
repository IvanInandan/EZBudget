/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginScreen
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QPushButton *loginButton;
    QPushButton *pushButton_2;
    QLabel *invalidLogin;

    void setupUi(QDialog *loginScreen)
    {
        if (loginScreen->objectName().isEmpty())
            loginScreen->setObjectName(QStringLiteral("loginScreen"));
        loginScreen->resize(272, 237);
        groupBox = new QGroupBox(loginScreen);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 231, 211));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 61, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 60, 16));
        lineEditUsername = new QLineEdit(groupBox);
        lineEditUsername->setObjectName(QStringLiteral("lineEditUsername"));
        lineEditUsername->setGeometry(QRect(90, 30, 131, 21));
        lineEditPassword = new QLineEdit(groupBox);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(90, 60, 131, 21));
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(60, 110, 113, 32));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 140, 113, 32));
        invalidLogin = new QLabel(groupBox);
        invalidLogin->setObjectName(QStringLiteral("invalidLogin"));
        invalidLogin->setGeometry(QRect(80, 90, 81, 16));

        retranslateUi(loginScreen);

        QMetaObject::connectSlotsByName(loginScreen);
    } // setupUi

    void retranslateUi(QDialog *loginScreen)
    {
        loginScreen->setWindowTitle(QApplication::translate("loginScreen", "EZBudget", nullptr));
        groupBox->setTitle(QApplication::translate("loginScreen", "Login", nullptr));
        label->setText(QApplication::translate("loginScreen", "Username", nullptr));
        label_2->setText(QApplication::translate("loginScreen", "Password", nullptr));
        loginButton->setText(QApplication::translate("loginScreen", "Login", nullptr));
        pushButton_2->setText(QApplication::translate("loginScreen", "Cancel", nullptr));
        invalidLogin->setText(QApplication::translate("loginScreen", "Invalid login.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginScreen: public Ui_loginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
