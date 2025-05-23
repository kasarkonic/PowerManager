/********************************************************************************
** Form generated from reading UI file 'serialsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALSETTINGSDIALOG_H
#define UI_SERIALSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialSettingsdialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *parityLabel;
    QComboBox *baudRateComboBox;
    QLabel *baudRateLabel;
    QComboBox *stopBitsComboBox;
    QComboBox *parityComboBox;
    QLabel *staopBitsLabel;
    QLabel *dataBitsLabel;
    QComboBox *dataBitsComb;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QSpinBox *responseTimeouSpinBox;
    QLabel *responseTimeoutLabel;
    QSpinBox *numbOfEntrySpinBox;
    QPushButton *applayPushButton;
    QLabel *NumbOfEntryLabel;

    void setupUi(QWidget *SerialSettingsdialog)
    {
        if (SerialSettingsdialog->objectName().isEmpty())
            SerialSettingsdialog->setObjectName("SerialSettingsdialog");
        SerialSettingsdialog->resize(258, 367);
        gridLayout_3 = new QGridLayout(SerialSettingsdialog);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(SerialSettingsdialog);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        parityLabel = new QLabel(groupBox);
        parityLabel->setObjectName("parityLabel");

        gridLayout_2->addWidget(parityLabel, 0, 0, 1, 1);

        baudRateComboBox = new QComboBox(groupBox);
        baudRateComboBox->setObjectName("baudRateComboBox");

        gridLayout_2->addWidget(baudRateComboBox, 1, 1, 1, 1);

        baudRateLabel = new QLabel(groupBox);
        baudRateLabel->setObjectName("baudRateLabel");

        gridLayout_2->addWidget(baudRateLabel, 1, 0, 1, 1);

        stopBitsComboBox = new QComboBox(groupBox);
        stopBitsComboBox->setObjectName("stopBitsComboBox");

        gridLayout_2->addWidget(stopBitsComboBox, 3, 1, 1, 1);

        parityComboBox = new QComboBox(groupBox);
        parityComboBox->setObjectName("parityComboBox");

        gridLayout_2->addWidget(parityComboBox, 0, 1, 1, 1);

        staopBitsLabel = new QLabel(groupBox);
        staopBitsLabel->setObjectName("staopBitsLabel");

        gridLayout_2->addWidget(staopBitsLabel, 3, 0, 1, 1);

        dataBitsLabel = new QLabel(groupBox);
        dataBitsLabel->setObjectName("dataBitsLabel");

        gridLayout_2->addWidget(dataBitsLabel, 2, 0, 1, 1);

        dataBitsComb = new QComboBox(groupBox);
        dataBitsComb->setObjectName("dataBitsComb");

        gridLayout_2->addWidget(dataBitsComb, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(SerialSettingsdialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName("gridLayout_4");
        responseTimeouSpinBox = new QSpinBox(groupBox_2);
        responseTimeouSpinBox->setObjectName("responseTimeouSpinBox");
        responseTimeouSpinBox->setMinimum(-1);
        responseTimeouSpinBox->setMaximum(5000);

        gridLayout_4->addWidget(responseTimeouSpinBox, 0, 1, 1, 1);

        responseTimeoutLabel = new QLabel(groupBox_2);
        responseTimeoutLabel->setObjectName("responseTimeoutLabel");

        gridLayout_4->addWidget(responseTimeoutLabel, 0, 0, 1, 1);

        numbOfEntrySpinBox = new QSpinBox(groupBox_2);
        numbOfEntrySpinBox->setObjectName("numbOfEntrySpinBox");

        gridLayout_4->addWidget(numbOfEntrySpinBox, 1, 1, 1, 1);

        applayPushButton = new QPushButton(groupBox_2);
        applayPushButton->setObjectName("applayPushButton");

        gridLayout_4->addWidget(applayPushButton, 2, 1, 1, 1);

        NumbOfEntryLabel = new QLabel(groupBox_2);
        NumbOfEntryLabel->setObjectName("NumbOfEntryLabel");

        gridLayout_4->addWidget(NumbOfEntryLabel, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(SerialSettingsdialog);

        QMetaObject::connectSlotsByName(SerialSettingsdialog);
    } // setupUi

    void retranslateUi(QWidget *SerialSettingsdialog)
    {
        SerialSettingsdialog->setWindowTitle(QCoreApplication::translate("SerialSettingsdialog", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SerialSettingsdialog", "Serial Parameters", nullptr));
        parityLabel->setText(QCoreApplication::translate("SerialSettingsdialog", "Parity:", nullptr));
        baudRateLabel->setText(QCoreApplication::translate("SerialSettingsdialog", "Baud Rate:", nullptr));
        staopBitsLabel->setText(QCoreApplication::translate("SerialSettingsdialog", "Stop Bits:", nullptr));
        dataBitsLabel->setText(QCoreApplication::translate("SerialSettingsdialog", "Data Bits:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SerialSettingsdialog", "Modbus Parameters", nullptr));
        responseTimeoutLabel->setText(QCoreApplication::translate("SerialSettingsdialog", "Resoins Timeout", nullptr));
        applayPushButton->setText(QCoreApplication::translate("SerialSettingsdialog", "Apply", nullptr));
        NumbOfEntryLabel->setText(QCoreApplication::translate("SerialSettingsdialog", "Number of entries", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialSettingsdialog: public Ui_SerialSettingsdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALSETTINGSDIALOG_H
