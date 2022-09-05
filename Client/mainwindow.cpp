#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QTcpSocket>
#include "QString"

QString tip;
QString tip1;

MainWindow::MainWindow(QTcpSocket *S,qintptr sd,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{       this->socket=S;
        this->socketDescriptor=sd;
        ui->setupUi(this);


        ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    ui->lineEdit_username->clear();
    ui->lineEdit_password->clear();

    QString data="1|";
    data+=username+"|"+password;
    socket->write(data.toUtf8());
    socket->waitForReadyRead();
    if(socket->readAll()=="1")
    {
    QMessageBox::information(this,"Login", "Username and password is correct");

    _Meniu = new Meniu(username,this->socket, this->socketDescriptor, this);
    ui->stackedWidget->addWidget(_Meniu);
    ui->stackedWidget->setCurrentWidget(_Meniu);
    }
    else
    {
      QMessageBox::warning(this,"Login", "Username or password is not correct");
    }

}



void MainWindow::on_pushButton_Register_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_ForgotPassword_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_Login_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_Login_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

bool checkPassword(QString s1, QString s2)
{
    if(s1==s2 && s1.length()>0)
    {
        return true;
    }
    return false;

}

bool MainWindow::check_correct_password(QString s)
{
        QString Numbers="0123456789";
        QString LitereMari="QWERTYUIOPLASDFGHJKZXCVBNM";
        QString literemici="qwertyuioplasdfghjkzxcvbnm";


        QString parola=s;
        bool is_corect=true;

        if(parola.size()<8)
        {
            is_corect=false;
        }

        bool OkN=false;
        bool OkL=false;
        bool Okl=false;

        for(int i=0;i<parola.size();i++)
        {

            if(Numbers.contains(parola[i]))
            {
                OkN=true;
            }
            if(LitereMari.contains(parola[i]))
            {
                OkL=true;
            }
            if(literemici.contains(parola[i]))
            {
                Okl=true;
            }
        }
        if(OkN==false || OkL==false || Okl==false)
        {
            is_corect=false;
        }

        return is_corect;
}





void MainWindow::on_pushButton_Submit_clicked()
{

        QString username = ui->lineEdit_1_Username->text();
        QString password = ui->lineEdit_2_Password->text();
        QString confirm = ui->lineEdit_3_Confirm->text();
        QString email = ui->lineEdit_4_Email->text();
        ui->statusbar->showMessage("Parola trebuie sa aiba minim lungimea 8, o litera mica, o litera mare si o cifra!!!");
        //QMessageBox::warning(this,"Submit","Parola trebuie sa aiba minim lungimea 8, o litera mica, o litera mare si o cifra!!!");
        QString data="2|";




        if(check_correct_password(password)==false)

          {
            QMessageBox parolaNeconforma;
            parolaNeconforma.setText("\n\tParola neconforma!");
            parolaNeconforma.exec();
            return;
          }
         else
          {  data+=username+"|"+password+"|"+email;
             socket->write(data.toUtf8());
             socket->waitForReadyRead();
          }
            if(socket->readAll()=="1")
             {
               QMessageBox::information(this,"Submit", "Successful Register");
               ui->stackedWidget->setCurrentIndex(0);
               ui->lineEdit_1_Username->clear();
               ui->lineEdit_2_Password->clear();
               ui->lineEdit_3_Confirm->clear();
               ui->lineEdit_4_Email->clear();
               ui->statusbar->clearMessage();
             }
            else
             {
                QMessageBox::warning(this,"Register", "Username already in use.");
             }
  }


void MainWindow::on_lineEdit_Confirm_editingFinished()
{

   if(ui->lineEdit_2_Password->text()== ui->lineEdit_3_Confirm->text())
    {
         ui->pushButton_Submit->setDisabled(false);
   }
}


void MainWindow::on_pushButton_Send_clicked()
{

        QString username = ui->lineEdit_Username->text();
        QString email = ui->lineEdit_Email->text();
        QString data="14|";
        data+=username+"|"+email;



        socket->write(data.toUtf8());
        socket->waitForReadyRead();
        if(socket->readAll()=="1")
        {

          QMessageBox::information(this, "Succes", "The e-mail will be send!");
          ui->stackedWidget->setCurrentIndex(0);
          ui->lineEdit_Username->clear();
          ui->lineEdit_Email->clear();
        }
        else
        {
          QMessageBox::warning(this, "Failed", "The credentials doesn't match!");
        }

}



void MainWindow::logOut()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_Admin_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_Login_4_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_Submit_2_clicked()
{


    QString password = ui->lineEdit_password_admin->text();


    QString data="14|";
    data+=password;
    socket->write(data.toUtf8());
    socket->waitForReadyRead();

        if(socket->readAll()=="1")
         {
           QMessageBox::information(this,"Submit_2", "Successful Login as Admin!");
           ui->stackedWidget->setCurrentIndex(4);
           ui->lineEdit_password_admin->clear();
           ui->statusbar->clearMessage();
         }
        else
         {
            QMessageBox::warning(this,"Submit_2", "Username or password is not correct!");
         }

}

void MainWindow::on_pushButton_Adauga_Eveniment_clicked()
{
      ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_Muzica_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
     tip="1";
}


void MainWindow::on_pushButton_Sport_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
     tip="3";
}


