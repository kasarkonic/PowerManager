#include "mainwindow.h"

#include <QApplication>
#include "global.h"

int main(int argc, char *argv[])
{
    Global global;
    QApplication a(argc, argv);
    MainWindow w(global);
    w.show();
    return a.exec();
}
