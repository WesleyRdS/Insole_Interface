#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "QQuickView"
#include "QVBoxLayout"
#include <QQmlContext>
#include "qcustomplot.h"
#include "QTime"

mainwindow2::mainwindow2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mainwindow2)
{
    ui->setupUi(this);

    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();
    ui->plot2->addGraph();

    ui->plot2->xAxis->setLabel("TIME");
    ui->plot2->yAxis->setLabel("PRESSION");
    ui->plot2->xAxis->setRange(0,maxRangeX);
    ui->plot2->yAxis->setRange(0,3.3);

    for(int cont=0; cont < 16; cont++ ){
        ui->plot2->graph(cont)->setScatterStyle(QCPScatterStyle::ssDisc);
        ui->plot2->graph(cont)->setLineStyle(QCPGraph::lsLine);
    }
    ui->plot2->legend->setVisible(true);
    ui->plot2->graph(0)->setPen(QPen(QColor(255, 100, 100).darker()));
    ui->plot2->graph(1)->setPen(QPen(QColor(100, 255, 100).darker()));
    ui->plot2->graph(2)->setPen(QPen(QColor(100, 100, 255).darker()));
    ui->plot2->graph(3)->setPen(QPen(QColor(255, 255, 100).darker()));
    ui->plot2->graph(4)->setPen(QPen(QColor(255, 255, 150).darker()));
    ui->plot2->graph(5)->setPen(QPen(QColor(100, 255, 255).darker()));
    ui->plot2->graph(6)->setPen(QPen(QColor(255, 100, 255).darker()));
    ui->plot2->graph(7)->setPen(QPen(QColor(255, 195, 100).darker()));
    ui->plot2->graph(8)->setPen(QPen(QColor(175, 100, 175).darker()));
    ui->plot2->graph(9)->setPen(QPen(QColor(180, 90, 50).darker()));
    ui->plot2->graph(10)->setPen(QPen(QColor(150, 150, 150).darker()));
    ui->plot2->graph(11)->setPen(QPen(QColor(255, 150, 150).darker()));
    ui->plot2->graph(12)->setPen(QPen(QColor(150, 255, 150).darker()));
    ui->plot2->graph(13)->setPen(QPen(QColor(150, 150, 255).darker()));
    ui->plot2->graph(14)->setPen(QPen(QColor(255, 255, 150).darker()));
    ui->plot2->graph(15)->setPen(QPen(QColor(150, 255, 255).darker()));

    ui->plot2->graph(0)->setBrush(QBrush(QColor(255, 100, 100, 60)));
    ui->plot2->graph(1)->setBrush(QBrush(QColor(100, 255, 100, 60)));
    ui->plot2->graph(2)->setBrush(QBrush(QColor(100, 100, 255, 60)));
    ui->plot2->graph(3)->setBrush(QBrush(QColor(255, 255, 100, 60)));
    ui->plot2->graph(4)->setBrush(QBrush(QColor(255, 255, 150, 60)));
    ui->plot2->graph(5)->setBrush(QBrush(QColor(100, 255, 255, 60)));
    ui->plot2->graph(6)->setBrush(QBrush(QColor(255, 100, 255, 60)));
    ui->plot2->graph(7)->setBrush(QBrush(QColor(255, 195, 100, 60)));
    ui->plot2->graph(8)->setBrush(QBrush(QColor(175, 100, 175, 60)));
    ui->plot2->graph(9)->setBrush(QBrush(QColor(180, 90, 50, 60)));
    ui->plot2->graph(10)->setBrush(QBrush(QColor(150, 150, 150, 60)));
    ui->plot2->graph(11)->setBrush(QBrush(QColor(255, 150, 150, 60)));
    ui->plot2->graph(12)->setBrush(QBrush(QColor(150, 255, 150, 60)));
    ui->plot2->graph(13)->setBrush(QBrush(QColor(150, 150, 255, 60)));
    ui->plot2->graph(14)->setBrush(QBrush(QColor(255, 255, 150, 60)));
    ui->plot2->graph(15)->setBrush(QBrush(QColor(150, 255, 255, 60)));



    ttyACM = new QSerialPort();

    ttyACM->setBaudRate(QSerialPort::BaudRate::Baud115200);
    ttyACM->setParity(QSerialPort::Parity::NoParity);
    ttyACM->setDataBits(QSerialPort::DataBits::Data8);
    ttyACM->setStopBits(QSerialPort::StopBits::OneStop);
    ttyACM->setFlowControl(QSerialPort::FlowControl::NoFlowControl);


}

