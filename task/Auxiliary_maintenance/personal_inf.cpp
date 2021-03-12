#include "personal_inf.h"
#include "ui_personal_inf.h"
#include <QDesktopWidget>
#include <QDebug>
#include <QSqlDatabase>
#include "mypushbutton1.h"
#include <QApplication>
#pragma execution_character_set("utf-8")
personal_inf::personal_inf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::personal_inf)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    //setWindowFlags(Qt::FramelessWindowHint);//这边就是相当于直接将qt窗体默认的功能全部取消
    QDesktopWidget * desktopWidget=QApplication::desktop();
    QRect screenRect=desktopWidget->screenGeometry();
    this->setFixedSize(screenRect.width()-300,screenRect.height()/14*13);
    ui->boy->setParent(ui->gender);
    ui->girl->setParent(ui->gender);
    connect(this,SIGNAL(got_jobnum_per(QString)),this,SLOT(init_info(QString)));
    connect(ui->job,SIGNAL(clicked()),this,SLOT(warning_job()));
    connect(ui->sumbit,&MyPushButton1::clicked,[=](){
       // qDebug()<<"点击";
        ui->sumbit->zoomdown();
        ui->sumbit->zoomup();

        if(jobnum_per!="0")
        {
          modify_info();
        }
        else
        {
            apply_for();
        }

    });
}


void personal_inf::get_jobnum_per(QString str)
{
    jobnum_per=str;
   // qDebug()<<jobnum_per<<"+++";
   // qDebug()<<"个人信息"<<"+++";
    emit got_jobnum_per(jobnum_per);
}

//日期分解
QString personal_inf::date_breakdown(QString str)
{
    QString year=str.mid(0,4);
    int n_1=str.indexOf("/");
    int n_2=str.lastIndexOf("/");
    QString month=str.mid(n_1+1,n_2-1);
    QString day=str.mid(n_2+1);
    if(month.length()==1)
    {
        month="0"+month;
    }
    if(day.length()==1)
    {
        day="0"+day;
    }
    QString date=year+"-"+month+"-"+day;

    return date;
}

//初始化用户信息
void personal_inf::init_info(QString str)
{
    //job_num不为0即为已注册用户
    //qDebug()<<jobnum_per<<"初始化";
    if(str!="0")
    {
        QSqlDatabase db1 = QSqlDatabase::database("arsystem");
        QSqlQuery query(db1);
        QString str1=QString("select * from user_info where job_num = '%1';").arg(jobnum_per);
        query.exec(str1);
        //初始化
        if(query.first()){
            ui->name->setText(query.value("user_name").toString());
            ui->jobnum->setText(query.value("job_num").toString());
            ui->email->setText(query.value("email").toString());
            ui->phone->setText(query.value("phone").toString());
            ui->old_password->setText(query.value("pass_word").toString());
            if(query.value("gender").toString()=="男")
            {
                ui->boy->setChecked(1);
            }
            else {
                ui->girl->setChecked(1);
            }
            if(query.value("job").toString()=="维修员")
            {
               ui->job->setCurrentIndex(0);
            }
            else {
                ui->job->setCurrentIndex(1);
            }
            QDateTime datetime=QDateTime::fromString(query.value("joined_date").toString(),"yyyy-MM-dd");
            ui->joineddate->setDateTime(datetime);
            //权限无法修改
            QVariant v(0);
            ui->job->setItemData(0, v, Qt::UserRole - 1);
            ui->job->setItemData(1, v, Qt::UserRole - 1);
        }

    }
    else
    {
       qDebug()<<"申请账号";

    }
}

