#include "mainwindow.h"

#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "tensiometer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    qmlRegisterType<Tensiometer>("com.tensiometer",1,0,"Tensiometer");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/tensiometer.qml")));
    if(engine.rootObjects().isEmpty())
        return -1;
    w.show();
    return a.exec();
}
