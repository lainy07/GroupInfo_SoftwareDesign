#ifndef ESLABRAINFO_H
#define ESLABRAINFO_H

#include <QDialog>

namespace Ui {
class EslabraInfo;
}

class EslabraInfo : public QDialog
{
    Q_OBJECT

public:
    explicit EslabraInfo(QWidget *parent = nullptr);
    ~EslabraInfo();

private:
    Ui::EslabraInfo *ui;
};

#endif // ESLABRAINFO_H
