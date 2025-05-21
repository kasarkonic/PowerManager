#include "serialsettingsdialog.h"
#include "ui_serialsettingsdialog.h"

SerialSettingsdialog::SerialSettingsdialog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SerialSettingsdialog)
{
    ui->setupUi(this);
}

SerialSettingsdialog::~SerialSettingsdialog()
{
    delete ui;
}
