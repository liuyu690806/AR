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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include <playerslider.h>

QT_BEGIN_NAMESPACE

class Ui_vedio_query
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
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
        vedio_query->resize(456, 313);
        pushButton = new QPushButton(vedio_query);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 140, 80, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        tableWidget = new QTableWidget(vedio_query);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem9);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(210, 170, 179, 99));
        groupBox = new QGroupBox(vedio_query);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(210, -10, 171, 141));
        groupBox->setFont(font);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        widget = new QWidget(vedio_query);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 280, 348, 27));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
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
        pushButton->setText(QApplication::translate("vedio_query", "\347\241\256\345\256\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("vedio_query", "\350\247\206\351\242\221\346\226\207\344\273\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("vedio_query", "\344\277\235\345\255\230\350\267\257\345\276\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("vedio_query", "\350\247\206\351\242\221\346\227\266\351\225\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("vedio_query", "\350\247\206\351\242\221\346\246\202\350\277\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("vedio_query", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("vedio_query", "2", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("vedio_query", "\345\207\217\351\200\237\345\231\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 1);
        ___qtablewidgetitem7->setText(QApplication::translate("vedio_query", "D:\\liuyu\\task", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 2);
        ___qtablewidgetitem8->setText(QApplication::translate("vedio_query", "13:14:00", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        groupBox->setTitle(QApplication::translate("vedio_query", "\350\247\206\351\242\221\346\246\202\350\277\260", nullptr));
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
