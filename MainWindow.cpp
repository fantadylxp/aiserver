#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->ps_image_btn, SIGNAL(clicked()), this, SLOT(ps_image_button()));
}
MainWindow::~MainWindow()
{
    delete ui;
    delete PW;
}
void MainWindow::ps_image_button() {
    PW = new PrecScanWindow();
    PW->show();
}
