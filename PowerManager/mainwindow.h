#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settingsdialog.h"
#include "global.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Global& global, QWidget *parent = nullptr);
    ~MainWindow();
   // SettingsDialog settingsDialog;

private slots:
    void on_comboBox_currentIndexChanged(int index);

private:
    Global& global;
    Ui::MainWindow *ui;
    SettingsDialog settingsDialog;
    void initSettings();
};
#endif // MAINWINDOW_H
