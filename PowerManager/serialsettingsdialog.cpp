#include "serialsettingsdialog.h"
#include "ui_serialsettingsdialog.h"

SerialSettingsdialog::SerialSettingsdialog(Global& global, QWidget *parent)
    : QWidget(parent)
    , global(global)
    , ui(new Ui::SerialSettingsdialog)
{
    ui->setupUi(this);
    initSettings();
}

SerialSettingsdialog::~SerialSettingsdialog()
{
    delete ui;
}

void SerialSettingsdialog::initSettings()
{
    this->move(100,100);
    this->resize(300, 300);
}
