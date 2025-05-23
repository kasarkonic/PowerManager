#ifndef GLOBAL_H
#define GLOBAL_H

#include <QColor>
#include <Qdebug>
#include <QSerialPort>
#include <QVariant>
#include <QString>

class Global
{
public:
    Global();
    QColor  backgroundColor;

// Serial and Modbus settings
    enum ModbusConnection {
        Serial,
        Tcp
    };

    struct Settings {
        int parity = QSerialPort::EvenParity;
        int baud = QSerialPort::Baud19200;
        int dataBits = QSerialPort::Data8;
        int stopBits = QSerialPort::OneStop;
        QVariant port = "COM1";
        int responseTime = 1000;
        int numberOfRetries = 3;
        int modbusConnection = Serial;
    }settings;
    Settings serialSettings();


};

#endif // GLOBAL_H
