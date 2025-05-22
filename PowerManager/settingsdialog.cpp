#include "settingsdialog.h"
#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(Global& global, QWidget *parent)
    : QWidget(parent)
    , global(global)
    , ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
    //hide();

    this->move(200,200);
    this->resize(500, 500);


    QPalette pal = QPalette();
    pal.setColor(QPalette::Window, global.backgroundColor); //QColor(255, 0, 0, 127)
    //pal.setColor(QPalette::Window, QColor(242, 219, 238, 0.251));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}
