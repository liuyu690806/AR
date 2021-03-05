#include "sign_in.h"
#include "ui_sign_in.h"
#include <QPainter>
#include <QImage>
#include "mypushbutton.h"
#include <QDebug>
#include <QTimer>
#include <QtSql/QSqlDatabase>
#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
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
    btnsign->setText("登      录");
    btnsign->setFont(QFont("微软雅黑",14,QFont::Bold));
    ui->job_id->setText("SX1905012");
    ui->password->setText("0518");
    //登录
    connect(btnsign,&MyPushButton::clicked,[=](){
       // qDebug()<<"点击";
        btnsign->zoomdown();
        btnsign->zoomup();
        login();


    });

    //申请账号+忘记密码标签
    ui->label_sq->setAlignment(Qt::AlignLeft);
    ui->label_wj->setAlignment(Qt::AlignRight);
    ui->wid_sq->setFixedSize(310,60);
    ui->wid_sq->move(35,390);

    //数据库连接
    connect_mysql();
    //
    connect(ui->label_sq,SIGNAL(Afor_an_accout()),this,SLOT(getpersonal_info()));

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

void Sign_in::connect_mysql()
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("arsystem"))
    {
       db=QSqlDatabase::database("arsystem");
    }
    else {
            db=QSqlDatabase::addDatabase("QMYSQL","arsystem");
            db.setHostName("localhost");   //主机名称，如localhost
            db.setPort(3306);              //数据库端口号
            db.setDatabaseName("ar");    //数据库名称
            db.setUserName("root");        //用户名称
            db.setPassword("0518");      //用户密码
            db.open();
           if(db.isOpen())
           {
              QLabel * label_stbar = new QLabel("数据库连接成功!",this);
              ui->statusBar->addPermanentWidget(label_stbar);
           }
           else
           {
              QMessageBox::warning(this,"错误",db.lastError().text());
              return;
           }
    }

}

void Sign_in::clearUI()
{
   ui->job_id->clear();
   ui->password->clear();

}

void Sign_in::login()
{
    QString job_num = ui->job_id->text();
    QString Password = ui->password->text();
    QSqlDatabase db = QSqlDatabase::database("arsystem");
    QSqlQuery query(db);
    query.exec("select user_name,job_num,pass_word,job from user_info;");
    bool flag = false;
    while(query.next())
    {
        QString id_temp = query.value("job_num").toString();
        QString password_temp = query.value("pass_word").toString();
        if(job_num==id_temp && Password==password_temp)
        {
            flag = true;
            user_name = query.value("user_name").toString();
            job_num = id_temp;
            job = query.value("job").toString();

        }
    }
    if(flag)
    {

        qDebug()<<user_name;
        qDebug()<<job_num;
        qDebug()<<job;
        qDebug()<<"登录界面";


        QTimer::singleShot(400,this,[=](){
            //自身隐藏
            this->hide();
            //实列化主场景1
            M_scence1=new mainscence;
            M_scence1->showMaximized();
            connect(this,SIGNAL(send_job(QString)),M_scence1,SLOT(get_job(QString)));
            emit send_job(job);
            connect(this,SIGNAL(send_jobnum(QString)),M_scence1,SLOT(get_jobnum(QString)));
            //connect(this,SIGNAL(send_jobnum(QString)),M_scence1,SLOT(get_jobnum_per(QString)));
            emit send_jobnum(job_num);
        });
    }
    else
    {
       QMessageBox::warning(this,"warning","用户名或密码错误,请重新输入！");
       clearUI();
    }

}

void Sign_in::getpersonal_info()
{
    QString job_num="0";
    QTimer::singleShot(400,this,[=](){
        //自身隐藏
        this->hide();
        //实列化主场景1
        M_scence1=new mainscence;
        M_scence1->showMaximized();
        //connect(this,SIGNAL(send_job(QString)),M_scence1,SLOT(get_job(QString)));
        //emit send_job(job);
        connect(this,SIGNAL(send_jobnum(QString)),M_scence1,SLOT(get_jobnum(QString)));
        connect(this,SIGNAL(send_jobnum(QString)),M_scence1,SLOT(get_personal_inf(QString)));
        //connect(this,SIGNAL(send_jobnum(QString)),M_scence1,SLOT(get_jobnum_per(QString)));
        emit send_jobnum(job_num);


    });

}


void Sign_in::reshow()
{
    clearUI();
    this->show();
}

Sign_in::~Sign_in()
{
    delete ui;
}
