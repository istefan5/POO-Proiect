#include "meniu.h"
#include "ui_meniu.h"
#include <QTcpSocket>
#include <QPixmap>
#include <QMessageBox>

Meniu::Meniu(QString user,QTcpSocket *S,qintptr sd,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Meniu)

{    this->username=user;
     this->socket=S;
     this->socketDescriptor=sd;
     connect(this, SIGNAL(logOutMeniu()), this->parentWidget(), SLOT(logOut()));
     ui->setupUi(this);
     ui->stackedWidget->setCurrentIndex(0);


      QPixmap pix("C:/Users/barbu/Desktop/ClientFinal/download");
      int w= ui->label_pic->width();
      int h= ui->label_pic->height();
      ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

      ui->pushButton_Favorit->setDisabled(true);
      ui->pushButton_Defavorite->setDisabled(true);
      ui->pushButton_CumparaBilet->setDisabled(true);
      ui->pushButton_Detalii->setDisabled(true);

}

Meniu::~Meniu()
{
    delete ui;
}



void Meniu::on_pushButton_LogOut_clicked()
{
    emit logOutMeniu();
    delete this;
    //socket->close();
}


void Meniu::on_pushButton_Events_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void Meniu::on_pushButton_BackEvents_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Meniu::on_pushButton_Istoric_clicked()
{
    ui->textBrowser_BileteCumparate->clear();
    ui->textBrowser_EvenimenteFavorite->clear();
    ui->stackedWidget->setCurrentIndex(3);
}


void Meniu::on_pushButton_BackIstoric_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Meniu::on_pushButton_Notificari_clicked()
{

    ui->textBrowser_Noutati->clear();
    ui->textBrowser_Statistici->clear();
    ui->stackedWidget->setCurrentIndex(4);
}


void Meniu::on_pushButton_BackNotificari_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Meniu::on_pushButton_Muzica_clicked()
{

    ui->listWidget_Evenimente->setCurrentRow(-1);
    ui->listWidget_Evenimente->clear();
    ui->textBrowser_Detalii->clear();
    socket->write("3");

    socket->waitForReadyRead();

    QByteArray data=socket->readAll();
    QString info=QString(data);
    qDebug()<<info;
    ui->stackedWidget->setCurrentIndex(2);

    QStringList data1 =info.split('|');
    foreach(QString item,data1)
    {
        ui->listWidget_Evenimente->addItem(item);

    }
}


void Meniu::on_pushButton_Teatru_clicked()
{

    ui->listWidget_Evenimente->setCurrentRow(-1);
    ui->listWidget_Evenimente->clear();
    ui->textBrowser_Detalii->clear();
    socket->write("4");

    socket->waitForReadyRead();

    QByteArray data=socket->readAll();
    QString info=QString(data);
    qDebug()<<info;
    ui->stackedWidget->setCurrentIndex(2);

    QStringList data1 =info.split('|');
    foreach(QString item,data1)
    {
      ui->listWidget_Evenimente->addItem(item);

    }
}


void Meniu::on_pushButton_Sport_clicked()
{

     ui->listWidget_Evenimente->setCurrentRow(-1);
     ui->listWidget_Evenimente->clear();
     ui->textBrowser_Detalii->clear();
     socket->write("5");

     socket->waitForReadyRead();

     QByteArray data=socket->readAll();
     QString info=QString(data);
     qDebug()<<info;
     ui->stackedWidget->setCurrentIndex(2);

     QStringList data1 =info.split('|');
     foreach(QString item,data1)
     {
          ui->listWidget_Evenimente->addItem(item);

     }

}


void Meniu::on_pushButton_Detalii_clicked()
{
    if(ui->listWidget_Evenimente->currentRow()>=0)
     {
        ui->textBrowser_Detalii->clear();
        QString mesaj=("6|");
        mesaj+=ui->listWidget_Evenimente->currentItem()->text();
        socket->write(mesaj.toUtf8());
        socket->waitForReadyRead();
        QByteArray info=socket->readAll();
        QString mesaj1=QString(info);


        qDebug()<<mesaj1;
        QStringList lista=mesaj1.split("|");
        foreach(QString item,lista)
        ui->textBrowser_Detalii->append(item);

    }

}


