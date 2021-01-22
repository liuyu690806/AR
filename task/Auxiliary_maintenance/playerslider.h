#ifndef PLAYERSLIDER_H
#define PLAYERSLIDER_H

#include <QWidget>
#include <QSlider>

class PlayerSlider : public QSlider
{
    Q_OBJECT
public:
    explicit PlayerSlider(QWidget *parent = 0);
    //保存滑块的当前值，更改该值也会更改滑块位置。
    void setProgress(qint64);

protected:
    //重定义Slider鼠标事件
    void        mousePressEvent(QMouseEvent *);
    void        mouseMoveEvent(QMouseEvent *);
    void        mouseReleaseEvent(QMouseEvent *);


signals:
    void        sigProgress(qint64);

private:
    //滑块是否按下
    bool        m_bPressed;
public slots:
};

#endif // PLAYERSLIDER_H
