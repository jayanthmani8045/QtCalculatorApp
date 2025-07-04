#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BtnAdd_clicked();

    void on_BtnSub_clicked();

    void on_BtnDiv_clicked();

    void on_BtnMul_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