void Meniu::on_pushButton_Favorit_clicked()
{


    QString mesaj="8|";
    mesaj+=this->username+"|";
    mesaj+=ui->listWidget_Evenimente->currentItem()->text();
    socket->write(mesaj.toUtf8());
    socket->waitForReadyRead();
    if(socket->readAll()=="1")
    {
    QMessageBox::information(this,"Favorit","Adaugat ca favorit");
    }
    else

   { QMessageBox::warning(this,"Favorit","Marcat deja ca favorit");
        qDebug()<<"Marcat deja ca favorit";
   }

}


void Meniu::on_pushButton_CumparaBilet_clicked()
{

    QString mesaj="9|";
    mesaj+=this->username+"|";
    mesaj+=ui->listWidget_Evenimente->currentItem()->text();
    socket->write(mesaj.toUtf8());
    QMessageBox::information(this,"CumparaBilet","Ati cumparat un bilet");
    qDebug()<<"Ati cumparat un bilet";

}


void Meniu::on_pushButton_BackEvenimente_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->listWidget_Evenimente->clearSelection();

    ui->pushButton_Favorit->setDisabled(true);
    ui->pushButton_Defavorite->setDisabled(true);
    ui->pushButton_CumparaBilet->setDisabled(true);
    ui->pushButton_Detalii->setDisabled(true);
}


void Meniu::on_pushButton_EvenimenteFavorite_clicked()
{
    ui->textBrowser_EvenimenteFavorite->clear();

    QString mesaj=("7|");
    mesaj+=this->username;
    socket->write(mesaj.toUtf8());
    socket->waitForReadyRead();
    QByteArray info=socket->readAll();

    QString mesaj1=QString(info);
    if(mesaj1!="0")
  {
    qDebug()<<mesaj1;
    QStringList lista=mesaj1.split("~");
    foreach(QString item,lista)
    ui->textBrowser_EvenimenteFavorite->append(item);
  }
}



void Meniu::on_pushButton_BileteCumparate_clicked()
{
     ui->textBrowser_BileteCumparate->clear();
     QString mesaj=("10|");
     mesaj+=this->username;
     socket->write(mesaj.toUtf8());
     socket->waitForReadyRead();
     QByteArray info=socket->readAll();
     QString mesaj1=QString(info);
     QStringList lista2;
     qDebug()<<mesaj1;
     QStringList lista1=mesaj1.split("~");
     foreach(QString item,lista1)
  { lista2=item.split("|");

    ui->textBrowser_BileteCumparate->append(lista2.value(0));
    ui->textBrowser_BileteCumparate->append(lista2.value(1)+"\n--------------");
  }
}


void Meniu::on_pushButton_Defavorite_clicked()
{

    QString mesaj="11|";
    mesaj+=this->username+"|";
    mesaj+=ui->listWidget_Evenimente->currentItem()->text();
    socket->write(mesaj.toUtf8());
    socket->waitForReadyRead();



    if(socket->readAll()=="1")
    {
    QMessageBox::information(this,"Defavorite","Scos de la favorite!");
    }
    else

   { QMessageBox::warning(this,"Defavorit","Scos deja de la favorite");

   }

}

void Meniu::check_if_item_selected()
{
    if(this->ui->listWidget_Evenimente->currentRow()>=0)
      { ui->pushButton_Favorit->setDisabled(false);
        ui->pushButton_Defavorite->setDisabled(false);
        ui->pushButton_CumparaBilet->setDisabled(false);
        ui->pushButton_Detalii->setDisabled(false);
      }

}



void Meniu::on_listWidget_Evenimente_itemPressed(QListWidgetItem *item)
{
    check_if_item_selected();
}


void Meniu::on_pushButton_Noutati_clicked()
{
     ui->textBrowser_Noutati->clear();
     QString mesaj=("12|");
     mesaj+=this->username;
     socket->write(mesaj.toUtf8());
     socket->waitForReadyRead();
     QByteArray info=socket->readAll();
     QString mesaj1=QString(info);
     qDebug()<<mesaj1;

    if(mesaj1!="0")
    {

      QStringList lista=mesaj1.split("~");
      foreach(QString item,lista)
      ui->textBrowser_Noutati->append(item);
    }

}


void Meniu::on_pushButton_Statistici_clicked()
{
   ui->textBrowser_Statistici->clear();

   QString mesaj=("13|");
   mesaj+=this->username;
   socket->write(mesaj.toUtf8());
   socket->waitForReadyRead();
   QByteArray info=socket->readAll();
   QString mesaj1=QString(info);


   qDebug()<<mesaj1;
   QStringList lista=mesaj1.split("|");
   foreach(QString item,lista)
   ui->textBrowser_Statistici->append(item);

}



