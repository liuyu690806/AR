#include "vedio_query.h"
#include "ui_vedio_query.h"
#include <QDesktopWidget>
#pragma execution_character_set("utf-8")
vedio_query::vedio_query(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vedio_query)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    //setWindowFlags(Qt::FramelessWindowHint);//这边就是相当于直接将qt窗体默认的功能全部取消
    QDesktopWidget * desktopWidget=QApplication::desktop();
    QRect screenRect = desktopWidget->screenGeometry();
    this->setFixedSize(screenRect.width()-300,screenRect.height()/14*13);

    //视频openGl
    ui->openGLWidget->move(0,5);
    ui->openGLWidget->setFixedSize(1080,810);
    //视频概述
    ui->groupBox->move(1150,5);
    ui->groupBox->setFixedSize(400,360);
    //按钮
    ui->pushButton->move(1270,390);
    ui->pushButton->setFixedSize(160,40);

    //数据库区
    ui->tableWidget->move(1150,450);
    ui->tableWidget->setFixedSize(400,360);

}

vedio_query::~vedio_query()
{
    delete ui;
}
