#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "modbusmanager.h"
#include <QModbusTcpClient>
#include <QModbusRtuSerialClient>
#include <QSerialPortInfo>
#include "global.h"
#include <QString>



MainWindow::MainWindow(Global& global, QWidget *parent)
    : QMainWindow(parent)
    , global(global)
    , ui(new Ui::MainWindow)
    , settingsDialog(global)
    , modbusManager(global)
{
    connect(&modbusManager, &ModbusManager::statusbarWinSign, this, &MainWindow::setStatusbarWin );



    ui->setupUi(this);
 //   setStatusbarWin("Start system inicialisation.", 5000);
    initSettings();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setStatusbarWin(QString mes, int time)
{
    qDebug() <<  "=====================";
ui->statusbar->showMessage(mes,time);
}

void MainWindow::initSettings()
{
    QPalette pal = QPalette();
    pal.setColor(QPalette::Window, global.backgroundColor);
    this->setAutoFillBackground(true);
    this->setPalette(pal);

    ui->comboBox->addItem("Menu");
    ui->comboBox->addItem("Settings");
    ui->comboBox->addItem("???");
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    qDebug() << "combobox:" << index;
    switch (index) {
    case 0:
        settingsDialog.hide();
        break;
    case 1:
        settingsDialog.show();
        break;
    default:
        break;
    }
}

