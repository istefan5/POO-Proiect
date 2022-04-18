#include "mainwindow.h"
#include "secondwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
      socket=new QTcpSocket();
      socket->connectToHost("127.0.0.1",1234);
      socket->write(username.toUtf8()+password.toUtf8());
      socket->waitForReadyRead();
     if(socket->readAll()=="1")

{
hide();
SecondWindow *s =new SecondWindow();
s->show();}


 else {
      QMessageBox::warning(this,"Login", "Username and password is not correct");
   }

}

