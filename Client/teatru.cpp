#include "teatru.h"
#include "ui_teatru.h"

Teatru::Teatru(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Teatru)
{
    ui->setupUi(this);
}

Teatru::~Teatru()
{
    delete ui;
}
