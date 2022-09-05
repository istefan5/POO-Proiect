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
    static MyServer &getInstance();
    static void destroyInstance();
    void StartServer();
signals:

public slots:


protected:
    void incomingConnection(qintptr socketDescriptor);
private:
    static MyServer *Sinst;
    explicit MyServer(QObject *parent =0);
    ~MyServer() {};
};
#endif
