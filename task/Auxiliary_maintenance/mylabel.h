#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>
//申请账号标签
class Mylabel : public QLabel
{
    Q_OBJECT
public:
    explicit Mylabel(QWidget *parent = nullptr);
    //构造函数
    ~Mylabel();

    void zoomdown();
    void zoomup();
protected:
    void mousePressEvent(QMouseEvent *ev);

signals:
    void Afor_an_accout();

public slots:

private:


};

#endif // MYLABEL_H