mainwindow2::~mainwindow2()
{
    delete ui;
}
void mainwindow2::plot2()
{

    if(now >= maxRangeX){
        maxRangeX += 1;
        ui->plot2->xAxis->setRange(0,maxRangeX);
    }

    ui->plot2->graph(0)->setData(qv_x,qv_y0);
    ui->plot2->graph(1)->setData(qv_x,qv_y1);
    ui->plot2->graph(2)->setData(qv_x,qv_y2);
    ui->plot2->graph(3)->setData(qv_x,qv_y3);
    ui->plot2->graph(4)->setData(qv_x,qv_y4);
    ui->plot2->graph(5)->setData(qv_x,qv_y5);
    ui->plot2->graph(6)->setData(qv_x,qv_y6);
    ui->plot2->graph(7)->setData(qv_x,qv_y7);
    ui->plot2->graph(8)->setData(qv_x,qv_y8);
    ui->plot2->graph(9)->setData(qv_x,qv_y9);
    ui->plot2->graph(10)->setData(qv_x,qv_y10);
    ui->plot2->graph(11)->setData(qv_x,qv_y11);
    ui->plot2->graph(12)->setData(qv_x,qv_y12);
    ui->plot2->graph(13)->setData(qv_x,qv_y13);
    ui->plot2->graph(14)->setData(qv_x,qv_y14);
    ui->plot2->graph(15)->setData(qv_x,qv_y15);


    now += 0.030;
    ui->plot2->replot();
    ui->plot2->update();
}
void mainwindow2::on_connect_port2_clicked()
{
    if(ttyACM->isOpen() == false){
        ttyACM->setPortName(ui->port_fiel2->text());
        ttyACM->open(QIODevice::ReadWrite);

        connect(ttyACM,SIGNAL(readyRead()),this,SLOT(Read_Data_Sensors2()));
    }

    if(ttyACM->isOpen()){
        qDebug() << "Serial Port is Connect in " << ttyACM->portName();
        ttyACM->write("START");
    }
    else{
        qDebug() << "Unable to Connect Port " << ttyACM->portName();
        qDebug() << ttyACM->error();
    }
}


void mainwindow2::on_disconnect_port2_clicked()
{
    if(ttyACM->isOpen()){
        ttyACM->write("STOP");
        ttyACM->close();
        qDebug() << "Device discconected from port " << ttyACM->portName();
    }
    else{
        qDebug() << "The device is already disconnected";
    }
}

void mainwindow2::Read_Data_Sensors2()
{
    QStringList dataArray;


    if(ttyACM->isOpen()){
        while(ttyACM->bytesAvailable()){
            Data_From_MCU += ttyACM->readAll();
            if(Data_From_MCU.at(Data_From_MCU.length()-1) == char(10)){
                Is_Data_Received = true;
            }
        }
        if(Is_Data_Received == true){
            qDebug() << "Data from MCU: " << Data_From_MCU;
            dataArray = get_values_adc2(Data_From_MCU);
            for(int i = 0; i < 16; i++){
                dataPression2[i] = dataArray[i].toDouble() * ADC_RAW_TO_VOLTAGE;
            }
            qv_x.append(tempo);
            switch(sensorSelected){
            case 0:
                qv_y0.append(dataPression2[0]);
                qv_y1.append(dataPression2[1]);
                qv_y2.append(dataPression2[2]);
                qv_y3.append(dataPression2[3]);
                qv_y4.append(dataPression2[4]);
                qv_y5.append(dataPression2[5]);
                qv_y6.append(dataPression2[6]);
                qv_y7.append(dataPression2[7]);
                qv_y8.append(dataPression2[8]);
                qv_y9.append(dataPression2[9]);
                qv_y10.append(dataPression2[10]);
                qv_y11.append(dataPression2[11]);
                qv_y12.append(dataPression2[12]);
                qv_y13.append(dataPression2[13]);
                qv_y14.append(dataPression2[14]);
                qv_y15.append(dataPression2[15]);
                plot2();
                break;
            case 1:
                qv_y0.append(dataPression2[0]);
                plot2();
                break;
            case 2:
                qv_y1.append(dataPression2[1]);
                plot2();
                break;
            case 3:
                qv_y2.append(dataPression2[2]);
                plot2();
                break;
            case 4:
                qv_y3.append(dataPression2[3]);
                plot2();
                break;
            case 5:
                qv_y4.append(dataPression2[4]);
                plot2();
                break;
            case 6:
                qv_y5.append(dataPression2[5]);
                plot2();
                break;
            case 7:
                qv_y6.append(dataPression2[6]);
                plot2();
                break;
            case 8:
                qv_y7.append(dataPression2[7]);
                plot2();
                break;
            case 9:
                qv_y8.append(dataPression2[8]);
                plot2();
                break;
            case 10:
                qv_y9.append(dataPression2[9]);
                plot2();
                break;
            case 11:
                qv_y10.append(dataPression2[10]);
                plot2();
                break;
            case 12:
                qv_y11.append(dataPression2[11]);
                plot2();
                break;
            case 13:
                qv_y12.append(dataPression2[12]);
                plot2();
                break;
            case 14:
                qv_y13.append(dataPression2[13]);
                plot2();
                break;
            case 15:
                qv_y14.append(dataPression2[14]);
                plot2();
                break;
            case 16:
                qv_y15.append(dataPression2[15]);
                plot2();
                break;
            default:
                break;

            }
            tempo = tempo + 0.030;

            Data_From_MCU = "";
            Is_Data_Received = false;
        }
    }
}

QStringList mainwindow2::get_values_adc2(QString string)
{
    QStringList aux;
    aux = string.split(" ");
    aux.removeLast();
    return aux;
}


void mainwindow2::on_sb_changeSensor_valueChanged(int arg1)
{
    tempo = 0;
    now = 0;
    maxRangeX = 10;
    ui->plot2->xAxis->setRange(0,maxRangeX);
    qv_x.clear();
    qv_y0.clear();
    qv_y1.clear();
    qv_y2.clear();
    qv_y3.clear();
    qv_y4.clear();
    qv_y5.clear();
    qv_y6.clear();
    qv_y7.clear();
    qv_y8.clear();
    qv_y9.clear();
    qv_y10.clear();
    qv_y11.clear();
    qv_y12.clear();
    qv_y13.clear();
    qv_y14.clear();
    qv_y15.clear();
    sensorSelected = arg1;
}

