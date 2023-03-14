#ifndef CALISAYINFO_H
#define CALISAYINFO_H

#include <QDialog>

namespace Ui {
class CalisayInfo;
}

class CalisayInfo : public QDialog
{
    Q_OBJECT

public:
    explicit CalisayInfo(QWidget *parent = nullptr);
    ~CalisayInfo();

private:
    Ui::CalisayInfo *ui;
};

#endif // CALISAYINFO_H
