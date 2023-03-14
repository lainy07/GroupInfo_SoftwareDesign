#include "calisay.h"
#include "ui_calisay.h"
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include "calisayinfo.h"

CalisayInfo *calisayinfo;

void Write(QString Filename)
{

}

void Read(QString Filename)
{

}



Calisay::Calisay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calisay)
{
    ui->setupUi(this);
}

Calisay::~Calisay()
{
    delete ui;
}

void Calisay::on_pushButton_clicked()
{
    hide();
    calisayinfo = new CalisayInfo(this);
    calisayinfo->show();
}

