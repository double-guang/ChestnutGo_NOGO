QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    NoGoAI/aimcts.cpp \
    gamewidget.cpp \
    hintwidget.cpp \
    main.cpp \
    mainwindow.cpp \
    referee.cpp \
    settingdialog.cpp \
    welcomewidget.cpp

HEADERS += \
    NoGoAI/aimcts.h \
    gamewidget.h \
    hintwidget.h \
    mainwindow.h \
    referee.h \
    settingdialog.h \
    utils.h \
    welcomewidget.h

FORMS += \
    gamewidget.ui \
    settingdialog.ui \
    welcomewidget.ui

TRANSLATIONS += \
    test3_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pic.qrc

DISTFILES += \
    Agent.py \
    build/Desktop_Qt_6_2_12_MSVC2019_64bit-Debug/debug/model.pth


win32: LIBS += -LC:/Users/29649/anaconda3/libs/ -lpython311

INCLUDEPATH += C:/Users/29649/anaconda3/include
DEPENDPATH += C:/Users/29649/anaconda3/include

win32:!win32-g++: PRE_TARGETDEPS += C:/Users/29649/anaconda3/libs/python311.lib
else:win32-g++: PRE_TARGETDEPS += C:/Users/29649/anaconda3/libs/libpython311.a
