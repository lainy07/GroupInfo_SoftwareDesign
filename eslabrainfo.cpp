#include "eslabrainfo.h"
#include "ui_eslabrainfo.h"

EslabraInfo::EslabraInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EslabraInfo)
{
    ui->setupUi(this);
}

EslabraInfo::~EslabraInfo()
{
    delete ui;
}
