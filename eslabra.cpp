#include "eslabra.h"
#include "ui_eslabra.h"
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include "eslabrainfo.h"

EslabraInfo *eslabrainfo;

Eslabra::Eslabra(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Eslabra)
{
    ui->setupUi(this);
}

Eslabra::~Eslabra()
{
    delete ui;
}

void Eslabra::on_pushButton_clicked()
{
    hide();
        eslabrainfo = new EslabraInfo(this);
        eslabrainfo->show();
}

