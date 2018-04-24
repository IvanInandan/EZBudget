/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_forgotPassword
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *forgotPassword)
    {
        if (forgotPassword->objectName().isEmpty())
            forgotPassword->setObjectName(QStringLiteral("forgotPassword"));
        forgotPassword->resize(490, 349);
        forgotPassword->setMinimumSize(QSize(0, 0));
        pushButton = new QPushButton(forgotPassword);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 270, 131, 21));
        widget = new QWidget(forgotPassword);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 50, 361, 191));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(forgotPassword);

        QMetaObject::connectSlotsByName(forgotPassword);
    } // setupUi

    void retranslateUi(QDialog *forgotPassword)
    {
        forgotPassword->setWindowTitle(QApplication::translate("forgotPassword", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("forgotPassword", "Get Password", nullptr));
        label_4->setText(QApplication::translate("forgotPassword", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Forgot your password?</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("forgotPassword", "<html><head/><body><p><span style=\" font-size:9pt;\">Username</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("forgotPassword", "<html><head/><body><p><span style=\" font-size:9pt;\">Security Question</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QApplication::translate("forgotPassword", "Select", nullptr));

    } // retranslateUi

};

namespace Ui {
    class forgotPassword: public Ui_forgotPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
