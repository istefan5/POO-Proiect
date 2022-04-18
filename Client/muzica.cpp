#include "muzica.h"
#include "ui_muzica.h"

Muzica::Muzica(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Muzica)
{
    ui->setupUi(this);
}

Muzica::~Muzica()
{
    delete ui;
}
