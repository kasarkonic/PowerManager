#include "modbusmanager.h"

ModbusManager::ModbusManager(Global& global)
    : QObject()
    , global(global)
{
    //QString str = tr("????????????: %1").arg(modbusDevice->errorString());
    qDebug() <<  "==========";
    emit statusbarWinSign("str", 5000);
}

void ModbusManager::createconnection()
{
    if (!modbusDevice)
        return;

    if (modbusDevice->state() != QModbusDevice::ConnectedState) {
        //! [create_client_1]
       // const auto settings = m_settingsDialog->settings();
        if (global.settings.modbusConnection == Global::Serial) {
            modbusDevice->setConnectionParameter(QModbusDevice::SerialPortNameParameter,
                                                 global.settings.port);
#if QT_CONFIG(modbus_serialport)
            modbusDevice->setConnectionParameter(QModbusDevice::SerialParityParameter,
                                                 global.settings.parity);
            modbusDevice->setConnectionParameter(QModbusDevice::SerialBaudRateParameter,
                                                 global.settings.baud);
            modbusDevice->setConnectionParameter(QModbusDevice::SerialDataBitsParameter,
                                                 global.settings.dataBits);
            modbusDevice->setConnectionParameter(QModbusDevice::SerialStopBitsParameter,
                                                 global.settings.stopBits);
#endif
        } else {
        //    const QUrl url = QUrl::fromUserInput(ui->portEdit->text());
        //    modbusDevice->setConnectionParameter(QModbusDevice::NetworkPortParameter, url.port());
        //    modbusDevice->setConnectionParameter(QModbusDevice::NetworkAddressParameter, url.host());
        }
        modbusDevice->setTimeout(global.settings.responseTime);
        modbusDevice->setNumberOfRetries(global.settings.numberOfRetries);
        //! [create_client_1]
        if (!modbusDevice->connectDevice()) {

            QString str = tr("Connect failed: %1").arg(modbusDevice->errorString());
             emit statusbarWinSign("str", 5000);
            // uz ekrāna vajadzētu kādu ikonion/off ????
            //ui->actionConnect->setEnabled(false);
            //ui->actionDisconnect->setEnabled(true);
        }
    } else {
        modbusDevice->disconnectDevice();

        // uz ekrāna vajadzētu kādu ikonion/off ????
        //ui->actionConnect->setEnabled(true);
        //ui->actionDisconnect->setEnabled(false);
    }






}
