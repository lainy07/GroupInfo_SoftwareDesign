#include "calisayinfo.h"
#include "ui_calisayinfo.h"

CalisayInfo::CalisayInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalisayInfo)
{
    ui->setupUi(this);
}

CalisayInfo::~CalisayInfo()
{
    delete ui;
}
