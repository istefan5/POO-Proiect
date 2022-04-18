#include "fourwindow.h"
#include "ui_fourwindow.h"

FourWindow::FourWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FourWindow)
{
    ui->setupUi(this);
}

FourWindow::~FourWindow()
{
    delete ui;
}
