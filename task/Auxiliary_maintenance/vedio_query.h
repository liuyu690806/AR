#ifndef VEDIO_QUERY_H
#define VEDIO_QUERY_H

#include <QWidget>
#include "playerslider.h"
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QMainWindow>
#include <QVideoWindowControl>
#include <QMediaPlayer>
#include <QFileDialog>
#include <QMediaPlaylist>
#include <QString>
#include <QVideoWidget>
#include <QStringList>
#include <QFile>
#include <QFileInfo>
#include <QDebug>

namespace Ui {
class vedio_query;
}

class vedio_query : public QWidget
{
    Q_OBJECT

public:
    explicit vedio_query(QWidget *parent = nullptr);
    ~vedio_query();
    //添加到播放列表
    void addToPlaylist(const QStringList& fileNames);
    //加载
    bool  m_bReLoad;


public slots:
    //设置进度条播放长度
    void OnSlider(qint64);
    //进度条播放时长改变
    void OnDurationChanged(qint64);

private slots:
    //打开文件
    void openBtn_clicked();
    //播放与暂停
    void play_pauseBtn_clicked();
    //停止
    void stopBtn_clicked();

   //void fullScr_clicked();

private:
    Ui::vedio_query *ui;

    //从源文件播放媒体。最常用的类，如果你想实现一个播放器，这会是你理想的内核。
    //它可以非常非常方便地播放指定的文件，并提供了很多设置和获取信息的接口。
    QMediaPlayer *player;
    //用来播放视频的控件，可以理解为是QMediaPlayer的一个输出端。
    QVideoWidget *videowidget;
    //它是一个封装好的列表类。储存着每一个媒体文件的信息，
    //并且提供了添加，删除，储存，读取媒体的方法，甚至是播放方式都可以指定，非常方便。
    QMediaPlaylist *Playlist;
    QString m_fileName;
    //枚举类型0，1，2
    QMediaPlayer::State m_playerState;
    //播放状态  true为播放，false为暂停
    bool play_state;

};

#endif // VEDIO_QUERY_H
