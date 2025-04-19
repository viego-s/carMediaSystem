#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QObject>
#include<QQuickItem>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QWindow>
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
    ui->label_video->installEventFilter(this->eventFilter);
    ui->label_map->installEventFilter(this->eventFilter);

    //绑定事件过滤器信号和当前类的槽函数
    connect(this->eventFilter,&labelClickEventFilter::goOtherWindow,this,&MainWindow::goPage);

    //实例化各个窗口对象
    this->weaWin=new WeatherWindow(this);
    // 假设音乐图标是一个按钮，连接信号和槽
    connect(ui->musicIconButton, &QPushButton::clicked, this, &MainWindow::on_musicIconButton_clicked);
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



void MainWindow::on_musicIconButton_clicked()
{
    // 使用 QQmlApplicationEngine 创建独立窗口
    static QQmlApplicationEngine *engine = nullptr;

    // 加载 QML 界面
    if (!engine) {
        engine = new QQmlApplicationEngine(this);
        engine->load(QUrl(QStringLiteral("qrc:/main.qml")));
    }
    // 检查加载是否成功
    if (engine->rootObjects().isEmpty()) {
        qCritical() << "Failed to load QML file!";
        return;
    }

    // 获取 QML 中的根对象（Window）
    QObject *rootObject = engine->rootObjects().first();
    QWindow *window = qobject_cast<QWindow *>(rootObject);
    if (window && !window->isVisible()) {
        //window->setModality(Qt::ApplicationModal); // 可选：设置为模态窗口
        window->show();
    }
}

