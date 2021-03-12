#ifndef MYINTERFACE_H
#define MYINTERFACE_H

#include <QObject>

class Myinterface : public QObject
{
    Q_OBJECT
public:
    explicit Myinterface(QObject *parent = nullptr);
    ~Myinterface();
    enum Priority
      {
          sign_in,
          personal_inf,//个人信息
          user_management,//用户管理
          mask_management,//标记信息管理
          vedio_query,//视频查询
          vedio_clip,//视频剪辑
          maintenance_mask//维修标记
      };
      Q_ENUM(Priority)

signals:

public slots:
};

#endif // MYINTERFACE_H
