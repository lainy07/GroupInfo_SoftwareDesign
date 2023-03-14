#ifndef GABRIEL_H
#define GABRIEL_H

#include <QDialog>

namespace Ui {
class Gabriel;
}

class Gabriel : public QDialog
{
    Q_OBJECT

public:
    explicit Gabriel(QWidget *parent = nullptr);
    ~Gabriel();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Gabriel *ui;
};

#endif // GABRIEL_H
