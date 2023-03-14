#ifndef LABRADORINFO_H
#define LABRADORINFO_H

#include <QDialog>

namespace Ui {
class LabradorInfo;
}

class LabradorInfo : public QDialog
{
    Q_OBJECT

public:
    explicit LabradorInfo(QWidget *parent = nullptr);
    ~LabradorInfo();

private:
    Ui::LabradorInfo *ui;
};

#endif // LABRADORINFO_H
