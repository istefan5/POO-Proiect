#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QtSql>
#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include <QObject>

class MyThread : public QThread
{
    Q_OBJECT
public:

    QSqlDatabase  db;
   explicit MyThread(qintptr ID,QObject *parent =nullptr):QThread(parent)
    {
        this->socketDescriptor = ID;

    }
    void logIn(QString user,QString pas);
    void Register(QString user,QString pas);
    void run();

signals:
    //void error(QTcpSocket::SocketError socketerror);

public slots:
    void readyRead();
    void disconnected();

public slots:

private:

    QTcpSocket *socket;
    qintptr socketDescriptor;
};

#endif // MYTHREAD_H
