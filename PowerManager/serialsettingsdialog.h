#ifndef SERIALSETTINGSDIALOG_H
#define SERIALSETTINGSDIALOG_H

#include <QWidget>

namespace Ui {
class SerialSettingsdialog;
}

class SerialSettingsdialog : public QWidget
{
    Q_OBJECT

public:
    explicit SerialSettingsdialog(QWidget *parent = nullptr);
    ~SerialSettingsdialog();

private:
    Ui::SerialSettingsdialog *ui;
};

#endif // SERIALSETTINGSDIALOG_H
