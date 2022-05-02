#include "fivewindow.h"
#include "ui_fivewindow.h"

FiveWindow::FiveWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FiveWindow)
{
    ui->setupUi(this);
}

FiveWindow::~FiveWindow()
{
    delete ui;
}