//修改信息
void personal_inf::modify_info()
{
  QSqlDatabase db2 = QSqlDatabase::database("arsystem");
  QSqlQuery query(db2);
  //新密码
  QString password_new;
  //
  QString name_new;
  //
  QString email_new;
  //
  QString phone_new;
  //
  QString gender_new;
  //
  QString job_num_new;
  //
  QString is_modify_pw =QString("select * from user_info where job_num = '%1';").arg(jobnum_per);
  query.exec(is_modify_pw);
  //qDebug()<<jobnum_per;
  if(query.first())
  {
      if(ui->old_password->text()!=query.value("pass_word").toString())
      {
         // qDebug()<<query.value("pass_word").toString();
          QMessageBox::warning(this,"警告","旧密码错误，请重新输入！");
          return;
      }
      else {
          if(ui->new_password->text()!="")
          {
             password_new=ui->new_password->text();
          }
          else
          {
              password_new=query.value("pass_word").toString();
          }

      }
      //姓名
      if(ui->name->text()!="")
      {
          name_new=ui->name->text();
      }
      else
      {
          name_new=query.value("user_name").toString();
      }
      //工号
      if(ui->jobnum->text()!="")
      {
          job_num_new=ui->jobnum->text();
      }
      else
      {
          job_num_new=query.value("job_num").toString();
      }
      //邮箱
      if(ui->email->text()!="")
      {
          email_new=ui->email->text();
      }
      else
      {
          email_new=query.value("email").toString();
      }
      //电话
      if(ui->phone->text()!="")
      {
          phone_new=ui->phone->text();
      }
      else
      {
          phone_new=query.value("phone").toString();
      }
      //性别
      if(ui->boy->isChecked())
      {
          gender_new="男";
      }
      else
      {
           gender_new="女";
      }

  }
  QString date_new=date_breakdown(ui->joineddate->text());
  QString modify1=QString("update user_info set user_name = '%1',joined_date = '%2',gender= '%3',email = '%4',phone = '%5',pass_word = '%6' where job_num = '%7';").arg(name_new).arg(date_new)\
          .arg(gender_new).arg(email_new).arg(phone_new).arg(password_new).arg(jobnum_per);
  //qDebug()<<modify1;
  query.exec(modify1);
  qDebug()<<jobnum_per<<"修改个人信息";
  QString modify2=QString("update user_info set job_num = '%1'where job_num = '%2';").arg(job_num_new).arg(jobnum_per);
  query.exec(modify2);
  QMessageBox::information(this,"提示","已修改完毕！");
  jobnum_per=job_num_new;
  emit modify_singal(job_num_new);
  init_info(job_num_new);
  ui->new_password->setText("");
}

//申请账号
void personal_inf::apply_for()
{
    //新密码
    QString password_new;
    //
    QString name_new;
    //
    QString email_new;
    //
    QString phone_new;
    //
    QString gender_new;
    //
    QString job_num_new;
    QString job_name_new;
    QString date_new;
    if(ui->name->text()==""||ui->jobnum->text()==""||ui->phone->text()=="")
    {
        QMessageBox::information(this,"提示","请确保姓名、工号、电话等信息填写完整！");
        return;
    }
    else
    {
        //密码
        if((ui->old_password->text()!="")&&(ui->old_password->text()!="000000"))
        {
            //qDebug()<<ui->old_password->text()<<"旧密码";
            QMessageBox::information(this,"提示","旧密码错误，请正确填写！");
            return;
        }

        //邮箱
        if(ui->email->text()=="")
        {
            ui->email->setText("NULL");
            email_new=ui->email->text();
        }
        else
        {
            email_new=ui->email->text();
        }

        name_new=ui->name->text();
        job_num_new=ui->jobnum->text();
        phone_new=ui->phone->text();
        if(ui->new_password->text()=="")
        {
          password_new="000000";
        }
        else
        {
          password_new=ui->new_password->text();
        }

        if(ui->boy->isChecked())
        {
            gender_new="男";
        }
        else
        {
             gender_new="女";
        }
        date_new=date_breakdown(ui->joineddate->text());
        //qDebug()<<ui->job->currentText()<<"选中";
        job_name_new=ui->job->currentText();
    }
    QSqlDatabase db2 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db2);
    QString insert_into=QString("insert into user_info set user_name = '%1',joined_date = '%2',gender= '%3',email = '%4',phone = '%5',pass_word = '%6',job_num = '%7',job = '%8';").arg(name_new).arg(date_new)\
            .arg(gender_new).arg(email_new).arg(phone_new).arg(password_new).arg(job_num_new).arg(job_name_new);
    query.exec(insert_into);
    QMessageBox::information(this,"提示","信息添加成功，请重新登录!");
    qDebug()<<"姓名:"<<name_new<<"工号:"<<job_num_new<<"成功申请账号";
    this->close();
    qApp->quit();

}

void personal_inf::warning_job()
{
    if(jobnum_per!="0")
    {
        QMessageBox::warning(this,"警告","权限信息请联系管理员修改！");
    }
}

personal_inf::~personal_inf()
{
    delete ui;
}
