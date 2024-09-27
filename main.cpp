#include "mainwindow.h"

#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "tensiometer.h"
#include "mainwindow.h"
#include <QTimer>
#include "QDebug"
#include "mainwindow2.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    mainwindow2 ui2;

    qmlRegisterType<Tensiometer>("com.tensiometer",1,0,"Tensiometer");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/tensiometer.qml")));

    QObject *object = engine.rootObjects()[0];

    QStringList names = {"tensioMeter0", "tensioMeter1", "tensioMeter2", "tensioMeter3",
                         "tensioMeter4", "tensioMeter5", "tensioMeter6", "tensioMeter7",
                         "tensioMeter8", "tensioMeter9", "tensioMeter10", "tensioMeter11",
                         "tensioMeter12", "tensioMeter13", "tensioMeter14", "tensioMeter15",
                         "tensioMeter16", "tensioMeter17", "tensioMeter18", "tensioMeter19",
                         "tensioMeter20", "tensioMeter21", "tensioMeter22", "tensioMeter23",
                         "tensioMeter24", "tensioMeter25", "tensioMeter26", "tensioMeter27",
                         "tensioMeter28", "tensioMeter29", "tensioMeter30", "tensioMeter31"};


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
            if (i < 16){
                tensiometers[i]->setPression(w.dataPression[i]);
                if(w.dataPression[i] < 0.55){
                    tensiometers[i]->setInnerColor(QColor(0,0,0));
                    tensiometers[i]->setOuterColor(QColor(0,0,255));

                }else if(w.dataPression[i]< 1.10){
                    tensiometers[i]->setInnerColor(QColor(0,0,255));
                    tensiometers[i]->setOuterColor(QColor(0,205,255));

                }else if(w.dataPression[i] < 1.65){
                    tensiometers[i]->setInnerColor(QColor(0,205,255));
                    tensiometers[i]->setOuterColor(QColor(0,255,0));

                }else if(w.dataPression[i] < 2.20){
                    tensiometers[i]->setInnerColor(QColor(0,255,0));
                    tensiometers[i]->setOuterColor(QColor(255,255,0));

                }else if(w.dataPression[i] < 2.75){
                    tensiometers[i]->setInnerColor(QColor(255,255,0));
                    tensiometers[i]->setOuterColor(QColor(255,0,0));

                }else{
                    tensiometers[i]->setInnerColor(QColor(255,0,0));
                    tensiometers[i]->setOuterColor(QColor(255,0,255));

                }
            }else{
                tensiometers[i]->setPression(ui2.dataPression2[i-16]);
                if(ui2.dataPression2[i-16] < 0.55){
                    tensiometers[i]->setInnerColor(QColor(0,0,0));
                    tensiometers[i]->setOuterColor(QColor(0,0,255));

                }else if(ui2.dataPression2[i-16]< 1.10){
                    tensiometers[i]->setInnerColor(QColor(0,0,255));
                    tensiometers[i]->setOuterColor(QColor(0,205,255));

                }else if(ui2.dataPression2[i-16] < 1.65){
                    tensiometers[i]->setInnerColor(QColor(0,205,255));
                    tensiometers[i]->setOuterColor(QColor(0,255,0));

                }else if(ui2.dataPression2[i-16] < 2.20){
                    tensiometers[i]->setInnerColor(QColor(0,255,0));
                    tensiometers[i]->setOuterColor(QColor(255,255,0));

                }else if(ui2.dataPression2[i-16] < 2.75){
                    tensiometers[i]->setInnerColor(QColor(255,255,0));
                    tensiometers[i]->setOuterColor(QColor(255,0,0));

                }else if(ui2.dataPression2[i-16] < 3.3){
                    tensiometers[i]->setInnerColor(QColor(255,0,0));
                    tensiometers[i]->setOuterColor(QColor(255,0,255));

                }else{

                }
            }
        }
    });
    timer1.start(5);


    if(engine.rootObjects().isEmpty())
        return -1;

    w.show();
    ui2.show();
    return a.exec();
}
