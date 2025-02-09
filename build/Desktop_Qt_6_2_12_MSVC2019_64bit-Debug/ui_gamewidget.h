/********************************************************************************
** Form generated from reading UI file 'gamewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWIDGET_H
#define UI_GAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWidget
{
public:
    QPushButton *ReturnPushButton;
    QPushButton *HintPushButton;
    QPushButton *RestartPushButton;
    QPushButton *ReactPushButton;
    QPushButton *PausePushButton;
    QLabel *AIHintLabel;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *PauseLabel;
    QProgressBar *TimeBar;

    void setupUi(QWidget *GameWidget)
    {
        if (GameWidget->objectName().isEmpty())
            GameWidget->setObjectName(QString::fromUtf8("GameWidget"));
        GameWidget->resize(1280, 920);
        GameWidget->setCursor(QCursor(Qt::ArrowCursor));
        GameWidget->setMouseTracking(true);
        GameWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        GameWidget->setAutoFillBackground(false);
        GameWidget->setStyleSheet(QString::fromUtf8("QWidget#GameWidget\n"
"{	\n"
"	background-image: url(:/pic/QTNoGo.png);\n"
"	background-color: rgb(40, 49, 73);\n"
"}"));
        ReturnPushButton = new QPushButton(GameWidget);
        ReturnPushButton->setObjectName(QString::fromUtf8("ReturnPushButton"));
        ReturnPushButton->setGeometry(QRect(880, 120, 360, 102));
        ReturnPushButton->setStyleSheet(QString::fromUtf8("background-image:url(:/pic/Logo.png);\n"
""));
        ReturnPushButton->setFlat(true);
        HintPushButton = new QPushButton(GameWidget);
        HintPushButton->setObjectName(QString::fromUtf8("HintPushButton"));
        HintPushButton->setGeometry(QRect(910, 460, 90, 90));
        HintPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        HintPushButton->setStyleSheet(QString::fromUtf8("QPushButton#HintPushButton\n"
"{\n"
"border-radius: 45;\n"
"border-width: 15px; \n"
"border-style:solid;\n"
"border-color:#FFDBE9;\n"
"}"));
        HintPushButton->setFlat(true);
        RestartPushButton = new QPushButton(GameWidget);
        RestartPushButton->setObjectName(QString::fromUtf8("RestartPushButton"));
        RestartPushButton->setGeometry(QRect(1110, 460, 90, 90));
        RestartPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        RestartPushButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 45;\n"
"border-width: 15px; \n"
"border-style:solid;\n"
"border-color:#A67B8E;\n"
""));
        RestartPushButton->setFlat(true);
        ReactPushButton = new QPushButton(GameWidget);
        ReactPushButton->setObjectName(QString::fromUtf8("ReactPushButton"));
        ReactPushButton->setGeometry(QRect(910, 680, 90, 90));
        ReactPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        ReactPushButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 45;\n"
"border-width: 15px; \n"
"border-style:solid;\n"
"border-color:#FFDBE9;\n"
""));
        ReactPushButton->setFlat(true);
        PausePushButton = new QPushButton(GameWidget);
        PausePushButton->setObjectName(QString::fromUtf8("PausePushButton"));
        PausePushButton->setGeometry(QRect(1110, 680, 90, 90));
        PausePushButton->setCursor(QCursor(Qt::PointingHandCursor));
        PausePushButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 45;\n"
"border-width: 15px; \n"
"border-style:solid;\n"
"border-color:#A67B8E;\n"
""));
        PausePushButton->setFlat(true);
        AIHintLabel = new QLabel(GameWidget);
        AIHintLabel->setObjectName(QString::fromUtf8("AIHintLabel"));
        AIHintLabel->setGeometry(QRect(908, 400, 101, 41));
        AIHintLabel->setStyleSheet(QString::fromUtf8("color: rgb(145,111,125);\n"
"font: 28px 'Arial Rounded MT Bold'"));
        label_2 = new QLabel(GameWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1105, 400, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setBold(false);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(145,111,125);\n"
"font: 28px 'Arial Rounded MT Bold'"));
        label_3 = new QLabel(GameWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(917, 630, 73, 33));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(145,111,125);\n"
"font: 28px 'Arial Rounded MT Bold'"));
        PauseLabel = new QLabel(GameWidget);
        PauseLabel->setObjectName(QString::fromUtf8("PauseLabel"));
        PauseLabel->setGeometry(QRect(1091, 630, 131, 31));
        PauseLabel->setFont(font);
        PauseLabel->setStyleSheet(QString::fromUtf8("color: rgb(145,111,125);\n"
"font: 28px 'Arial Rounded MT Bold'"));
        PauseLabel->setAlignment(Qt::AlignCenter);
        TimeBar = new QProgressBar(GameWidget);
        TimeBar->setObjectName(QString::fromUtf8("TimeBar"));
        TimeBar->setGeometry(QRect(890, 290, 321, 23));
        TimeBar->setStyleSheet(QString::fromUtf8("QProgressBar\n"
"{\n"
"background:rgb(89, 68, 76);\n"
"color:white;\n"
"border-radius:8px;\n"
"}\n"
"QProgressBar::chunk\n"
"{\n"
"border-radius:8px;\n"
"background-color:rgb(255, 229, 233);\n"
"}\n"
""));
        TimeBar->setMaximum(1000);
        TimeBar->setValue(0);
        TimeBar->setTextVisible(false);
        HintPushButton->raise();
        RestartPushButton->raise();
        ReactPushButton->raise();
        PausePushButton->raise();
        AIHintLabel->raise();
        label_2->raise();
        label_3->raise();
        PauseLabel->raise();
        TimeBar->raise();
        ReturnPushButton->raise();

        retranslateUi(GameWidget);

        HintPushButton->setDefault(false);


        QMetaObject::connectSlotsByName(GameWidget);
    } // setupUi

    void retranslateUi(QWidget *GameWidget)
    {
        GameWidget->setWindowTitle(QCoreApplication::translate("GameWidget", "NoGo", nullptr));
        ReturnPushButton->setText(QString());
        HintPushButton->setText(QString());
        RestartPushButton->setText(QString());
        ReactPushButton->setText(QString());
        PausePushButton->setText(QString());
        AIHintLabel->setText(QCoreApplication::translate("GameWidget", "AI Hint", nullptr));
        label_2->setText(QCoreApplication::translate("GameWidget", "Restart", nullptr));
        label_3->setText(QCoreApplication::translate("GameWidget", "Undo", nullptr));
        PauseLabel->setText(QCoreApplication::translate("GameWidget", "Pause", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWidget: public Ui_GameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWIDGET_H
