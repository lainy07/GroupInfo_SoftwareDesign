#include "gabrielinfo.h"
#include "ui_gabrielinfo.h"

GabrielInfo::GabrielInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GabrielInfo)
{
    ui->setupUi(this);
}

GabrielInfo::~GabrielInfo()
{
    delete ui;
}
