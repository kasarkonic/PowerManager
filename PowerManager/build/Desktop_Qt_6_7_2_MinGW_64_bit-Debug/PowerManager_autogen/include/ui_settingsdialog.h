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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *connectType_comboBox;
    QLabel *label_4;
    QLineEdit *port_lineEdit;
    QPushButton *portSettings_pushButton;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer;
    QFrame *line_3;
    QLabel *label_5;
    QSpinBox *serverAddres_spinBox;
    QPushButton *connect_pushButton;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *statusBar_label;

    void setupUi(QWidget *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->resize(750, 357);
        verticalLayout_3 = new QVBoxLayout(SettingsDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_3 = new QLabel(SettingsDialog);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_3);


        verticalLayout->addLayout(verticalLayout_4);

        line_4 = new QFrame(SettingsDialog);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(SettingsDialog);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        connectType_comboBox = new QComboBox(SettingsDialog);
        connectType_comboBox->setObjectName("connectType_comboBox");

        horizontalLayout->addWidget(connectType_comboBox);

        label_4 = new QLabel(SettingsDialog);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        port_lineEdit = new QLineEdit(SettingsDialog);
        port_lineEdit->setObjectName("port_lineEdit");

        horizontalLayout->addWidget(port_lineEdit);

        portSettings_pushButton = new QPushButton(SettingsDialog);
        portSettings_pushButton->setObjectName("portSettings_pushButton");

        horizontalLayout->addWidget(portSettings_pushButton);

        line_2 = new QFrame(SettingsDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        line_3 = new QFrame(SettingsDialog);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line_3);

        label_5 = new QLabel(SettingsDialog);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        serverAddres_spinBox = new QSpinBox(SettingsDialog);
        serverAddres_spinBox->setObjectName("serverAddres_spinBox");

        horizontalLayout->addWidget(serverAddres_spinBox);

        connect_pushButton = new QPushButton(SettingsDialog);
        connect_pushButton->setObjectName("connect_pushButton");

        horizontalLayout->addWidget(connect_pushButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        line = new QFrame(SettingsDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(SettingsDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        statusBar_label = new QLabel(SettingsDialog);
        statusBar_label->setObjectName("statusBar_label");

        verticalLayout_5->addWidget(statusBar_label);


        verticalLayout_2->addLayout(verticalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QWidget *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsDialog", "Connection type", nullptr));
        label_4->setText(QCoreApplication::translate("SettingsDialog", "Port", nullptr));
        portSettings_pushButton->setText(QCoreApplication::translate("SettingsDialog", "Port Settings", nullptr));
        label_5->setText(QCoreApplication::translate("SettingsDialog", "Server Address:", nullptr));
        connect_pushButton->setText(QCoreApplication::translate("SettingsDialog", "Connect", nullptr));
        label->setText(QCoreApplication::translate("SettingsDialog", "Other settings:", nullptr));
        statusBar_label->setText(QCoreApplication::translate("SettingsDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
