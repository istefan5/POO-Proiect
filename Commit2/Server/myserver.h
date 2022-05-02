#ifndef MYSERVER_H
#define MYSERVER_H
#include <QtSql>
#include <QTcpServer>
#include <QDebug>
#include "mythread.h"

class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    QSqlDatabase db;
    explicit MyServer(QObject *parent =0);
    void StartServer();
signals:

public slots:


protected:
    void incomingConnection(qintptr socketDescriptor);

};

#endif // MYSERVER_H
