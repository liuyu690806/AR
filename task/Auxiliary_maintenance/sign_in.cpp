#include "sign_in.h"
#include "ui_sign_in.h"
#include <QPainter>
#include <QImage>
#include "mypushbutton.h"
#include <QDebug>
#include <QTimer>
#pragma execution_character_set("utf-8")
Sign_in::Sign_in(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sign_in)
{
    ui->setupUi(this);

    //主窗口
    this->setFixedSize(380,600);
    setWindowIcon(QIcon(":/IMG/logo.png"));
    setWindowTitle("增强现实维修系统");

    //QDesktopWidget * desktopWidget=QApplication::desktop();
    //screenRect = desktopWidget->screenGeometry();

    //菜单栏
    ui->menuBar->setStyleSheet("QMenuBar{background-color:rgb(200,200,200);}");

    //状态栏
    ui->statusBar->setStyleSheet("QMenuBar{background-color:rgb(200,200,200);}");
    ui->statusBar->setFixedSize(380,20);
    //用户+密码
    ui->wid_password->setFixedSize(380,200);
    ui->wid_password->move(0,220);
    //登录按钮
    MyPushButton * btnsign = new MyPushButton();
    btnsign->setParent(this);
    btnsign->setFixedSize(210,40);
    btnsign->move(85,490);
    btnsign->setText("登     录");
    btnsign->setFont(QFont("微软雅黑",12,QFont::Bold));
    //实列化主场景1
    M_scence1=new mainscence;
    connect(btnsign,&MyPushButton::clicked,[=](){
       // qDebug()<<"点击";
        btnsign->zoomdown();
        btnsign->zoomup();
        QTimer::singleShot(400,this,[=](){
            //自身隐藏
            this->hide();
            M_scence1->showMaximized();
        });

    });

    //申请账号+忘记密码标签
    ui->label_sq->setAlignment(Qt::AlignLeft);
    ui->label_wj->setAlignment(Qt::AlignRight);
    ui->wid_sq->setFixedSize(310,60);
    ui->wid_sq->move(35,390);

}


//画背景图
void Sign_in::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen(QColor(255,255,255));
    painter.setPen(pen);

    QBrush brush(Qt::white);
    painter.setBrush(brush);
    painter.drawRect(QRect(0,0,400,570));

    QPixmap pix;
    pix.load(":/IMG/sign_in.png");
    painter.drawPixmap(-30,0,pix);
//    QPixmap pix1;
//    pix1.load (":/IMG/2.png");
//    painter.drawPixmap(0,240,pix1);



}


Sign_in::~Sign_in()
{
    delete ui;
}
