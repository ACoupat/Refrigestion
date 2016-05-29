#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Q_INIT_RESOURCE(ressources);
    QFile styleSheet(":/style.qss");
    styleSheet.open(QFile::ReadOnly);
    a.setStyleSheet(styleSheet.readAll());
    MainWindow w;
    w.show();

    return a.exec();
}
