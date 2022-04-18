#include "mythread.h"



void MyThread::run(){
    //thread starts here
    qDebug() << "Starting thread";
    socket = new QTcpSocket();
    if(!socket->setSocketDescriptor(this->socketDescriptor)){
        qDebug() << "There was a problem connecting";
        return;
    }

    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()),Qt::DirectConnection);
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnected()),Qt::DirectConnection);

    qDebug() << socketDescriptor << " Client connected";

    exec();
}

void MyThread::readyRead()
{
    QByteArray Data=socket->readAll();

    if(Data=="stefan1234")
           {
            socket->write("1");
           }

    else socket->write("0");



}

void MyThread::disconnected()
{
    qDebug()<<socketDescriptor<<" Disconnected";
    socket->deleteLater();
    exit(0);

}
