#include "vedio_query.h"
#include "ui_vedio_query.h"
#include <QDesktopWidget>
#include <QDebug>
#include <QSqlDatabase>
#include "mypushbutton1.h"
#include <QSqlQuery>
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
    //进度条
    ui->widget->move(0,815);
    ui->widget->setFixedSize(1080,50);
    ui->play_pauseBtn->setFixedHeight(35);
    ui->openBtn->setFixedHeight(35);
    ui->stopBtn->setFixedHeight(35);

    //视频概述
    ui->groupBox->move(1090,5);
    ui->groupBox->setFixedSize(520,850);
    ui->tableWidget->setFixedHeight(600);

    //视频关系树
    ui->treeWidget->setFixedWidth(160);
    ui->treeWidget->setHeaderLabels(QStringList()<<"维修项目");
    ui->treeWidget->header()->setMinimumSectionSize(160);
    ui->treeWidget->setFont(QFont("微软雅黑",10,QFont::Bold));
    QHeaderView *pHeader=ui->treeWidget->header();
    pHeader->setSectionResizeMode(QHeaderView::ResizeToContents);
    pHeader->setStretchLastSection(false);

    ui->treeWidget->setStyleSheet("QHeaderView::section{ color:white;  height:35px;  background-color:rgb(0,0,0,200);}"
                                   "QTreeView::item:hover{background-color:rgb(200,200,200,120);}"
                                   "QTreeView::item:selected{background: #1E90FF;}"
                                  "QTreeView::item{margin:5px;}"
                                   "QTreeView{background-color:rgb(200,200,200,100);}");

    //视频设置
    player = new QMediaPlayer;
    Playlist = new QMediaPlaylist;
    player->setPlaylist(Playlist);
    videowidget = new QVideoWidget(this);
    player->setVideoOutput(videowidget);
    videowidget->move(0,5);
    videowidget->setFixedSize(1080,810);
    videowidget->setAutoFillBackground(true);
    QPalette qplte;
    qplte.setColor(QPalette::Window, QColor(0,0,0));
    videowidget->setPalette(qplte);

    m_bReLoad=true;
    ui->Slider1->setEnabled(false);

    connect(ui->play_pauseBtn,SIGNAL(clicked()),this,SLOT(play_pauseBtn_clicked()));
    connect(ui->openBtn,SIGNAL(clicked()),this,SLOT(openBtn_clicked()));
    //connect(ui->fullScrBtn,SIGNAL(clicked()),this,SLOT(fullScr_clicked()));
    connect(ui->stopBtn,SIGNAL(clicked()),this,SLOT(stopBtn_clicked()));

    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(OnSlider(qint64)));
    connect(player,SIGNAL(durationChanged(qint64)),this,SLOT(OnDurationChanged(qint64)));
    connect(ui->Slider1,SIGNAL(sigProgress(qint64)),player,SLOT(setPosition(qint64)));

    structure_Tree(ui->treeWidget);
    tableshow();
    connect(ui->treeWidget,SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)),this,SLOT(selectitems(QTreeWidgetItem*,int)));
    connect(ui->btn_modify,&MyPushButton1::clicked,this,[=]{
        ui->btn_modify->zoomdown();
        ui->btn_modify->zoomup();
        modify_text();
     });
    connect(ui->btn_delete,&MyPushButton1::clicked,this,[=]{
        ui->btn_delete->zoomdown();
        ui->btn_delete->zoomup();
        delete_vedio();
     });


}

void vedio_query::addToPlaylist(const QStringList &fileNames)
{
    foreach(QString const &argument,fileNames){
        QFileInfo fileInfo(argument);
        if(fileInfo.exists()){
          // QUrl url = QUrl::fromLocalFile(fileNames);
           QUrl url = QUrl::fromLocalFile(fileInfo.absoluteFilePath());
            qDebug() << "url:" << url << ";";
            if(fileInfo.suffix().toLower() == QLatin1String("flv")){
                Playlist->load(url);
            }
            else{
                Playlist->addMedia(url);
            }
        }
        else{
            QUrl url(argument);
            if(url.isValid()){
                Playlist->addMedia(url);
            }
        }
    }

}

