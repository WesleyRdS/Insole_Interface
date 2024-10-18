#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define ADC_RAW_TO_VOLTAGE  0.00005035477f
#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QSerialPort>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double tempo = 0;
    double dataPression[16];
    void plot();
    int sensorSelected = 0;
    double now = 0;
    double maxRangeX = 10;

private slots:
    void on_connect_port_clicked();

    void on_disconnect_port_clicked();

    void Read_Data_Sensors();

    QStringList get_values_adc(QString string);

    void on_sb_changeSensor_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    QSerialPort* ttyACM;
    QString Data_From_MCU;
    bool Is_Data_Received;

    QVector<double> qv_x, qv_y0,
        qv_y1,qv_y2,qv_y3,qv_y4,qv_y5,qv_y6,
        qv_y7,qv_y8,qv_y9,qv_y10,qv_y11,qv_y12,
        qv_y13,qv_y14,qv_y15;
};
#endif // MAINWINDOW_H
