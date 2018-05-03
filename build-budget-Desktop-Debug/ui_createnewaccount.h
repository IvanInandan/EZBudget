/********************************************************************************
** Form generated from reading UI file 'createnewaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWACCOUNT_H
#define UI_CREATENEWACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createNewAccount
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *newUsername;
    QLineEdit *newPassword;
    QLineEdit *newRePassword;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *warningLabel;

    void setupUi(QDialog *createNewAccount)
    {
        if (createNewAccount->objectName().isEmpty())
            createNewAccount->setObjectName(QStringLiteral("createNewAccount"));
        createNewAccount->resize(625, 418);
        layoutWidget = new QWidget(createNewAccount);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 30, 441, 331));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(10);
        font1.setStyleStrategy(QFont::PreferDefault);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        newUsername = new QLineEdit(layoutWidget);
        newUsername->setObjectName(QStringLiteral("newUsername"));

        verticalLayout_2->addWidget(newUsername);

        newPassword = new QLineEdit(layoutWidget);
        newPassword->setObjectName(QStringLiteral("newPassword"));
        newPassword->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(newPassword);

        newRePassword = new QLineEdit(layoutWidget);
        newRePassword->setObjectName(QStringLiteral("newRePassword"));
        newRePassword->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(newRePassword);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_5->addWidget(cancelButton);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_5->addWidget(okButton);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        warningLabel = new QLabel(createNewAccount);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setGeometry(QRect(210, 370, 311, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        warningLabel->setFont(font2);

        retranslateUi(createNewAccount);

        QMetaObject::connectSlotsByName(createNewAccount);
    } // setupUi

    void retranslateUi(QDialog *createNewAccount)
    {
        createNewAccount->setWindowTitle(QApplication::translate("createNewAccount", "Dialog", nullptr));
        label_5->setText(QApplication::translate("createNewAccount", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#000000;\">Create New Acount</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("createNewAccount", "Username", nullptr));
        label_2->setText(QApplication::translate("createNewAccount", "Password", nullptr));
        label_3->setText(QApplication::translate("createNewAccount", "Re-enter Password", nullptr));
        label_4->setText(QApplication::translate("createNewAccount", "Security Question", nullptr));
        comboBox->setItemText(0, QApplication::translate("createNewAccount", "Select", nullptr));
        comboBox->setItemText(1, QApplication::translate("createNewAccount", "What is your favorite animal?", nullptr));
        comboBox->setItemText(2, QApplication::translate("createNewAccount", "What is your favorite color?", nullptr));
        comboBox->setItemText(3, QApplication::translate("createNewAccount", "What is the name of your first pet?", nullptr));

        cancelButton->setText(QApplication::translate("createNewAccount", "Cancel", nullptr));
        okButton->setText(QApplication::translate("createNewAccount", "OK", nullptr));
        warningLabel->setText(QApplication::translate("createNewAccount", "[+]Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createNewAccount: public Ui_createNewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWACCOUNT_H
