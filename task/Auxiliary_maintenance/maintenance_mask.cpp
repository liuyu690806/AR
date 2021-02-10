#include "maintenance_mask.h"
#include "ui_maintenance_mask.h"
#include <QDesktopWidget>
#pragma execution_character_set("utf-8")
maintenance_mask::maintenance_mask(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::maintenance_mask)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    //setWindowFlags(Qt::FramelessWindowHint);//这边就是相当于直接将qt窗体默认的功能全部取消
    QDesktopWidget * desktopWidget=QApplication::desktop();
    QRect screenRect=desktopWidget->screenGeometry();
    this->setFixedSize(screenRect.width()-300,screenRect.height()/14*13);

    //渲染设置
    QPalette qplte;
    qplte.setColor(QPalette::Window,QColor(0,0,0));

    ui->widget_vedio->move(0,5);
    ui->widget_vedio->setFixedSize(1080,810);
    ui->widget_vedio->setAutoFillBackground(true);
    ui->widget_vedio->setPalette(qplte);

    ui->widget_model->setFixedSize(400,300);
    ui->widget_model->move(1130,5);
    ui->widget_model->setAutoFillBackground(true);
    ui->widget_model->setPalette(qplte);

    ui->gb_xr->setFixedSize(400,550);
    ui->tab_addtag->setFixedHeight(320);
    ui->gb_xr->move(1130,335);
    //计时器
    ui->timeEdit->setFixedSize(200,40);
    ui->timeEdit->move(885,845);

}



maintenance_mask::~maintenance_mask()
{
    delete ui;
}
