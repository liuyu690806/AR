#include "sign_in.h"
#include <stdio.h>
#include <stdlib.h>
#include<QMutex>
#include<QDateTime>
#include<QFile>
#include<QTextStream>
#include<QFile>
#include<QMessageBox>


const bool bEnableDebugLog =  0; //是否启用日志输出
void WriteLine(QString logFileName,  QString logMessage)
{
    QFile file(logFileName);
    file.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream text_stream(&file);
    text_stream.setCodec("utf-8");
    text_stream << logMessage << "\r\n";
    file.flush();
    file.close();
}


 void Log(QString logFileName,  QString logMessage)
{
    static QMutex mutex;
    mutex.lock();

    if (bEnableDebugLog)
    {
         WriteLine(logFileName, logMessage);
    }

    mutex.unlock();
}


void outputMessage(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QString context_info = QString("File:(%1) Line:(%2)").arg(QString(context.file)).arg(context.line);
    QString current_date_time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd");
    QString current_date = QString("(%1)").arg(current_date_time);
    QString message;
    QString text;
    QString fileName;

    switch (type) {
    case QtDebugMsg:
        text = QString("log:");
        message = QString("%1 %2 %3 %4").arg(text).arg(context_info).arg(msg).arg(current_date);
        fileName = qApp->applicationDirPath()+"/log.txt";
        Log(fileName,message);
        break;
    case QtWarningMsg:
        break;
    case QtInfoMsg:
        break;
    case QtFatalMsg:
        break;
    case QtCriticalMsg:
        break;
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(bEnableDebugLog)
      {
          qInstallMessageHandler(outputMessage);
      }
    Sign_in w;
    w.show();

    return a.exec();
}
