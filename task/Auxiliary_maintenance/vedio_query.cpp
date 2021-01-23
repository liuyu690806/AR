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
   // ui->openGLWidget->move(0,5);
   // ui->openGLWidget->setFixedSize(1080,810);
    //进度条
    ui->widget->move(0,815);
    ui->widget->setFixedSize(1080,50);
    ui->play_pauseBtn->setFixedHeight(35);
    ui->openBtn->setFixedHeight(35);
    ui->stopBtn->setFixedHeight(35);

    //视频概述
    ui->groupBox->move(1150,5);
    ui->groupBox->setFixedSize(400,200);
    //按钮
    ui->pushButton->move(1270,220);
    ui->pushButton->setFixedSize(160,40);

    //数据库区
    ui->tableWidget->move(1150,280);
    ui->tableWidget->setFixedSize(400,160);
    //视频关系树
    ui->treeWidget->move(1150,440);
    ui->treeWidget->setFixedSize(400,420);
    ui->treeWidget->setHeaderLabels(QStringList()<<"维修项目");
    ui->treeWidget->setFont(QFont("微软雅黑",10,QFont::Bold));
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
    //videowidget->move(0,5);

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

vedio_query::~vedio_query()
{
    delete ui;
}
