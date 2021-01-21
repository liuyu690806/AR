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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_maintenance_mask
{
public:
    QOpenGLWidget *openGLWidget;
    QGroupBox *gb_xr;
    QVBoxLayout *verticalLayout;
    QTabWidget *tab_addtag;
    QWidget *tab_tran;
    QWidget *tab_ro;
    QWidget *tab_addtext;
    QWidget *tab;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QListWidget *listWidget;
    QOpenGLWidget *openGLWidget_2;
    QTimeEdit *timeEdit;

    void setupUi(QWidget *maintenance_mask)
    {
        if (maintenance_mask->objectName().isEmpty())
            maintenance_mask->setObjectName(QString::fromUtf8("maintenance_mask"));
        maintenance_mask->resize(374, 300);
        openGLWidget = new QOpenGLWidget(maintenance_mask);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(-20, 20, 151, 231));
        gb_xr = new QGroupBox(maintenance_mask);
        gb_xr->setObjectName(QString::fromUtf8("gb_xr"));
        gb_xr->setGeometry(QRect(130, 132, 370, 351));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        gb_xr->setFont(font);
        verticalLayout = new QVBoxLayout(gb_xr);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tab_addtag = new QTabWidget(gb_xr);
        tab_addtag->setObjectName(QString::fromUtf8("tab_addtag"));
        tab_tran = new QWidget();
        tab_tran->setObjectName(QString::fromUtf8("tab_tran"));
        tab_addtag->addTab(tab_tran, QString());
        tab_ro = new QWidget();
        tab_ro->setObjectName(QString::fromUtf8("tab_ro"));
        tab_addtag->addTab(tab_ro, QString());
        tab_addtext = new QWidget();
        tab_addtext->setObjectName(QString::fromUtf8("tab_addtext"));
        tab_addtag->addTab(tab_addtext, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab_addtag->addTab(tab, QString());

        verticalLayout->addWidget(tab_addtag);

        widget = new QWidget(gb_xr);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget);

        listWidget = new QListWidget(gb_xr);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        openGLWidget_2 = new QOpenGLWidget(maintenance_mask);
        openGLWidget_2->setObjectName(QString::fromUtf8("openGLWidget_2"));
        openGLWidget_2->setGeometry(QRect(160, 20, 181, 91));
        timeEdit = new QTimeEdit(maintenance_mask);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(10, 270, 118, 22));

        retranslateUi(maintenance_mask);

        tab_addtag->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(maintenance_mask);
    } // setupUi

    void retranslateUi(QWidget *maintenance_mask)
    {
        maintenance_mask->setWindowTitle(QApplication::translate("maintenance_mask", "Form", nullptr));
        gb_xr->setTitle(QApplication::translate("maintenance_mask", "\346\270\262\346\237\223\350\256\276\347\275\256", nullptr));
        tab_addtag->setTabText(tab_addtag->indexOf(tab_tran), QApplication::translate("maintenance_mask", "\345\271\263\347\247\273", nullptr));
        tab_addtag->setTabText(tab_addtag->indexOf(tab_ro), QApplication::translate("maintenance_mask", "\346\227\213\350\275\254", nullptr));
        tab_addtag->setTabText(tab_addtag->indexOf(tab_addtext), QApplication::translate("maintenance_mask", "\346\226\207\345\255\227\346\240\207\350\256\260", nullptr));
        tab_addtag->setTabText(tab_addtag->indexOf(tab), QApplication::translate("maintenance_mask", "\347\254\246\345\217\267\346\267\273\345\212\240", nullptr));
        pushButton_2->setText(QApplication::translate("maintenance_mask", "\346\234\254\346\254\241\346\223\215\344\275\234\345\274\200\345\247\213", nullptr));
        pushButton->setText(QApplication::translate("maintenance_mask", "\346\234\254\346\254\241\346\223\215\344\275\234\347\273\223\346\235\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class maintenance_mask: public Ui_maintenance_mask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCE_MASK_H
