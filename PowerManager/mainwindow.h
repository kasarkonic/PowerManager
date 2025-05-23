#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settingsdialog.h"
#include "global.h"
#include "modbusmanager.h"



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
  //  void setStatusbarWin(QString mes,int time = 0);


   void statusbar();

private slots:
    void on_comboBox_currentIndexChanged(int index);
    void setStatusbarWin(QString mes, int time);



private:
    Global& global;
    Ui::MainWindow *ui;
    SettingsDialog settingsDialog;
    ModbusManager modbusManager;
    void initSettings();

};
#endif // MAINWINDOW_H
