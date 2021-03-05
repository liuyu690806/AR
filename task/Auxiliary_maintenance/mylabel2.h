#ifndef MYLABEL2_H
#define MYLABEL2_H

#include <QWidget>
#include <QLabel>
//忘记密码标签
class Mylabel2 : public QLabel
{
    Q_OBJECT
public:
    explicit Mylabel2(QWidget *parent = nullptr);
    ~Mylabel2();

    void zoomdown();
    void zoomup();
protected:
    void mousePressEvent(QMouseEvent *ev);

signals:


public slots:
};

#endif // MYLABEL2_H
