#ifndef SERIALSETTINGSDIALOG_H
#define SERIALSETTINGSDIALOG_H

#include <QWidget>
#include <QtSerialBus/qtserialbusglobal.h>
#include <QSerialPort>
#include "global.h"
#include <QMainWindow>

namespace Ui {
class SerialSettingsdialog;
}

class SerialSettingsdialog : public QWidget
{
    Q_OBJECT

public:
    explicit SerialSettingsdialog(Global& global, QWidget *parent = nullptr);
    ~SerialSettingsdialog();

    struct Settings {
        int parity = QSerialPort::EvenParity;
        int baud = QSerialPort::Baud19200;
        int dataBits = QSerialPort::Data8;
        int stopBits = QSerialPort::OneStop;

        int responseTime = 1000;
        int numberOfRetries = 3;
    };

private:
    Ui::SerialSettingsdialog *ui;
    Global& global;
    void initSettings();
};

#endif // SERIALSETTINGSDIALOG_H
