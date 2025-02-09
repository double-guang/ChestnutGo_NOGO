/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *GameModeSelect;
    QLineEdit *HumanTimeEdit;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *BotTimeEdit;
    QLabel *label_4;
    QLabel *label_2;
    QComboBox *FirstPlayerSelect;
    QPushButton *OKPushButton;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QString::fromUtf8("SettingDialog"));
        SettingDialog->resize(500, 550);
        SettingDialog->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(60, 43, 50);\n"
"font: 24px 'Arial Rounded MT Bold';\n"
"color: #7988a8;}"));
        verticalLayoutWidget = new QWidget(SettingDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 100, 371, 361));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GameModeSelect = new QComboBox(verticalLayoutWidget);
        GameModeSelect->setObjectName(QString::fromUtf8("GameModeSelect"));
        GameModeSelect->setStyleSheet(QString::fromUtf8("color: rgb(145, 111, 125);"));

        gridLayout->addWidget(GameModeSelect, 0, 1, 1, 1);

        HumanTimeEdit = new QLineEdit(verticalLayoutWidget);
        HumanTimeEdit->setObjectName(QString::fromUtf8("HumanTimeEdit"));
        HumanTimeEdit->setStyleSheet(QString::fromUtf8("color: rgb(145, 111, 125);"));

        gridLayout->addWidget(HumanTimeEdit, 1, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        BotTimeEdit = new QLineEdit(verticalLayoutWidget);
        BotTimeEdit->setObjectName(QString::fromUtf8("BotTimeEdit"));
        BotTimeEdit->setStyleSheet(QString::fromUtf8("color: rgb(145, 111, 125);"));

        gridLayout->addWidget(BotTimeEdit, 2, 1, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        FirstPlayerSelect = new QComboBox(verticalLayoutWidget);
        FirstPlayerSelect->setObjectName(QString::fromUtf8("FirstPlayerSelect"));
        FirstPlayerSelect->setStyleSheet(QString::fromUtf8("color: rgb(145, 111, 252);\n"
"color: rgb(145, 111, 125);\n"
"selection-color: rgb(145, 111, 125);"));

        gridLayout->addWidget(FirstPlayerSelect, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        OKPushButton = new QPushButton(verticalLayoutWidget);
        OKPushButton->setObjectName(QString::fromUtf8("OKPushButton"));
        OKPushButton->setStyleSheet(QString::fromUtf8("color: rgb(145, 111, 125);"));

        verticalLayout->addWidget(OKPushButton);


        retranslateUi(SettingDialog);

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QCoreApplication::translate("SettingDialog", "Settings", nullptr));
        label_3->setText(QCoreApplication::translate("SettingDialog", "<html><head/><body><p><span style=\" font-size:14pt; color:#916f7d;\">Bot</span><span style=\" font-size:14pt; font-weight:700; color:#916f7d;\">\346\227\266\351\231\220</span><span style=\" font-size:14pt; color:#916f7d;\">(s)</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("SettingDialog", "<html><head/><body><p><span style=\" font-size:14pt; color:#916f7d;\">Human</span><span style=\" font-size:14pt; font-weight:700; color:#916f7d;\">\346\227\266\351\231\220</span><span style=\" font-size:14pt; color:#916f7d;\">(s)   </span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("SettingDialog", "<html><head/><body><p><span style=\" font-size:14pt; color:#916f7d;\">Game Type</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SettingDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#916f7d;\">\345\205\210\346\211\213\346\226\271</span></p></body></html>", nullptr));
        OKPushButton->setText(QCoreApplication::translate("SettingDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
