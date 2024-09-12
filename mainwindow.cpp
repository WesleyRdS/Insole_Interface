#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QQuickView"
#include "QVBoxLayout"
#include <QQmlContext>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , colorChanger(new ColorChanger(this))
{
    ui->setupUi(this);

    QQuickView *view = new QQuickView();
    QWidget *container = QWidget::createWindowContainer(view, this);
    view->rootContext()->setContextProperty("colorChanger", colorChanger);
    view->setSource(QUrl(QStringLiteral("qrc:/InsoleView.qml")));
    QVBoxLayout *layout = new QVBoxLayout(ui->insole_view);
    layout->addWidget(container);
    ui->insole_view->setLayout(layout);

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
            dataPression = dataArray[0].toFloat();
            if(dataArray[0].toFloat() < 0.11){
                updateColor(QColor("#0000FF"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 0.11 && dataArray[0].toFloat() < 0.22){
                updateColor(QColor("#0400F2"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 0.22 && dataArray[0].toFloat() < 0.33){
                updateColor(QColor("#0800E6"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 0.33 && dataArray[0].toFloat() < 0.44){
                updateColor(QColor("#0C00DA"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 0.44 && dataArray[0].toFloat() < 0.55){
                updateColor(QColor("#1000CE"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 0.55 && dataArray[0].toFloat() < 0.66){
                updateColor(QColor("#1400C2"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 0.66 && dataArray[0].toFloat() < 0.77){
                updateColor(QColor("#1800B6"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 0.77 && dataArray[0].toFloat() < 0.88){
                updateColor(QColor("#1C00AA"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 0.88 && dataArray[0].toFloat() < 0.99){
                updateColor(QColor("#20009F"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 0.99 && dataArray[0].toFloat() < 1.10){
                updateColor(QColor("#240093"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 1.10 && dataArray[0].toFloat() < 1.21){
                updateColor(QColor("#280087"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 1.21 && dataArray[0].toFloat() < 1.32){
                updateColor(QColor("#2C0080"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 1.32 && dataArray[0].toFloat() < 1.43){
                updateColor(QColor("#300074"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 1.43 && dataArray[0].toFloat() < 1.54){
                updateColor(QColor("#34006B"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 1.54 && dataArray[0].toFloat() < 1.65){
                updateColor(QColor("#380061"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 1.65 && dataArray[0].toFloat() < 1.76){
                updateColor(QColor("#3C0057"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 1.76 && dataArray[0].toFloat() < 1.87){
                updateColor(QColor("#40004C"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 1.87 && dataArray[0].toFloat() < 1.98){
                updateColor(QColor("#440042"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 1.98 && dataArray[0].toFloat() < 2.09){
                updateColor(QColor("#480037"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 2.09 && dataArray[0].toFloat() < 2.20){
                updateColor(QColor("#4C002D"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 2.20 && dataArray[0].toFloat() < 2.31){
                updateColor(QColor("#500022"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 2.31 && dataArray[0].toFloat() < 2.42){
                updateColor(QColor("#540017"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 2.42 && dataArray[0].toFloat() < 2.53){
                updateColor(QColor("#58000C"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 2.53 && dataArray[0].toFloat() < 2.64){
                updateColor(QColor("#5C0000"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 2.64 && dataArray[0].toFloat() < 2.75){
                updateColor(QColor("#600000"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 2.75 && dataArray[0].toFloat() < 2.86){
                updateColor(QColor("#660000"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 2.86 && dataArray[0].toFloat() < 2.97){
                updateColor(QColor("#6A0000"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 2.97 && dataArray[0].toFloat() < 3.08){
                updateColor(QColor("#700000"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 3.08 && dataArray[0].toFloat() < 3.19){
                updateColor(QColor("#740000"));
                updateText(dataArray[0]);
            }
            if(dataArray[0].toFloat() >= 3.19){
                updateColor(QColor("#FF0000"));
                updateText(dataArray[0]);
            }

            Data_From_MCU = "";
            Is_Data_Received = false;
        }
    }
}

void MainWindow::updateColor(const QColor &newColor)
{
    if (colorChanger) {
        colorChanger->setColor(newColor);
    }
}

void MainWindow::updateText(const QString &newText)
{
    if (colorChanger) {
        colorChanger->setText(newText);
    }
}

QStringList MainWindow::get_values_adc(QString string)
{
    QStringList aux;
    aux = string.split(" ");
    aux.removeLast();
    return aux;
}