void vedio_query::openBtn_clicked()
{
    Playlist->clear();
    QStringList fileNames = QFileDialog::getOpenFileNames(this,tr("打开视频文件"),"","*.mp4");
    addToPlaylist(fileNames);
    m_bReLoad=true;
    ui->Slider1->setValue(0);
    play_state=true;
    ui->play_pauseBtn->setText("播放");

}

void vedio_query::play_pauseBtn_clicked()
{
    //m_playerState = QMediaPlayer::PlayingState;
    if(play_state)
    {
        player->play();
        m_bReLoad=true;
        //ui->Slider1->setValue(0);
        ui->Slider1->setEnabled(true);
        ui->play_pauseBtn->setText("暂停");
    }
    else
    {
        player->pause();
        ui->Slider1->setEnabled(false);
        ui->play_pauseBtn->setText("播放");
    }

       play_state = !play_state;
}

void vedio_query::stopBtn_clicked()
{
   m_playerState = QMediaPlayer::PlayingState;
   player->stop();
   ui->Slider1->setValue(0);
   ui->Slider1->setEnabled(false);
   ui->play_pauseBtn->setText("播放");
   play_state=true;
}

void vedio_query::OnSlider(qint64 i64Pos)
{
    ui->Slider1->setProgress(i64Pos);
    qDebug()<<"Onslider:"<<ui->Slider1->value();
    //ui.horizontalSlider->setProgress(i64Pos);
//    if(ui->Slider1->value()==i64Duration)
//    {
//       ui->play_pauseBtn->setText("播放");
//       ui->Slider1->setValue(0);
//        ui->Slider1->setEnabled(false);
//       play_state=true;
//    }
}

void vedio_query::OnDurationChanged(qint64 i64Duration)
{
    if (i64Duration > 0 && m_bReLoad)
    {
        ui->Slider1->setRange(0, i64Duration);
        m_bReLoad = false;
         qDebug()<<"i64Duration > 0 && m_bReLoad:"<<i64Duration;
    }
    if(ui->Slider1->value()==i64Duration)
    {
              ui->play_pauseBtn->setText("播放");
              ui->Slider1->setValue(0);
              ui->Slider1->setEnabled(false);
              play_state=true;
    }

     qDebug()<<"OnDurationChanged:"<<i64Duration;
}
//后续递归调用，插入到父亲节点
void vedio_query::structure_Tree(QString root, QTreeWidgetItem *item)
{
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    query.exec(QString("select * from vedio where root_ID='%1';").arg(root));
    while (query.next())
        {
            int n1=query.value("vedio_ID").toString().lastIndexOf("-");
            int n2=query.value("vedio_ID").toString().lastIndexOf("v");
            QString n=query.value("vedio_ID").toString().mid(n1+1,n2-n1-1);
            QString VEDIO_NAME = QString("视频%1:").arg(n)+query.value("vedio_name").toString(); //获取部门名称
            QTreeWidgetItem *item_1 = new QTreeWidgetItem(item);
            item_1->setText(0,VEDIO_NAME);
        }
        return;
}
//第一次插入，根节点，最高级部门
void vedio_query::structure_Tree(QTreeWidget *tree)
{
    ui->treeWidget->clear();
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    query.exec("select * from assembly order by ID;");
    while(query.next())
    {
        QString OBJECT_NAME = query.value("object").toString();
        QString ID = query.value("ID").toString();
        QTreeWidgetItem *item = new QTreeWidgetItem(tree,QStringList(QString(OBJECT_NAME)));
        if(!OBJECT_NAME.isEmpty())
        {
            structure_Tree(ID,item);    //开启递归
        }
        return;
    }
}

