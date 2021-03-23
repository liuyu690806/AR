/********************************************************************************
** Form generated from reading UI file 'vedio_query.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEDIO_QUERY_H
#define UI_VEDIO_QUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include <mypushbutton1.h>
#include <playerslider.h>

QT_BEGIN_NAMESPACE

class Ui_vedio_query
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QTreeWidget *treeWidget;
    MyPushButton1 *btn_delete;
    QLabel *label_vedioID;
    QLabel *label_assenbly;
    QTableWidget *tableWidget;
    QTextEdit *textEdit;
    QLabel *label_2;
    MyPushButton1 *btn_modify;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *openBtn;
    QPushButton *stopBtn;
    QPushButton *play_pauseBtn;
    PlayerSlider *Slider1;

    void setupUi(QWidget *vedio_query)
    {
        if (vedio_query->objectName().isEmpty())
            vedio_query->setObjectName(QString::fromUtf8("vedio_query"));
        vedio_query->resize(915, 748);
        groupBox = new QGroupBox(vedio_query);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 30, 538, 524));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 3, 1, 1);

        treeWidget = new QTreeWidget(groupBox);
        treeWidget->headerItem()->setText(0, QString());
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        treeWidget->setFont(font1);

        gridLayout->addWidget(treeWidget, 0, 0, 4, 1);

        btn_delete = new MyPushButton1(groupBox);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));

        gridLayout->addWidget(btn_delete, 4, 0, 1, 1);

        label_vedioID = new QLabel(groupBox);
        label_vedioID->setObjectName(QString::fromUtf8("label_vedioID"));
        label_vedioID->setStyleSheet(QString::fromUtf8("color:blue;"));

        gridLayout->addWidget(label_vedioID, 2, 4, 1, 1);

        label_assenbly = new QLabel(groupBox);
        label_assenbly->setObjectName(QString::fromUtf8("label_assenbly"));
        label_assenbly->setStyleSheet(QString::fromUtf8("color:blue;"));

        gridLayout->addWidget(label_assenbly, 2, 2, 1, 1);

        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFont(font1);

        gridLayout->addWidget(tableWidget, 0, 1, 1, 4);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font2;
        font2.setPointSize(11);
        textEdit->setFont(font2);

        gridLayout->addWidget(textEdit, 3, 1, 1, 4);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        btn_modify = new MyPushButton1(groupBox);
        btn_modify->setObjectName(QString::fromUtf8("btn_modify"));
        btn_modify->setFont(font);

        gridLayout->addWidget(btn_modify, 4, 1, 1, 4);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 1, 4);

        widget = new QWidget(vedio_query);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 580, 731, 101));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        openBtn = new QPushButton(widget);
        openBtn->setObjectName(QString::fromUtf8("openBtn"));

        horizontalLayout->addWidget(openBtn);

        stopBtn = new QPushButton(widget);
        stopBtn->setObjectName(QString::fromUtf8("stopBtn"));

        horizontalLayout->addWidget(stopBtn);

        play_pauseBtn = new QPushButton(widget);
        play_pauseBtn->setObjectName(QString::fromUtf8("play_pauseBtn"));

        horizontalLayout->addWidget(play_pauseBtn);

        Slider1 = new PlayerSlider(widget);
        Slider1->setObjectName(QString::fromUtf8("Slider1"));
        Slider1->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(Slider1);


        retranslateUi(vedio_query);

        QMetaObject::connectSlotsByName(vedio_query);
    } // setupUi

    void retranslateUi(QWidget *vedio_query)
    {
        vedio_query->setWindowTitle(QApplication::translate("vedio_query", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("vedio_query", "\350\247\206\351\242\221\344\277\241\346\201\257", nullptr));
        label_4->setText(QApplication::translate("vedio_query", "\350\247\206\351\242\221ID:", nullptr));
        btn_delete->setText(QApplication::translate("vedio_query", "\345\210\240\351\231\244\350\247\206\351\242\221", nullptr));
        label_vedioID->setText(QString());
        label_assenbly->setText(QString());
        label_2->setText(QApplication::translate("vedio_query", "\350\243\205\351\205\215\344\275\223\357\274\232", nullptr));
        btn_modify->setText(QApplication::translate("vedio_query", "\346\246\202\350\277\260\344\277\256\346\224\271", nullptr));
        label->setText(QApplication::translate("vedio_query", "\350\247\206\351\242\221\346\246\202\350\277\260", nullptr));
        openBtn->setText(QApplication::translate("vedio_query", "\346\211\223\345\274\200", nullptr));
        stopBtn->setText(QApplication::translate("vedio_query", "\345\201\234\346\255\242", nullptr));
        play_pauseBtn->setText(QApplication::translate("vedio_query", "\346\222\255\346\224\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vedio_query: public Ui_vedio_query {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEDIO_QUERY_H