void MainWindow::on_pushButton_Teatru_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
      tip="2";
}


void MainWindow::on_pushButton_LogOut_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}




void MainWindow::on_pushButton_Modifica_Eveniment_clicked()
{
     ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_Back_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_Back_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_Back_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_Muzica_Modif_clicked()
{
    ui->listWidget_Evenimente->setCurrentRow(-1);
    ui->listWidget_Evenimente->clear();
    socket->write("3");

    socket->waitForReadyRead();

    QByteArray data=socket->readAll();
    QString info=QString(data);
    qDebug()<<info;
    ui->stackedWidget->setCurrentIndex(8);

    QStringList data1 =info.split('|');
    foreach(QString item,data1)
    {
        ui->listWidget_Evenimente->addItem(item);

    }
}


void MainWindow::on_pushButton_Sport_Modif_clicked()
{

    //tip1="3";
    ui->listWidget_Evenimente->setCurrentRow(-1);
    ui->listWidget_Evenimente->clear();
    socket->write("5");

    socket->waitForReadyRead();

    QByteArray data=socket->readAll();
    QString info=QString(data);
    qDebug()<<info;
    ui->stackedWidget->setCurrentIndex(8);

    QStringList data1 =info.split('|');
    foreach(QString item,data1)
    {
         ui->listWidget_Evenimente->addItem(item);

    }
}


void MainWindow::on_pushButton_Teatru_Modif_clicked()
{
    ui->listWidget_Evenimente->setCurrentRow(-1);
    ui->listWidget_Evenimente->clear();
    socket->write("4");

    socket->waitForReadyRead();

    QByteArray data=socket->readAll();
    QString info=QString(data);
    qDebug()<<info;
    ui->stackedWidget->setCurrentIndex(8);

    QStringList data1 =info.split('|');
    foreach(QString item,data1)
    {
      ui->listWidget_Evenimente->addItem(item);

    }
}





void MainWindow::on_pushButton_ModificaPret_clicked()
{
    QString mesaj="16|";
    QString pret_nou=ui->lineEdit_PretNou->text();
    mesaj+=ui->listWidget_Evenimente->currentItem()->text()+"|"+pret_nou;
    socket->write(mesaj.toUtf8());
    socket->waitForReadyRead();

    if(socket->readAll()=="1")
     {
       QMessageBox::information(this,"ModificaPret","Pretul biletului a fost modificat cu succes!");
       ui->lineEdit_PretNou->clear();
       ui->statusbar->clearMessage();
     }
    else
     {
        QMessageBox::warning(this,"ModificaPret", "Pretul biletului nu a fost modificat!");
     }


}


void MainWindow::on_pushButton_Adaugare_Eveniment_clicked()
{
        QString mesaj="15|";
        QString denumire = ui->lineEdit_Denumire->text();
        QString locatie = ui->lineEdit_Locatie->text();
        QString data = ui->lineEdit_Data->text();
        QString pret = ui->lineEdit_Pret->text();
        mesaj+=denumire+"|"+data+"|"+locatie+"|"+pret+"|"+tip;
        qDebug()<<data;
        socket->write(mesaj.toUtf8());
        socket->waitForReadyRead();

        if(socket->readAll()=="1")
         {
           QMessageBox::information(this,"Adaugare_Eveniment", "Eveniment adaugat cu succes!");
           ui->lineEdit_Denumire->clear();
           ui->lineEdit_Locatie->clear();
           ui->lineEdit_Data->clear();
           ui->lineEdit_Pret->clear();
           ui->statusbar->clearMessage();
         }
        else
         {
            QMessageBox::warning(this,"Adaugare_Eveniment", "Eroare adaugare!");
         }


}


void MainWindow::on_pushButton_Back_3_clicked()
{
      ui->stackedWidget->setCurrentIndex(7);
}

