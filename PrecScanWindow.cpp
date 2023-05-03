#include "PrecScanWindow.h"


PrecScanWindow::PrecScanWindow(QFrame *parent) :
    QFrame(parent),
    ui(new Ui::PrecScanWindow)
{
    ui->setupUi(this);
}

PrecScanWindow::~PrecScanWindow()
{
    delete ui;
}
