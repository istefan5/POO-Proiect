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

    QString servername="LOCALHOST";
         QString dbname="EventsApp";

         db =QSqlDatabase::addDatabase("QODBC");
         db.setConnectOptions();
         QString dsn=QString("DRIVER={SQL Server Native Client 11.0};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;").arg(servername,dbname);
         db.setDatabaseName(dsn);
    exec();
}

void MyThread::readyRead()
{
    QByteArray Data=socket->readAll();
        QList l=Data.split(' ');

    if(l.value(0).toStdString()=="1")
        logIn(QString(l.value(1)),QString(l.value(2)));

    else if(l.value(0).toStdString()=="2")
         Register(QString(l.value(1)),QString(l.value(2)));
}
void MyThread::Register(QString user,QString pas)
{


    db.open();
    QSqlQuery qry;
      QSqlQuery qry2;
    qry.exec("SELECT * FROM [EventsApp].[dbo].[Users]");

    while(qry.next())
        {

         if(user==qry.value(1).toString())
                {
                 socket->write("0");
                 db.close();
                 return;

                }

        }
    socket->write("1");
    QString data="'"+user+"','"+pas+"'";

  qry2.exec("INSERT INTO [EventsApp].[dbo].[Users](Username,Passw) values("+data+")");
    db.close();

}
void MyThread::logIn(QString user,QString pas)
{


    db.open();
    QSqlQuery qry;
    qry.exec("SELECT * FROM [EventsApp].[dbo].[Users]");

    while(qry.next())
        {

         if(user==qry.value(1).toString()&&pas==qry.value(2).toString())
                {
                 socket->write("1");
                 db.close();
                return;

                }

}
    socket->write("0");
    db.close();






}

void MyThread::disconnected()
{
    qDebug()<<socketDescriptor<<" Disconnected";
    socket->deleteLater();
    exit(0);

}
