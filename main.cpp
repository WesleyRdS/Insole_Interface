#include "mainwindow.h"

#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "tensiometer.h"
#include "mainwindow.h"
#include <QTimer>
#include "QDebug"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    qmlRegisterType<Tensiometer>("com.tensiometer",1,0,"Tensiometer");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/tensiometer.qml")));

    QObject *object = engine.rootObjects()[0];
    QObject *tensiometer = object->findChild<QObject*>("tensioMeter");
    Tensiometer *ptrTensiometer = qobject_cast<Tensiometer*>(tensiometer);

    qreal val = 0;

    QTimer timer1;
    QObject::connect(&timer1, &QTimer::timeout, [&]()
    {
        val = val + 10;
        ptrTensiometer->setPression(w.dataPression);

    });
    timer1.start(5);


    if(engine.rootObjects().isEmpty())
        return -1;
    w.show();
    return a.exec();
}
