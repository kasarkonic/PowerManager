#include "serialsettingsdialog.h"
#include "ui_serialsettingsdialog.h"

SerialSettingsdialog::SerialSettingsdialog(Global& global, QDialog *parent)
    : QDialog(parent)
    , global(global)
    , ui(new Ui::SerialSettingsdialog)
{
    ui->setupUi(this);

    this->move(200,200);
    this->resize(300, 300);

    QPalette pal = QPalette();
    pal.setColor(QPalette::Window, global.backgroundColor); //QColor(255, 0, 0, 127)
    //pal.setColor(QPalette::Window, QColor(242, 219, 238, 0.251));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    initSettings();
}

SerialSettingsdialog::~SerialSettingsdialog()
{
    delete ui;
}

void SerialSettingsdialog::initSettings()
{
    QList<QString> parytyStringsList;
    parytyStringsList.append("No"); // 0
    parytyStringsList.append("Even");   // 2 !!!!!!!!
    parytyStringsList.append("Odd");
    parytyStringsList.append("Space");
    parytyStringsList.append("Mark");
    ui->parityComboBox->addItems(parytyStringsList);
    ui->parityComboBox->setCurrentIndex(1);

    /*
            if (parity > 0)
            parity++;
     */

    QList<QString> baudStringsList;
    baudStringsList.append("1200");
    baudStringsList.append("2400");
    baudStringsList.append("4800");
    baudStringsList.append("9600");
    baudStringsList.append("19200");
    baudStringsList.append("38400");
    baudStringsList.append("57600");
    baudStringsList.append("115200");
    ui->baudRateComboBox->addItems(baudStringsList);
    ui->baudRateComboBox->setCurrentIndex(3);

    QList<QString> dataStringsList;
    dataStringsList.append("5");
    dataStringsList.append("6");
    dataStringsList.append("7");
    dataStringsList.append("8");
    ui->dataBitsComb->addItems(dataStringsList);
    ui->dataBitsComb->setCurrentIndex(3);

    QList<QString> stopStringsList;
    stopStringsList.append("1");
    stopStringsList.append("3");
    stopStringsList.append("2");
    ui->stopBitsComboBox->addItems(stopStringsList);
    ui->stopBitsComboBox->setCurrentIndex(0);

    ui->responseTimeouSpinBox->setValue(global.settings.responseTime);
    ui->numbOfEntrySpinBox->setValue(global.settings.numberOfRetries);

}

void SerialSettingsdialog::on_applayPushButton_clicked(bool checked)
{

    global.settings.parity = ui->parityComboBox->currentIndex();
    if (global.settings.parity > 0) {
        global.settings.parity++;      // missing "1"
    }
    global.settings.baud = ui->baudRateComboBox->currentIndex();
    global.settings.dataBits = ui->dataBitsComb->currentIndex();
    global.settings.stopBits = ui->stopBitsComboBox->currentIndex();
    global.settings.responseTime = ui->responseTimeouSpinBox->value();
    global.settings.numberOfRetries = ui->numbOfEntrySpinBox->value();


    qDebug() << "Index of \n" <<  "   parity: " << global.settings.parity
    << ",\n  baud: " << global.settings.baud
    << ",\n   dataBits: " << global.settings.dataBits
    << ",\n  stopBits: " << global.settings.stopBits
    << ",\n  responseTime: " << global.settings.responseTime
     << "nS,\n  numberOfRetries: " << global.settings.numberOfRetries;

    this->hide();
}

/*

    enum BaudRate {
        Baud1200 = 1200,
        Baud2400 = 2400,
        Baud4800 = 4800,
        Baud9600 = 9600,
        Baud19200 = 19200,
        Baud38400 = 38400,
        Baud57600 = 57600,
        Baud115200 = 115200
    };
    Q_ENUM(BaudRate)

    enum DataBits {
        Data5 = 5,
        Data6 = 6,
        Data7 = 7,
        Data8 = 8
    };
    Q_ENUM(DataBits)

    enum Parity {
        NoParity = 0,
        EvenParity = 2,
        OddParity = 3,
        SpaceParity = 4,
        MarkParity = 5
    };
    Q_ENUM(Parity)

    enum StopBits {
        OneStop = 1,
        OneAndHalfStop = 3,
        TwoStop = 2
    };
    Q_ENUM(StopBits)



 */
