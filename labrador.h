#ifndef LABRADOR_H
#define LABRADOR_H

#include <QDialog>

namespace Ui {
class Labrador;
}

class Labrador : public QDialog
{
    Q_OBJECT

public:
    explicit Labrador(QWidget *parent = nullptr);
    ~Labrador();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Labrador *ui;
};

#endif // LABRADOR_H
