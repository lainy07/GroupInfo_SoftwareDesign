#include "santos.h"
#include "ui_santos.h"
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include "santosinfo.h"

SantosInfo *santosinfo;

Santos::Santos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Santos)
{
    ui->setupUi(this);
}

Santos::~Santos()
{
    delete ui;
}

void Santos::on_pushButton_clicked()
{
    hide();
        santosinfo = new SantosInfo(this);
        santosinfo->show();
}

