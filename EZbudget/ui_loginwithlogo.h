/********************************************************************************
** Form generated from reading UI file 'loginwithlogo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWITHLOGO_H
#define UI_LOGINWITHLOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginWithLogo
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *createAccountButton;
    QPushButton *resetPassword;
    QPushButton *forgotPassword;
    QLabel *status_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginWithLogo)
    {
        if (loginWithLogo->objectName().isEmpty())
            loginWithLogo->setObjectName(QStringLiteral("loginWithLogo"));
        loginWithLogo->resize(631, 562);
        loginWithLogo->setAutoFillBackground(true);
        centralwidget = new QWidget(loginWithLogo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 120, 291, 121));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/IMG_20180419_163202_322.jpg")));
        label_4->setScaledContents(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 270, 421, 251));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(10);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(true);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(10);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        verticalLayout_2->addWidget(lineEdit_username);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Serif"));
        lineEdit_password->setFont(font2);
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_password);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        pushButton->setFont(font3);

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        createAccountButton = new QPushButton(layoutWidget);
        createAccountButton->setObjectName(QStringLiteral("createAccountButton"));

        horizontalLayout_3->addWidget(createAccountButton);

        resetPassword = new QPushButton(layoutWidget);
        resetPassword->setObjectName(QStringLiteral("resetPassword"));

        horizontalLayout_3->addWidget(resetPassword);

        forgotPassword = new QPushButton(layoutWidget);
        forgotPassword->setObjectName(QStringLiteral("forgotPassword"));

        horizontalLayout_3->addWidget(forgotPassword);


        verticalLayout_4->addLayout(horizontalLayout_3);

        status_label = new QLabel(layoutWidget);
        status_label->setObjectName(QStringLiteral("status_label"));
        status_label->setEnabled(true);
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        status_label->setFont(font4);

        verticalLayout_4->addWidget(status_label);

        loginWithLogo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginWithLogo);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 631, 17));
        loginWithLogo->setMenuBar(menubar);
        statusbar = new QStatusBar(loginWithLogo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        loginWithLogo->setStatusBar(statusbar);

        retranslateUi(loginWithLogo);

        QMetaObject::connectSlotsByName(loginWithLogo);
    } // setupUi

    void retranslateUi(QMainWindow *loginWithLogo)
    {
        loginWithLogo->setWindowTitle(QApplication::translate("loginWithLogo", "MainWindow", nullptr));
        label_4->setText(QString());
        label->setText(QApplication::translate("loginWithLogo", "<html><head/><body><p>Username:</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("loginWithLogo", "Password:", nullptr));
        pushButton->setText(QApplication::translate("loginWithLogo", "Login", nullptr));
        createAccountButton->setText(QApplication::translate("loginWithLogo", "Create Account", nullptr));
        resetPassword->setText(QApplication::translate("loginWithLogo", "Reset Password", nullptr));
        forgotPassword->setText(QApplication::translate("loginWithLogo", "Forgot Password", nullptr));
        status_label->setText(QApplication::translate("loginWithLogo", "<html><head/><body><p><span style=\" color:#ffffff;\">[+]Status</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginWithLogo: public Ui_loginWithLogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWITHLOGO_H
