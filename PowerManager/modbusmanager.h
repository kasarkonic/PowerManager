#ifndef MODBUSMANAGER_H
#define MODBUSMANAGER_H

#include "global.h"
#include <QModbusDataUnit>
#include <QModbusClient>
#include <qmainwindow.h>
#include <QObject>


class QModbusClient;

class ModbusManager : public QObject
{
        Q_OBJECT
public:
        ModbusManager(Global& global );

    void createconnection();

  //  QModbusDataUnit MainWindow::writeRequest() const
  //  QModbusDataUnit MainWindow::readRequest() const
  //  void MainWindow::onReadWriteButtonClicked()   ???
  //  void MainWindow::onWriteButtonClicked() ///
  //  MainWindow::onReadReady() ???

signals:
    void statusbarWinSign(QString mes,int time);  // Declaring a signal

private:
    Global& global;
    QModbusClient *modbusDevice = nullptr;
};

#endif // MODBUSMANAGER_H
