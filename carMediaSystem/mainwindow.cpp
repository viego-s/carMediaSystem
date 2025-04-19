#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QObject>
#include<QQuickItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //使用定时器，每秒做一件事
    this->timer=new QTimer();
    connect(this->timer,&QTimer::timeout,this,&MainWindow::showDateTime);
    //实时获取时间
    this->showDateTime();

    //安装事件过滤器
    this->eventFilter=new labelClickEventFilter();
    ui->label_weather->installEventFilter(this->eventFilter);
    ui->label_music->installEventFilter(this->eventFilter);
    ui->label_video->installEventFilter(this->eventFilter);
    ui->label_map->installEventFilter(this->eventFilter);

    //绑定事件过滤器信号和当前类的槽函数
    connect(this->eventFilter,&labelClickEventFilter::goOtherWindow,this,&MainWindow::goPage);

    //实例化各个窗口对象
    this->weaWin=new WeatherWindow(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showDateTime()
{
    //实时获取时间
    QDateTime currentDateTime =QDateTime::currentDateTime();
    QString time=currentDateTime.toString("HH:mm:ss");
    QString date=currentDateTime.toString("yyyy-MM-dd ddd");
    ui->label_time->setText(time);
    ui->label_date->setText(date);
    this->timer->start(1000);
}
/**
* @brief MainWindow::goPage
* @param watched  通过这个参数去判断，要跳转到哪个页面
*/
void MainWindow::goPage(QObject *watched)
{
    QString objName=watched->objectName();
    if(objName=="label_weather"){
        this->weaWin->show();
        this->hide();
    }else if(objName=="label_music"){

    }else if(objName=="label_video"){

    }else if(objName=="label_map"){

    }
}


