#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QWidget>
#include <QMainWindow>
#include "global.h"

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QWidget
{
    Q_OBJECT

public:
    explicit SettingsDialog(Global& global, QWidget *parent = nullptr);
    ~SettingsDialog();

private:
    Global& global;
    Ui::SettingsDialog *ui;

};

#endif // SETTINGSDIALOG_H
