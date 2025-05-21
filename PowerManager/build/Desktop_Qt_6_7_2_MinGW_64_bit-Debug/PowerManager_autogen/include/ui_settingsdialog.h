/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *comportSettingsLabel;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *connectionTypeLabel;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *connectionTypeComBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelPort;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *portLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *serverAddressLabel;
    QSpinBox *serverAddressSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *serialparametersPushButton;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->resize(760, 417);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comportSettingsLabel = new QLabel(SettingsDialog);
        comportSettingsLabel->setObjectName("comportSettingsLabel");

        horizontalLayout->addWidget(comportSettingsLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        connectionTypeLabel = new QLabel(SettingsDialog);
        connectionTypeLabel->setObjectName("connectionTypeLabel");

        horizontalLayout_5->addWidget(connectionTypeLabel);


        horizontalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        connectionTypeComBox = new QComboBox(SettingsDialog);
        connectionTypeComBox->setObjectName("connectionTypeComBox");

        horizontalLayout_9->addWidget(connectionTypeComBox);


        horizontalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        labelPort = new QLabel(SettingsDialog);
        labelPort->setObjectName("labelPort");

        horizontalLayout_8->addWidget(labelPort);


        horizontalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        portLineEdit = new QLineEdit(SettingsDialog);
        portLineEdit->setObjectName("portLineEdit");

        horizontalLayout_7->addWidget(portLineEdit);


        horizontalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        serverAddressLabel = new QLabel(SettingsDialog);
        serverAddressLabel->setObjectName("serverAddressLabel");

        horizontalLayout_6->addWidget(serverAddressLabel);


        horizontalLayout_2->addLayout(horizontalLayout_6);

        serverAddressSpinBox = new QSpinBox(SettingsDialog);
        serverAddressSpinBox->setObjectName("serverAddressSpinBox");

        horizontalLayout_2->addWidget(serverAddressSpinBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        horizontalLayout_2->addLayout(horizontalLayout_3);

        serialparametersPushButton = new QPushButton(SettingsDialog);
        serialparametersPushButton->setObjectName("serialparametersPushButton");

        horizontalLayout_2->addWidget(serialparametersPushButton);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");

        horizontalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");

        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QWidget *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Form", nullptr));
        comportSettingsLabel->setText(QCoreApplication::translate("SettingsDialog", "Com port and Modbuss settings", nullptr));
        connectionTypeLabel->setText(QCoreApplication::translate("SettingsDialog", "Connection type", nullptr));
        labelPort->setText(QCoreApplication::translate("SettingsDialog", "Port", nullptr));
        serverAddressLabel->setText(QCoreApplication::translate("SettingsDialog", "Server address", nullptr));
        serialparametersPushButton->setText(QCoreApplication::translate("SettingsDialog", "Serial parameters", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
