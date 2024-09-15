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

    QStringList names = {"tensioMeter0", "tensioMeter1", "tensioMeter2", "tensioMeter3",
                         "tensioMeter4", "tensioMeter5", "tensioMeter6", "tensioMeter7",
                         "tensioMeter8", "tensioMeter9", "tensioMeter10", "tensioMeter11",
                         "tensioMeter12", "tensioMeter13", "tensioMeter14", "tensioMeter15"};


    QVector<Tensiometer*> tensiometers;


    for (const QString& name : names) {
        QObject* foundObject = object->findChild<QObject*>(name);
        Tensiometer* tensiometer = qobject_cast<Tensiometer*>(foundObject);
        if (tensiometer) {
            tensiometers.append(tensiometer);
        }
    }


    QTimer timer1;
    QObject::connect(&timer1, &QTimer::timeout, [&]()
    {
        for(int i = 0; i < tensiometers.size(); i++){
            tensiometers[i]->setPression(w.dataPression[i]);
            if(w.dataPression[i] < 0.25){
                tensiometers[i]->setInnerColor(QColor(0,0,0));
                tensiometers[i]->setOuterColor(QColor(128,255,0));
                tensiometers[i]->setTextColor(QColor(255,255,255));
            }else if(w.dataPression[i] < 0.35){
                tensiometers[i]->setInnerColor(QColor(128,255,0));
                tensiometers[i]->setOuterColor(QColor(255,255,0));
                tensiometers[i]->setTextColor(QColor(0,0,0));
            }else{
                tensiometers[i]->setInnerColor(QColor(255,255,0));
                tensiometers[i]->setOuterColor(QColor(255,0,0));
                tensiometers[i]->setTextColor(tensiometers[i]->getOuterColor());
            }
        }
    });
    timer1.start(5);


    if(engine.rootObjects().isEmpty())
        return -1;
    w.show();
    return a.exec();
}