void vedio_query::tableshow()
{
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{border:2px groove gray;border-radius:20px;padding:2px 4px;background-color: rgb(220, 220, 220);font: 13pt '微软雅黑'}");
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //禁止编辑
      ui->tableWidget->setColumnCount(8);
      QStringList header;
      //将表头写入表格
      header<<"ID"<<"装配对象"<<"视频名"<<"视频ID"<<"根ID"<<"时长"<<"创建日期"<<"路径";
      ui->tableWidget->setHorizontalHeaderLabels(header);
      //自动调整宽度
      ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
      /*设置表格是否充满，即行末不留空*/
      query.exec(QString("SELECT a.*,p.* FROM `assembly` a LEFT OUTER JOIN `vedio` p ON a.`ID`=p.`root_ID`;"));
      int row;
      for(row = 0; query.next(); row++){}
      qDebug()<<row;
      query.exec(QString("SELECT a.*,p.* FROM `assembly` a LEFT OUTER JOIN `vedio` p ON a.`ID`=p.`root_ID`;"));
      ui->tableWidget->setRowCount(row);
      for(int i = 0; query.next(); i++)
      {
          for(int j = 0; j < 8; j++)
          {
             ui->tableWidget->setItem(i,j, new QTableWidgetItem(query.value(j).toString()));
             ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
          }
      }

}

void vedio_query::selectitems(QTreeWidgetItem *in1 ,int in2)
{
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    QString root;
    QString ID;
    QStringList  path;
    if(in1->text(in2).mid(0,2)=="视频")
    {
      root=in1->parent()->text(in2);
      query.exec(QString("select * from assembly where object='%1';").arg(root));
      if(query.first())
      {
         ID=query.value("ID").toString();
         ui->label_assenbly->setText(query.value("object").toString());
         QString VEDIO_ID=ID+"-"+in1->text(in2).mid(2,in1->text(in2).lastIndexOf(":")-2)+"v";
         query.exec(QString("select * from vedio where vedio_ID='%1';").arg(VEDIO_ID));
         if(query.first())
         {
             ui->textEdit->setText(query.value("vedio_text").toString());
             ui->label_vedioID->setText(query.value("vedio_ID").toString());
             path<<query.value("path").toString();
             Playlist->clear();
             addToPlaylist(path);
             m_bReLoad=true;
             ui->Slider1->setValue(0);
             play_state=true;
             ui->play_pauseBtn->setText("播放");
             player->play();
             m_bReLoad=true;
             //ui->Slider1->setValue(0);
             ui->Slider1->setEnabled(true);
             ui->play_pauseBtn->setText("暂停");
             play_state = !play_state;
             return;
         }
         else
         {
             QMessageBox::information(this,"提示","对不起，没有此对象！");
             return;
         }

      }
      else
      {
         QMessageBox::information(this,"提示","对不起，没有此对象！");
         return;
      }
    }
}

void vedio_query::modify_text()
{
   if(ui->label_vedioID->text()==""||ui->textEdit->document()->isEmpty())
   {
       QMessageBox::information(this,"提示","对不起，请先确定要修改的对象和内容！");
       return;
   }
   else
   {
       QSqlDatabase db1 = QSqlDatabase::database("arsystem");
       QSqlQuery query(db1);
       query.exec(QString("update vedio set vedio_text='%1' where vedio_ID='%2';").arg(ui->textEdit->toPlainText()).arg(ui->label_vedioID->text()));
       QMessageBox::information(this,"提示","修改成功！");
       structure_Tree(ui->treeWidget);
       tableshow();
       return;
   }
}

void vedio_query::delete_vedio()
{
    if(ui->label_vedioID->text()=="")
    {
        QMessageBox::information(this,"提示","对不起，请先确定要删除的视频！");
        return;
    }
    else
    {
        QSqlDatabase db1 = QSqlDatabase::database("arsystem");
        QSqlQuery query(db1);
        query.exec(QString("delete from vedio where vedio_ID='%1';").arg(ui->label_vedioID->text()));
        QMessageBox::information(this,"提示","修改成功！");
        structure_Tree(ui->treeWidget);
        tableshow();
        return;
    }

}

vedio_query::~vedio_query()
{
    delete ui;
}
