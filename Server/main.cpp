#include <QtCore/QCoreApplication>
#include <QtSql>
#include <QtDebug>
#include "myserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    MyServer &Server=MyServer::getInstance();
    Server.StartServer();


    return a.exec();
}
