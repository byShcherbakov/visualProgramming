#include "climatwindow.h"
#include "ui_climatwindow.h"

ClimatWindow::ClimatWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClimatWindow)
{
    ui->setupUi(this);
}

ClimatWindow::~ClimatWindow()
{
    delete ui;
}
