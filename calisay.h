#ifndef CALISAY_H
#define CALISAY_H

#include <QDialog>

namespace Ui {
class Calisay;
}

class Calisay : public QDialog
{
    Q_OBJECT

public:
    explicit Calisay(QWidget *parent = nullptr);
    ~Calisay();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Calisay *ui;
};

#endif // CALISAY_H
