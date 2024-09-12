#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QSerialPort>
#include "colorchanger.h"

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

    double dataPression = 0;

private slots:
    void on_connect_port_clicked();

    void on_disconnect_port_clicked();

    void Read_Data_Sensors();

    QStringList get_values_adc(QString string);

    void updateColor(const QColor &newColor);

    void updateText(const QString &text);


private:
    Ui::MainWindow *ui;
    QSerialPort* ttyACM;
    QString Data_From_MCU;
    bool Is_Data_Received;
    ColorChanger *colorChanger;
};
#endif // MAINWINDOW_H
