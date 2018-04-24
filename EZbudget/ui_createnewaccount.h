/********************************************************************************
** Form generated from reading UI file 'createnewaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createNewAccount
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *createNewAccount)
    {
        if (createNewAccount->objectName().isEmpty())
            createNewAccount->setObjectName(QStringLiteral("createNewAccount"));
        createNewAccount->resize(625, 418);
        widget = new QWidget(createNewAccount);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 70, 441, 331));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(10);
        font1.setStyleStrategy(QFont::PreferDefault);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        verticalLayout_2->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        comboBox = new QComboBox(widget);
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

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);


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

    } // retranslateUi

};

namespace Ui {
    class createNewAccount: public Ui_createNewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWACCOUNT_H
