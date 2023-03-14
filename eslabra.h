#ifndef ESLABRA_H
#define ESLABRA_H

#include <QDialog>

namespace Ui {
class Eslabra;
}

class Eslabra : public QDialog
{
    Q_OBJECT

public:
    explicit Eslabra(QWidget *parent = nullptr);
    ~Eslabra();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Eslabra *ui;
};

#endif // ESLABRA_H
