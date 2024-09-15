#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QQuickView"
#include "QVBoxLayout"
#include <QQmlContext>
#include "qcustomplot.h"
#include "QTime"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->plot->addGraph();
    ui->plot->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->plot->xAxis->setLabel("TIME(ms)");
    ui->plot->yAxis->setLabel("PRESSION");
    ui->plot->xAxis->setRange(0,maxRangeX);
    ui->plot->yAxis->setRange(0,3.3);


    ui->plot->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->plot->graph(0)->setPen(QPen(QColor(127,0,5).lighter(200)));
    ui->plot->graph(0)->setBrush(QBrush(QColor(127,0,5)));



    ttyACM = new QSerialPort();

    ttyACM->setBaudRate(QSerialPort::BaudRate::Baud115200);
    ttyACM->setParity(QSerialPort::Parity::NoParity);
    ttyACM->setDataBits(QSerialPort::DataBits::Data8);
    ttyACM->setStopBits(QSerialPort::StopBits::OneStop);
    ttyACM->setFlowControl(QSerialPort::FlowControl::NoFlowControl);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::plot()
{

    if(now >= maxRangeX){
        maxRangeX += 1;
        ui->plot->xAxis->setRange(0,maxRangeX);
    }
    ui->plot->graph(0)->setData(qv_x,qv_y);
    now += 0.030;
    ui->plot->replot();
    ui->plot->update();
}
void MainWindow::on_connect_port_clicked()
{
    if(ttyACM->isOpen() == false){
        ttyACM->setPortName(ui->port_field->text());
        ttyACM->open(QIODevice::ReadWrite);

        connect(ttyACM,SIGNAL(readyRead()),this,SLOT(Read_Data_Sensors()));
    }

    if(ttyACM->isOpen()){
        qDebug() << "Serial Port is Connect in " << ttyACM->portName();
    }
    else{
        qDebug() << "Unable to Connect Port " << ttyACM->portName();
        qDebug() << ttyACM->error();
    }
}

void MainWindow::on_disconnect_port_clicked()
{
    if(ttyACM->isOpen()){
        ttyACM->close();
        qDebug() << "Device discconected from port " << ttyACM->portName();
    }
    else{
        qDebug() << "The device is already disconnected";
    }
}

void MainWindow::Read_Data_Sensors()
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
            dataArray = get_values_adc(Data_From_MCU);
            for(int i = 0; i < 16; i++){
                dataPression[i] = dataArray[i].toDouble();
            }
            qv_x.append(tempo);
            switch(sensorSelected){
                case 0:
                    qv_y.append(dataPression[0]);
                    plot();
                    break;
                case 1:
                    qv_y.append(dataPression[1]);
                    plot();
                    break;
                case 2:
                    qv_y.append(dataPression[2]);
                    plot();
                    break;
                case 3:
                    qv_y.append(dataPression[3]);
                    plot();
                    break;
                case 4:
                    qv_y.append(dataPression[4]);
                    plot();
                    break;
                case 5:
                    qv_y.append(dataPression[5]);
                    plot();
                    break;
                case 6:
                    qv_y.append(dataPression[6]);
                    plot();
                    break;
                case 7:
                    qv_y.append(dataPression[7]);
                    plot();
                    break;
                case 8:
                    qv_y.append(dataPression[8]);
                    plot();
                    break;
                case 9:
                    qv_y.append(dataPression[9]);
                    plot();
                    break;
                case 10:
                    qv_y.append(dataPression[10]);
                    plot();
                    break;
                case 11:
                    qv_y.append(dataPression[11]);
                    plot();
                    break;
                case 12:
                    qv_y.append(dataPression[12]);
                    plot();
                    break;
                case 13:
                    qv_y.append(dataPression[13]);
                    plot();
                    break;
                case 14:
                    qv_y.append(dataPression[14]);
                    plot();
                    break;
                case 15:
                    qv_y.append(dataPression[15]);
                    plot();
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

QStringList MainWindow::get_values_adc(QString string)
{
    QStringList aux;
    aux = string.split(" ");
    aux.removeLast();
    return aux;
}
void MainWindow::on_sb_changeSensor_valueChanged(int arg1)
{
    tempo = 0;
    now = 0;
    maxRangeX = 10;
    ui->plot->xAxis->setRange(0,maxRangeX);
    qv_x.clear();
    qv_y.clear();
    sensorSelected = arg1;
}
