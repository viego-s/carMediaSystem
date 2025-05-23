#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "labelclickeventfilter.h"
#include "weatherwindow.h"
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

public slots:
    void showDateTime();
    void goPage(QObject *watched);
private slots:
    void on_musicIconButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    labelClickEventFilter *eventFilter;
    WeatherWindow *weaWin;

    };
#endif // MAINWINDOW_H
