#include "mainwindow.h"
#include "secondwindow.h"
#include "thirdwindow.h"
#include "fourwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    return a.exec();
}
