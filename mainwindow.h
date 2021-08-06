#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>


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
    void onQTimer1();

    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;

    QTimer *QTimer1;

    int counter;
};
#endif // MAINWINDOW_H
