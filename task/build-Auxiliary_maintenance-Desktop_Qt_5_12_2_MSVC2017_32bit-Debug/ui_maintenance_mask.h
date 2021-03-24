/********************************************************************************
** Form generated from reading UI file 'maintenance_mask.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTENANCE_MASK_H
#define UI_MAINTENANCE_MASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <myopengl.h>

QT_BEGIN_NAMESPACE

class Ui_maintenance_mask
{
public:
    QTimeEdit *timeEdit;
    myopengl *widget_vedio;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *label_2;
    QSlider *verticalSlider;
    QLabel *label;
    QSlider *verticalSlider_2;
    QSlider *verticalSlider_3;
    QWidget *widget_model;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *gb_xuanran;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_start;
    QPushButton *btn_stop;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_vedio_info;
    QGridLayout *gridLayout;
    QLabel *LB_assembly;
    QLabel *LB_assembly_name;
    QLabel *LB_vedio_name;
    QLineEdit *LE_vedio_name;
    QTextEdit *textEdit;
    QPushButton *btn_submit;
    QTreeWidget *treeWidget;
    QPushButton *btn_openCam;

    void setupUi(QWidget *maintenance_mask)
    {
        if (maintenance_mask->objectName().isEmpty())
            maintenance_mask->setObjectName(QString::fromUtf8("maintenance_mask"));
        maintenance_mask->resize(1114, 835);
        timeEdit = new QTimeEdit(maintenance_mask);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(50, 580, 118, 22));
        widget_vedio = new myopengl(maintenance_mask);
        widget_vedio->setObjectName(QString::fromUtf8("widget_vedio"));
        widget_vedio->setGeometry(QRect(80, 10, 211, 531));
        verticalLayoutWidget_5 = new QWidget(maintenance_mask);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(410, 332, 542, 465));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 1, 3, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 1, 1, 1, 1);

        verticalSlider = new QSlider(verticalLayoutWidget_5);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider, 0, 1, 1, 1);

        label = new QLabel(verticalLayoutWidget_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 1, 2, 1, 1);

        verticalSlider_2 = new QSlider(verticalLayoutWidget_5);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider_2, 0, 2, 1, 1);

        verticalSlider_3 = new QSlider(verticalLayoutWidget_5);
        verticalSlider_3->setObjectName(QString::fromUtf8("verticalSlider_3"));
        verticalSlider_3->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider_3, 0, 3, 1, 1);

        widget_model = new QWidget(verticalLayoutWidget_5);
        widget_model->setObjectName(QString::fromUtf8("widget_model"));

        gridLayout_3->addWidget(widget_model, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        verticalLayout_5->addLayout(verticalLayout_3);

        gb_xuanran = new QGroupBox(verticalLayoutWidget_5);
        gb_xuanran->setObjectName(QString::fromUtf8("gb_xuanran"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        gb_xuanran->setFont(font1);
        gridLayout_2 = new QGridLayout(gb_xuanran);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(gb_xuanran);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_start = new QPushButton(gb_xuanran);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_start->sizePolicy().hasHeightForWidth());
        btn_start->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(btn_start);

        btn_stop = new QPushButton(gb_xuanran);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        sizePolicy.setHeightForWidth(btn_stop->sizePolicy().hasHeightForWidth());
        btn_stop->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(btn_stop);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 2, 2);

        widget = new QWidget(gb_xuanran);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout_2->addWidget(widget, 1, 1, 1, 1);


        verticalLayout_5->addWidget(gb_xuanran);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gb_vedio_info = new QGroupBox(verticalLayoutWidget_5);
        gb_vedio_info->setObjectName(QString::fromUtf8("gb_vedio_info"));
        gb_vedio_info->setFont(font1);
        gridLayout = new QGridLayout(gb_vedio_info);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LB_assembly = new QLabel(gb_vedio_info);
        LB_assembly->setObjectName(QString::fromUtf8("LB_assembly"));

        gridLayout->addWidget(LB_assembly, 0, 1, 1, 1);

        LB_assembly_name = new QLabel(gb_vedio_info);
        LB_assembly_name->setObjectName(QString::fromUtf8("LB_assembly_name"));

        gridLayout->addWidget(LB_assembly_name, 0, 2, 1, 1);

        LB_vedio_name = new QLabel(gb_vedio_info);
        LB_vedio_name->setObjectName(QString::fromUtf8("LB_vedio_name"));

        gridLayout->addWidget(LB_vedio_name, 1, 1, 1, 1);

        LE_vedio_name = new QLineEdit(gb_vedio_info);
        LE_vedio_name->setObjectName(QString::fromUtf8("LE_vedio_name"));

        gridLayout->addWidget(LE_vedio_name, 1, 2, 1, 1);

        textEdit = new QTextEdit(gb_vedio_info);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 2, 1, 1, 2);

        btn_submit = new QPushButton(gb_vedio_info);
        btn_submit->setObjectName(QString::fromUtf8("btn_submit"));

        gridLayout->addWidget(btn_submit, 3, 1, 1, 2);

        treeWidget = new QTreeWidget(gb_vedio_info);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(treeWidget, 0, 0, 4, 1);


        verticalLayout_2->addWidget(gb_vedio_info);


        verticalLayout_5->addLayout(verticalLayout_2);

        btn_openCam = new QPushButton(maintenance_mask);
        btn_openCam->setObjectName(QString::fromUtf8("btn_openCam"));
        btn_openCam->setGeometry(QRect(0, 740, 93, 28));

        retranslateUi(maintenance_mask);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(maintenance_mask);
    } // setupUi

    void retranslateUi(QWidget *maintenance_mask)
    {
        maintenance_mask->setWindowTitle(QApplication::translate("maintenance_mask", "Form", nullptr));
        label_3->setText(QApplication::translate("maintenance_mask", "z", nullptr));
        label_2->setText(QApplication::translate("maintenance_mask", "x", nullptr));
        label->setText(QApplication::translate("maintenance_mask", "y", nullptr));
        gb_xuanran->setTitle(QApplication::translate("maintenance_mask", "\346\270\262\346\237\223\350\256\276\347\275\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("maintenance_mask", "  \344\275\215\347\275\256\345\217\230\346\215\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("maintenance_mask", "\346\226\207\346\234\254\346\267\273\345\212\240", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("maintenance_mask", "\345\233\276\347\211\207\346\267\273\345\212\240", nullptr));
        btn_start->setText(QApplication::translate("maintenance_mask", "\346\234\254\346\254\241\346\223\215\344\275\234\345\274\200\345\247\213", nullptr));
        btn_stop->setText(QApplication::translate("maintenance_mask", "\346\234\254\346\254\241\346\223\215\344\275\234\347\273\223\346\235\237", nullptr));
        gb_vedio_info->setTitle(QApplication::translate("maintenance_mask", " \350\247\206\351\242\221\344\277\241\346\201\257\345\275\225\345\205\245", nullptr));
        LB_assembly->setText(QApplication::translate("maintenance_mask", "\350\243\205\351\205\215\344\275\223\357\274\232", nullptr));
        LB_assembly_name->setText(QString());
        LB_vedio_name->setText(QApplication::translate("maintenance_mask", "\350\247\206\351\242\221\345\220\215\347\247\260\357\274\232", nullptr));
        btn_submit->setText(QApplication::translate("maintenance_mask", "  \346\217\220\344\272\244", nullptr));
        btn_openCam->setText(QApplication::translate("maintenance_mask", " \345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class maintenance_mask: public Ui_maintenance_mask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCE_MASK_H
