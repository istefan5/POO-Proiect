#include "thirdwindow.h"
#include "ui_thirdwindow.h"
#include "sport.h"
#include "muzica.h"
#include "teatru.h"


ThirdWindow::ThirdWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThirdWindow)
{
  ui->setupUi(this);
}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}



void ThirdWindow::on_pushButton_clicked()
{
    Sport *s=new Sport();
    s->show();
}


void ThirdWindow::on_pushButton_2_clicked()
{
    Muzica *m=new Muzica();
    m->show();
}


void ThirdWindow::on_pushButton_3_clicked()
{
    Teatru *t=new Teatru();
    t->show();
}

