﻿#ifndef MAINTENANCE_MASK_H
#define MAINTENANCE_MASK_H

#include <QWidget>


#pragma execution_character_set("utf-8")
namespace Ui {
class maintenance_mask;
}

class maintenance_mask : public QWidget
{
    Q_OBJECT

public:
    explicit maintenance_mask(QWidget *parent = nullptr);
    ~maintenance_mask();
signals:
    //void is_opencamera();


private slots:
    //void on_btn_openCam_clicked();

private:
    Ui::maintenance_mask *ui;
};

#endif // MAINTENANCE_MASK_H
