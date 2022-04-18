#include "sport.h"
#include "ui_sport.h"

Sport::Sport(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sport)
{
    ui->setupUi(this);
}

Sport::~Sport()
{
    delete ui;
}
