#include "labrador.h"
#include "ui_labrador.h"
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include "labradorinfo.h"

LabradorInfo *labradorinfo;


Labrador::Labrador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Labrador)
{
    ui->setupUi(this);
}

Labrador::~Labrador()
{
    delete ui;
}

void Labrador::on_pushButton_clicked()
{
    hide();
        labradorinfo = new LabradorInfo(this);
        labradorinfo->show();
}

