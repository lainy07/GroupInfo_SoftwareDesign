#include "santosinfo.h"
#include "ui_santosinfo.h"

SantosInfo::SantosInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SantosInfo)
{
    ui->setupUi(this);
}

SantosInfo::~SantosInfo()
{
    delete ui;
}
