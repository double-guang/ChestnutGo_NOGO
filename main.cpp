#include <windows.h>
#include "mainwindow.h"
#include "utils.h"
#include <QApplication>
#include <QFontDatabase>
#include <QScreen>
#undef slots
#include <Python.h>
#define slots Q_SLOTS
#include "settingdialog.h"

int main(int argc, char *argv[])
{
    Py_Initialize();
    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    //QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    int fontId = QFontDatabase::addApplicationFont(QCoreApplication::applicationDirPath()+"arlrdbd.ttf" );
    QStringList fontFamilies = QFontDatabase::applicationFontFamilies(fontId);
    MainWindow w;
    return a.exec();
    Py_Finalize();
}
/*
HDC hDC = GetDC(0);
double cx = GetDeviceCaps(hDC, DESKTOPHORZRES);
qDebug() << cx;
qreal scale = cx / 960;				// 960 = 1920 / 2
qputenv("QT_SCALE_FACTOR", QString::number(scale).toLatin1());
*/
