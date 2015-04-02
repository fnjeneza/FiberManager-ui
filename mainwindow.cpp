#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_iodata.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_importExport_clicked()
{
    QWidget* io = new Ui::iodata();

    ui->verticalLayout_2->addWidget(io);
}
