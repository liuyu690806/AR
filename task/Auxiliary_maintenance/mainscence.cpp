#include "mainscence.h"
#include "ui_mainscence.h"
#include <QDesktopWidget>
#include <QDebug>
#include <QMessageBox>
#include <QCloseEvent>
#pragma execution_character_set("utf-8")
mainscence::mainscence(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainscence)
{
     ui->setupUi(this);
     //窗体
     setWindowIcon(QIcon(":/IMG/logo.png"));
     setWindowTitle("增强现实维修系统");

     //默认最大化
     QDesktopWidget * desktopWidget=QApplication::desktop();
     screenRect=desktopWidget->screenGeometry();
     this->setFixedSize(screenRect.width(),screenRect.height());
     //菜单栏
     ui->menubar->setStyleSheet("QMenuBar{background-color:rgb(200,200,200);}");
     ui->menubar->setParent(this);
     //状态栏
     ui->statusbar->setStyleSheet("Qstatusbar{background-color:rgb(200,200,200);}");
     ui->statusbar->setFixedSize(screenRect.width(),20);
     ui->statusbar->setParent(this);
     //3个控件的widget
     ui->widget_left->setFixedSize(300,screenRect.height());
     ui->widget_left->move(0,0);
     //ui->widget_left->setParent(this);
     //treewidget
     //m_maskscence = new maintenance_mask;

     ui->treeWidget->setFixedSize(300,screenRect.height()/2-60);
     ui->treeWidget->setFont(QFont("微软雅黑",12,QFont::Bold));
     ui->treeWidget->setHeaderLabels(QStringList()<<"功能模块");
     ui->treeWidget->setStyleSheet("QHeaderView::section{ color:white;  height:45px;  background-color:rgb(0,0,0,200);}"
                                    "QTreeView::item:hover{background-color:rgb(200,200,200,120);}"
                                    "QTreeView::item:selected{background: #1E90FF;}"
                                    "QTreeView::item{margin:8px;}"
                                    "QTreeView{background-color:rgb(200,200,200,100);}");
     //ui->treeWidget->setParent(this);
     connect(ui->treeWidget,SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)),this,SLOT(selectitems(QTreeWidgetItem*,int)));

     //label大标题系统标题
     ui->lab_title->setFixedSize((screenRect.width()-ui->widget_left->width()+8),(screenRect.height()/14));
     ui->lab_title->move(ui->widget_left->width(),0);
     ui->lab_title->setText("增   强   现   实   维   修   系   统");
     ui->lab_title->setFont(QFont("华文行楷",32,QFont::Bold));
     ui->lab_title->setStyleSheet("QLabel{ color:white;  background-color:rgb(0,0,0,200);}");
     //ui->lab_title->setParent(this);


     //listwidget最近维修视频目录
     ui->listWidget->setFixedSize(ui->widget_left->width(),(screenRect.height()-ui->treeWidget->height()));
     ui->listWidget->move(0,ui->treeWidget->height());
     ui->listWidget->setFont(QFont("微软雅黑",10,QFont::Bold));
     ui->listWidget->setStyleSheet( "QListWidget::item:hover{background-color:rgb(200,200,200,120);}"
                                    "QListWidget::item:selected{background: #1E90FF;}"
                                    "QListWidget::item{margin:8px;}"
                                    "QListWidget{background-color:rgb(200,200,200,100);}");
     //ui->listWidget->setParent(this);

     //label小标题——最近维修视频
     ui->label_recent->setFixedSize(ui->widget_left->width(),45);
     ui->label_recent->setFont(QFont("微软雅黑",12,QFont::Bold));
     ui->label_recent->setStyleSheet("QLabel{ color:white; height:45px;  background-color:rgb(0,0,0,200);}");
     //ui->label_recent->setParent(this);









}


void mainscence::selectitems(QTreeWidgetItem * in1,int in2)
{
    if(in1->childCount()!=0)
    {
        qDebug()<<"根节点，继续操作";
    }
    else
    {
        //清空当前场景
        if( m_maskscence!=NULL)
        {
           this->m_maskscence->close();
           setAttribute(Qt::WA_DeleteOnClose);
        }
        if(m_managescence!=NULL)
        {
            this->m_managescence->close();
            setAttribute(Qt::WA_DeleteOnClose);
        }
        if(v_queryscence!=NULL)
        {
            this->v_queryscence->close();
            setAttribute(Qt::WA_DeleteOnClose);
        }
        if(p_infscence!=NULL)
        {
            this->p_infscence->close();
            setAttribute(Qt::WA_DeleteOnClose);
        }
        if(u_managescence!=NULL)
        {
            this->u_managescence->close();
            setAttribute(Qt::WA_DeleteOnClose);
        }


        //加载选择场景
        if(in1->text(in2)=="个人信息")
        {
            qDebug()<<"个人信息";
            QTimer::singleShot(400,this,[=](){
              p_infscence = new personal_inf;
              p_infscence->setParent(this);
              p_infscence->show();
              p_infscence->move(ui->widget_left->width(),((screenRect.height()/14)+33));
              in1->setSelected(false);
            });

        }
        else if(in1->text(in2)=="用户管理")
        {
              qDebug()<<"用户管理";
              QTimer::singleShot(400,this,[=](){
                  u_managescence = new user_management;
                  u_managescence->setParent(this);
                  u_managescence->show();
                  u_managescence->move(ui->widget_left->width(),((screenRect.height()/14)+33));
                in1->setSelected(false);
              });
        }
        else if(in1->text(in2)=="标记信息管理")
        {
              qDebug()<<"标记信息管理";
              QTimer::singleShot(400,this,[=](){

                m_managescence = new mask_management;
                m_managescence->setParent(this);
                m_managescence->show();
                m_managescence->move(ui->widget_left->width(),((screenRect.height()/14)+33));
                in1->setSelected(false);
              });
        }
        else if(in1->text(in2)=="视频查询")
        {
              qDebug()<<"视频查询";
              QTimer::singleShot(400,this,[=](){
                v_queryscence = new vedio_query;
                v_queryscence->setParent(this);
                v_queryscence->show();
                v_queryscence->move(ui->widget_left->width(),((screenRect.height()/14)+33));

                in1->setSelected(false);
              });
        }
        else if(in1->text(in2)=="视频剪辑")
        {
              qDebug()<<"视频剪辑";
              QTimer::singleShot(400,this,[=](){
                in1->setSelected(false);
              });
        }
        else if(in1->text(in2)=="维修标记")
        {
              qDebug()<<"维修标记";
           QTimer::singleShot(400,this,[=](){
                 m_maskscence = new maintenance_mask;
                 m_maskscence->setParent(this);
                 m_maskscence->show();
                 m_maskscence->move(ui->widget_left->width(),((screenRect.height()/14)+33));
                 in1->setSelected(false);
              });
        }
    }




}


 void mainscence::closeEvent(QCloseEvent *event)
 {
     if(0)
     {
         int b=QMessageBox::question(this,QStringLiteral("未保存"),QStringLiteral("当前修改未保存，立即保存吗？"),
                               QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel, QMessageBox::Cancel);
         if(b==QMessageBox::Cancel)
         {
             event->ignore();
             return;
         }
         if(b==QMessageBox::Yes)
         {
             // saveData(contentSheet);

         }

     }
     event->accept();
 }

mainscence::~mainscence()
{
    delete ui;
}
