#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Q_INIT_RESOURCE(ressources);
    MainWindow w;
    w.show();

    return a.exec();
}
