//#include "mainwindow.h"
#include <QTcpSocket>
#include <QApplication>
#include "meniu.h"
#include<QMessageBox>
#include <QApplication>
#include <QFile>
#include "mwsingleton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTcpSocket *socket=new QTcpSocket();
    socket->connectToHost("192.168.203.81",1234);

    if(socket->waitForConnected(3000))
    {
         qDebug()<<"Connected...";
    }
    else
    {

      qDebug()<<"Connection to server failed...";
          QMessageBox msg;
          msg.setIcon(QMessageBox::Critical);
          msg.setText("\n\tConexiunea cu serverul a esuat!\t\n");
          msg.setInformativeText("Aplicatia se va inchide. Apasati butonul.");
          msg.setStandardButtons(QMessageBox::Close);
          msg.setDefaultButton(QMessageBox::Close);

          msg.exec();
          exit(0);

    }


 //socket->state() != QAbstractSocket::ConnectedState

          QFile styleSheetFile("C:/Users/barbu/Desktop/ClientFinal/Irrorater.qss");
          styleSheetFile.open(QFile::ReadOnly);
          QString styleSheet=QLatin1String(styleSheetFile.readAll());
          qApp->setStyleSheet(styleSheet);


          MainWindow w(socket,socket->socketDescriptor());
          w.show();


    return a.exec();
}
