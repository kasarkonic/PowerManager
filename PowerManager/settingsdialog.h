#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H


#include <QDialog>
#include "global.h"
#include "serialsettingsdialog.h"

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(Global& global, QDialog *parent = nullptr);
    ~SettingsDialog();

private slots:
    void on_portSettings_pushButton_clicked(bool checked);
    void on_connect_pushButton_clicked(bool checked);

    void on_port_lineEdit_editingFinished();

private:
    Global& global;
    Ui::SettingsDialog *ui;
    SerialSettingsdialog serialSettingsdialog;
    void setStatusbar(QString mes);

};

#endif // SETTINGSDIALOG_H
