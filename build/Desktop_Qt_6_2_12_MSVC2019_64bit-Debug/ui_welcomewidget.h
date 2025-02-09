/********************************************************************************
** Form generated from reading UI file 'welcomewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWIDGET_H
#define UI_WELCOMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWidget
{
public:
    QFrame *frame;
    QPushButton *NewGamePushButton;
    QPushButton *ReplayPushButton;

    void setupUi(QWidget *WelcomeWidget)
    {
        if (WelcomeWidget->objectName().isEmpty())
            WelcomeWidget->setObjectName(QString::fromUtf8("WelcomeWidget"));
        WelcomeWidget->resize(1280, 920);
        WelcomeWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 43, 50);"));
        frame = new QFrame(WelcomeWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(230, 220, 804, 226));
        frame->setStyleSheet(QString::fromUtf8("background-image:url(:/pic/WelcomeLogo.png)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        NewGamePushButton = new QPushButton(WelcomeWidget);
        NewGamePushButton->setObjectName(QString::fromUtf8("NewGamePushButton"));
        NewGamePushButton->setGeometry(QRect(500, 540, 271, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setBold(false);
        font.setItalic(false);
        font.setStyleStrategy(QFont::PreferAntialias);
        NewGamePushButton->setFont(font);
        NewGamePushButton->setCursor(QCursor(Qt::PointingHandCursor));
        NewGamePushButton->setStyleSheet(QString::fromUtf8("font: 50px \"Arial Rounded MT Bold\";\n"
"color: rgb(145,111,125);"));
        NewGamePushButton->setFlat(true);
        ReplayPushButton = new QPushButton(WelcomeWidget);
        ReplayPushButton->setObjectName(QString::fromUtf8("ReplayPushButton"));
        ReplayPushButton->setGeometry(QRect(460, 640, 351, 61));
        ReplayPushButton->setFont(font);
        ReplayPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        ReplayPushButton->setStyleSheet(QString::fromUtf8("font: 50px \"Arial Rounded MT Bold\";\n"
"color: rgb(145, 111, 125);"));
        ReplayPushButton->setFlat(true);

        retranslateUi(WelcomeWidget);

        QMetaObject::connectSlotsByName(WelcomeWidget);
    } // setupUi

    void retranslateUi(QWidget *WelcomeWidget)
    {
        WelcomeWidget->setWindowTitle(QCoreApplication::translate("WelcomeWidget", "NoGo", nullptr));
        NewGamePushButton->setText(QCoreApplication::translate("WelcomeWidget", "New Game", nullptr));
        ReplayPushButton->setText(QCoreApplication::translate("WelcomeWidget", "Watch Replay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWidget: public Ui_WelcomeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWIDGET_H
