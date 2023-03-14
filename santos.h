#ifndef SANTOS_H
#define SANTOS_H

#include <QDialog>

namespace Ui {
class Santos;
}

class Santos : public QDialog
{
    Q_OBJECT

public:
    explicit Santos(QWidget *parent = nullptr);
    ~Santos();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Santos *ui;
};

#endif // SANTOS_H
