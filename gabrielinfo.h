#ifndef GABRIELINFO_H
#define GABRIELINFO_H

#include <QDialog>

namespace Ui {
class GabrielInfo;
}

class GabrielInfo : public QDialog
{
    Q_OBJECT

public:
    explicit GabrielInfo(QWidget *parent = nullptr);
    ~GabrielInfo();

private:
    Ui::GabrielInfo *ui;
};

#endif // GABRIELINFO_H
