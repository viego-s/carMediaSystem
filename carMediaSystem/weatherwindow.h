#ifndef WEATHERWINDOW_H
#define WEATHERWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QVector>
#include <QLabel>
#include <QNetworkReply>
#include<QNetworkAccessManager>
namespace Ui {
class WeatherWindow;
}

class WeatherWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WeatherWindow(QWidget *parent = nullptr);
    ~WeatherWindow();
    void initvector();
    void initweather();

private slots:
    void on_btn_back_clicked();
    void showDateTime();
    void showWeather(QNetworkReply *reply);
    void on_btn_city_clicked();

private:
    Ui::WeatherWindow *ui;
    QTimer *timer;
    QVector<QLabel*> *dates;
    QVector<QLabel*> *tems;
    QVector<QLabel*> *icons;
    QVector<QLabel*> *weathers;
    QNetworkAccessManager *manager;
};

#endif // WEATHERWINDOW_H
