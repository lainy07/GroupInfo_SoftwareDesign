#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calisay.h"
#include "eslabra.h"
#include "gabriel.h"
#include "labrador.h"
#include "santos.h"

Calisay *calisay;
Eslabra *eslabra;
Gabriel *gabriel;
Labrador *labrador;
Santos *santos;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_rb_Calisay_clicked()
{

    calisay = new Calisay(this);
    calisay->show();
}


void MainWindow::on_rb_Eslabra_clicked()
{

    eslabra = new Eslabra(this);
    eslabra->show();
}


void MainWindow::on_rb_Gabriel_clicked()
{

    gabriel = new Gabriel(this);
    gabriel->show();
}


void MainWindow::on_rb_Labrador_clicked()
{

    labrador = new Labrador(this);
    labrador->show();
}


void MainWindow::on_rb_Santos_clicked()
{
    santos = new Santos(this);
    santos->show();
}

