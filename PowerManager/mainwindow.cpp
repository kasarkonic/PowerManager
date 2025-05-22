#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QModbusTcpClient>
#include <QModbusRtuSerialClient>
#include <QSerialPortInfo>
#include "global.h"


MainWindow::MainWindow(Global& global, QWidget *parent)
    : QMainWindow(parent)
    , global(global)
    , ui(new Ui::MainWindow)
    , settingsDialog(global, this)
{
    ui->setupUi(this);
    initSettings();
}

MainWindow::~MainWindow()
{
    delete ui;
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

