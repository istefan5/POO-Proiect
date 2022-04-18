#include "secondwindow.h"
#include "ui_SecondWindow.h"
#include "thirdwindow.h"
#include "fourwindow.h"
#include "fivewindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{
  ThirdWindow *t= new ThirdWindow();
  t->show();


}


void SecondWindow::on_pushButton_2_clicked()
{
    FourWindow *f=new FourWindow();
    f->show();
}


void SecondWindow::on_pushButton_3_clicked()
{
    FiveWindow *f1=new FiveWindow();
    f1->show();
}

