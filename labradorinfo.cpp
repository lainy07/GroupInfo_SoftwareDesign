#include "labradorinfo.h"
#include "ui_labradorinfo.h"

LabradorInfo::LabradorInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LabradorInfo)
{
    ui->setupUi(this);
}

LabradorInfo::~LabradorInfo()
{
    delete ui;
}
