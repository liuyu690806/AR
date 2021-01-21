#include "mask_management.h"
#include "ui_mask_management.h"
#include <QDesktopWidget>
#pragma execution_character_set("utf-8")
mask_management::mask_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mask_management)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    //setWindowFlags(Qt::FramelessWindowHint);//这边就是相当于直接将qt窗体默认的功能全部取消
    QDesktopWidget * desktopWidget=QApplication::desktop();
    QRect screenRect=desktopWidget->screenGeometry();
    this->setFixedSize(screenRect.width()-300,screenRect.height()/14*13);
//其他信息
    ui->gb_other->setFixedSize(600,480);
    ui->wid_choosefile->setFixedSize(580,480);
    ui->widget->setFixedSize(570,60);
    ui->comboBox->setFixedHeight(40);
    ui->comboBox_2->setFixedHeight(40);
    ui->comboBox_3->setFixedHeight(40);
    ui->lineEdit_2->setFixedHeight(40);
    ui->btn_menuok->setFixedHeight(40);
    ui->lineEdit->setFixedHeight(40);
    ui->btn_choosefile->setFixedHeight(40);
    ui->widget_2->setFixedSize(570,60);
    ui->textEdit->setFixedSize(560,280);
    ui->gb_other->move(300,15);
   // ui->gb_other->setStyleSheet("QGroupBox::title{font-size:11px;font-weight:bold;font-family:微软雅黑;}");
    //ui->gb_other->setStyleSheet("QGroupBox::title{font-family:微软雅黑;font:size 11px;font:bold 38px;subcontrol-origin:margin;subcontrol-position:top center;padding:0 3px;}");
//文本
    ui->gb_text->setFixedSize(600,480);
    ui->gb_text->move(980,15);
    ui->wid_texttal->setFixedSize(580,480);
    ui->comboBox_4->setFixedHeight(40);
    ui->comboBox_5->setFixedHeight(40);
    ui->lineEdit_3->setFixedHeight(40);
    ui->widget_3->setFixedSize(570,65);
    ui->btn_ok->setFixedHeight(40);
    ui->textEdit_2->setFixedSize(560,280);

    //table
    ui->tableWidget->setFixedSize(1280,350);
    ui->tableWidget->move(300,520);
    //tree
     ui->treeWidget->setHeaderLabels(QStringList()<<"维修项目");
     ui->treeWidget->setFixedSize(300,855);
     ui->treeWidget->move(0,15);
     ui->treeWidget->setFont(QFont("微软雅黑",10,QFont::Bold));
     ui->treeWidget->setStyleSheet("QHeaderView::section{ color:white;  height:35px;  background-color:rgb(0,0,0,200);}"
                                    "QTreeView::item:hover{background-color:rgb(200,200,200,120);}"
                                    "QTreeView::item:selected{background: #1E90FF;}"
                                    "QTreeView::item{margin:5px;}"
                                    "QTreeView{background-color:rgb(200,200,200,100);}");
}

mask_management::~mask_management()
{
    delete ui;
}
