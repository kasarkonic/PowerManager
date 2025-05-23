#ifndef SERIALSETTINGSDIALOG_H
#define SERIALSETTINGSDIALOG_H

#include <QDialog>
#include <QtSerialBus/qtserialbusglobal.h>
#include <QSerialPort>
#include "global.h"

namespace Ui {
class SerialSettingsdialog;
}

class SerialSettingsdialog : public QDialog
{
    Q_OBJECT

public:
    explicit SerialSettingsdialog(Global& global, QDialog *parent = nullptr);
    ~SerialSettingsdialog();

private slots:
    void on_applayPushButton_clicked(bool checked);

private:
    Ui::SerialSettingsdialog *ui;
    Global& global;
    void initSettings();
};

#endif // SERIALSETTINGSDIALOG_H
