#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_rb_Calisay_clicked();




    void on_rb_Eslabra_clicked();

    void on_rb_Gabriel_clicked();

    void on_rb_Labrador_clicked();

    void on_rb_Santos_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
