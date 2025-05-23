#include "settingsdialog.h"
#include "ui_settingsdialog.h"


SettingsDialog::SettingsDialog(Global& global, QDialog *parent)
    : QDialog(parent)
    , global(global)
    , ui(new Ui::SettingsDialog)
    , serialSettingsdialog(global)
{
    ui->setupUi(this);


    this->move(200,200);
    this->resize(500, 500);


    QPalette pal = QPalette();
    pal.setColor(QPalette::Window, global.backgroundColor); //QColor(255, 0, 0, 127)
    //pal.setColor(QPalette::Window, QColor(242, 219, 238, 0.251));
    this->setAutoFillBackground(true);
    this->setPalette(pal);


    ui->port_lineEdit->setToolTip(tr("For serial connection enter COM port name\n"
                                "(eg. COM1, ttyS0, etc).\n"
                                "For TCP connection enter\n<ip address>:<port> pair."));




}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

void SettingsDialog::on_portSettings_pushButton_clicked(bool checked)
{
    serialSettingsdialog.show();
}


void SettingsDialog::on_connect_pushButton_clicked(bool checked)
{
    setStatusbar("");   // clear
}

void SettingsDialog::setStatusbar(QString mes)
{
    ui->statusBar_label->setText(mes);
}


void SettingsDialog::on_port_lineEdit_editingFinished()
{
    global.settings.port = ui->port_lineEdit->text();
}

