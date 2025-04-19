#include "weatherwindow.h"
#include "ui_weatherwindow.h"
#include <QDateTime>
#include <QNetworkAccessManager>
#include <common.h>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
WeatherWindow::WeatherWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WeatherWindow)
{
    ui->setupUi(this);
    this->timer=new QTimer();
    connect(this->timer,&QTimer::timeout,this,&WeatherWindow::showDateTime);
    this->showDateTime();
    //初始化容器，给它添加内容
    this->initvector();

    this->manager=new QNetworkAccessManager();
    //通过槽函数，获取三方请求结果
    connect(manager,&QNetworkAccessManager::finished,this,&WeatherWindow::showWeather);
    //初始化天气
    this->initweather();

}

WeatherWindow::~WeatherWindow()
{
    delete ui;
}

void WeatherWindow::initvector()
{
  //分别将界面上的28个Qlabel控件添加到4个Vector中去
    this->dates=new QVector<QLabel*>();
    //日期
    this->dates->push_back(ui->label_date1);
    this->dates->push_back(ui->label_date2);
    this->dates->push_back(ui->label_date3);
    this->dates->push_back(ui->label_date4);
    this->dates->push_back(ui->label_date5);
    this->dates->push_back(ui->label_date6);
    this->dates->push_back(ui->label_date7);
    //温度
    this->tems=new QVector<QLabel*>();
    this->tems->push_back(ui->label_temp1);
    this->tems->push_back(ui->label_temp2);
    this->tems->push_back(ui->label_temp3);
    this->tems->push_back(ui->label_temp4);
    this->tems->push_back(ui->label_temp5);
    this->tems->push_back(ui->label_temp6);
    this->tems->push_back(ui->label_temp7);
    //图标
    this->icons=new QVector<QLabel*>();
    this->icons->push_back(ui->label_icon1);
    this->icons->push_back(ui->label_icon2);
    this->icons->push_back(ui->label_icon3);
    this->icons->push_back(ui->label_icon4);
    this->icons->push_back(ui->label_icon5);
    this->icons->push_back(ui->label_icon6);
    this->icons->push_back(ui->label_icon7);
    //天气
    this->weathers=new QVector<QLabel*>();
    this->weathers->push_back(ui->label_wea1);
    this->weathers->push_back(ui->label_wea2);
    this->weathers->push_back(ui->label_wea3);
    this->weathers->push_back(ui->label_wea4);
    this->weathers->push_back(ui->label_wea5);
    this->weathers->push_back(ui->label_wea6);
    this->weathers->push_back(ui->label_wea7);
}

void WeatherWindow::initweather()
{
   //调用get()发起get请求
    QString url=QString(WEATHER_URL).arg(WEATHER_VERSION).arg(WEATHER_APPID).arg(WEATHER_APPSECRET);
    manager->get(QNetworkRequest(QUrl(url)));



}

void WeatherWindow::on_btn_back_clicked()
{
    this->hide();
    this->parentWidget()->show();
}

void WeatherWindow::showDateTime()
{
    QDateTime currentDateTime=QDateTime::currentDateTime();
    QString dateStr=currentDateTime.toString("yyyy-MM-dd\nHH:mm:ss ddd");
    ui->label_datetime->setText(dateStr);
    this->timer->start(1000);
}

void WeatherWindow::showWeather(QNetworkReply *reply)
{   //qDebug()<<"实时展示天气";
    QByteArray data=reply->readAll();
    //解析json格式的字符串，动态展示数据
    QJsonDocument doc=QJsonDocument::fromJson(data);
    if(doc.isObject()){
        QJsonObject obj=doc.object();
        //获取城市
        QString city=obj.value("city").toString();
        ui->btn_city->setText(city);
        QJsonArray arr=obj.value("data").toArray();
        for(int i=0;i<arr.size();i++){
            QJsonObject obj1=arr.at(i).toObject();
            //每一次遍历就是一天的数据
            //时间
            QString date=obj1.value("date").toString().split("-")[2]+"日";
            QString week=obj1.value("week").toString();
            QString dateRes=date+"\n"+week;
            dates->at(i)->setText(dateRes);

            //温度
            QString minTemp=obj1.value("tem2").toString()+"℃";
            QString maxTemp=obj1.value("tem1").toString()+"℃";
            QString temRes=minTemp+"~"+maxTemp;
            tems->at(i)->setText(temRes);

            //图标
            QString weaImage=obj1.value("wea_img").toString();
            QString css="border-image: url(:/image/weather/%1.png)";
            css=css.arg(weaImage);
            icons->at(i)->setStyleSheet(css);

            //天气
            QString wea=obj1.value("wea").toString();
            weathers->at(i)->setText(wea);
            //第一天天气就是实时天气
            if(i==0){
                ui->label_icon->setStyleSheet(css);
                ui->label_weather->setText(wea);
                QString tem=obj1.value("tem").toString()+"℃";
                ui->label_temprature->setText(tem);
            }
        }
    }
}

//点击城市按钮，刷新天气，即再次获取数据
void WeatherWindow::on_btn_city_clicked()
{
    this->initweather();
}

