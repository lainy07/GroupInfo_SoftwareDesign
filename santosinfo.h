#ifndef SANTOSINFO_H
#define SANTOSINFO_H

#include <QDialog>

namespace Ui {
class SantosInfo;
}

class SantosInfo : public QDialog
{
    Q_OBJECT

public:
    explicit SantosInfo(QWidget *parent = nullptr);
    ~SantosInfo();

private:
    Ui::SantosInfo *ui;
};

#endif // SANTOSINFO_H
