    #include "mythread.h"
    #include "Protocol.h"

    void MyThread::run(){

        qDebug() << "Starting thread";
        socket = new QTcpSocket();
        if(!socket->setSocketDescriptor(this->socketDescriptor)){
            qDebug() << "There was a problem connecting";
            return;
        }
        connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
        connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()), Qt::DirectConnection);
        qDebug() << socketDescriptor << " Client connected";

        exec();
    }

    void MyThread::readyRead()
    {   
        
       
        QByteArray Data=socket->readAll();
            QList l=Data.split('|');
            Protocol* prot;

       if (l.value(0).toStdString() == "1")
                prot = Factory_protocol::Create_LogInProtocol(QString(l.value(1)), QString(l.value(2)));
               
           
       else if (l.value(0).toStdString() == "2")
                prot = Factory_protocol::Create_RegisterProtocol(QString(l.value(1)), QString(l.value(2)), QString(l.value(3)));

        else if(l.value(0).toStdString()=="3")
                prot=Factory_protocol::Create_ShowProtocol("1");


        else if(l.value(0).toStdString()=="4")
                 prot=Factory_protocol::Create_ShowProtocol("2");


        else if(l.value(0).toStdString()=="5")
                 prot=Factory_protocol::Create_ShowProtocol("3");


        else if(l.value(0).toStdString()=="6")
                prot=Factory_protocol::Create_DetailsProtocol(QString(l.value((1))));


        else if(l.value(0).toStdString()=="7")
                prot=Factory_protocol::Create_ShowFavProtocol(QString(l.value(1)));


        else if(l.value(0).toStdString()=="8")
                prot=Factory_protocol::Create_AddFavProtocol(QString(l.value(1)),QString(l.value(2)));

        else if(l.value(0).toStdString()=="9")
                prot=Factory_protocol::Create_BuyProtocol(QString(l.value(1)),QString(l.value(2)));

        else if(l.value(0).toStdString()=="10")
                prot=Factory_protocol::Create_ShowTicketsProtocol(QString(l.value(1)));

        else if(l.value(0).toStdString()=="11")

             prot=Factory_protocol::Create_UnmarkFavProtocol(QString(l.value(1)),QString(l.value(2)));

        else if(l.value(0).toStdString()=="12")
             prot=Factory_protocol::Create_ShowNotificationsProtocol(QString(l.value(1)));


        else if(l.value(0).toStdString()=="13")
                prot=Factory_protocol::Create_ShowStatsProtocol();

       else if(l.value(0).toStdString()=="14")
                prot=Factory_protocol::Create_AdminLogProtocol(QString(l.value(1)));


       else if(l.value(0).toStdString()=="15")
                prot=Factory_protocol::Create_AddEventProtocol(QString(l.value(1)),QString(l.value(2)),QString(l.value(3)),QString(l.value(4)),QString(l.value((5))));


       else if(l.value(0).toStdString()=="16")
                prot=Factory_protocol::Create_UpdateProtocol(QString(l.value((1))),QString(l.value((2))));




       socket->write(prot->getMessage().toUtf8());
    }


    void MyThread::ForgotPassword(QString user,QString email)
    {
        qDebug()<<user+email;
        db.open();
        QSqlQuery qry;
        qry.exec("SELECT * FROM [EventsApp].[dbo].[Users]");

        while(qry.next())
            {

             if(user==qry.value(1).toString()&&email==qry.value(3).toString())
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

