#include "mainwindow.h"
#include "bike.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Bike b;
    b.show();
    return a.exec();
}
