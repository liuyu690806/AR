#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H

#include <QWidget>
#include <QComboBox>
#include <QMouseEvent>

class MyComboBox : public QComboBox
{
    Q_OBJECT
public:
    explicit MyComboBox(QWidget *parent = nullptr);
    ~MyComboBox();

protected:
    virtual void mousePressEvent(QMouseEvent *e);  //添加鼠标点击事件

signals:
    void clicked();  //自定义点击信号，在mousePressEvent事件发生时触发

public slots:

};

#endif // MYCOMBOBOX_H
