#include "myserver.h"

MyServer *MyServer::Sinst = nullptr;

MyServer::MyServer(QObject *parent):
    QTcpServer(parent)
{

}

MyServer &MyServer::getInstance()
{
    if(!MyServer::Sinst)
    {
        MyServer::Sinst=new MyServer();
    }
    return *MyServer::Sinst;

}
void MyServer::destroyInstance()
{
    if(MyServer::Sinst)
    {
        delete MyServer::Sinst;
        MyServer::Sinst=nullptr;
    }

}
void MyServer::StartServer()
{
    if(!this->listen(QHostAddress::Any,1234))
    {
        qDebug()<<"Could not start server";
    }
    else
    {
        qDebug()<<"Listening...";
    }
}
void MyServer::incomingConnection(qintptr socketDescriptor)
{
    qDebug()<<socketDescriptor<<" Connecting...";
    MyThread *thread=new MyThread(socketDescriptor,this);
    connect(thread,SIGNAL(finished()),thread,SLOT(deleteLater()));
    thread->start();
}
