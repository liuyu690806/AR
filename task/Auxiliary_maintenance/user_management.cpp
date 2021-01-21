#include "user_management.h"
#include "ui_user_management.h"
#include <QDesktopWidget>
#pragma execution_character_set("utf-8")

user_management::user_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user_management)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    //setWindowFlags(Qt::FramelessWindowHint);//这边就是相当于直接将qt窗体默认的功能全部取消
    QDesktopWidget * desktopWidget=QApplication::desktop();
    QRect screenRect=desktopWidget->screenGeometry();
    this->setFixedSize(screenRect.width()-300,screenRect.height()/14*13);
}

user_management::~user_management()
{
    delete ui;
}
