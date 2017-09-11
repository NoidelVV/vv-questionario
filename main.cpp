#include "mainwindow.h"
#include <QApplication>
#include <QLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowState(Qt::WindowFullScreen);
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    w.centralWidget()->layout()->setContentsMargins(0,0,0,0);
    w.show();
    return a.exec();
}
