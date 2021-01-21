#include "personal_inf.h"
#include "ui_personal_inf.h"
#include <QDesktopWidget>
#pragma execution_character_set("utf-8")
personal_inf::personal_inf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::personal_inf)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    //setWindowFlags(Qt::FramelessWindowHint);//这边就是相当于直接将qt窗体默认的功能全部取消
    QDesktopWidget * desktopWidget=QApplication::desktop();
    QRect screenRect=desktopWidget->screenGeometry();
    this->setFixedSize(screenRect.width()-300,screenRect.height()/14*13);
}

personal_inf::~personal_inf()
{
    delete ui;
}
