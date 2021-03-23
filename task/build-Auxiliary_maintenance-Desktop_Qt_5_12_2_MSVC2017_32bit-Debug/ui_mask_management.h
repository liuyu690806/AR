/********************************************************************************
** Form generated from reading UI file 'mask_management.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASK_MANAGEMENT_H
#define UI_MASK_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mycombobox.h>
#include <mypushbutton1.h>

QT_BEGIN_NAMESPACE

class Ui_mask_management
{
public:
    QTreeWidget *treeWidget;
    QGroupBox *gb_info;
    QVBoxLayout *verticalLayout;
    QWidget *widget_7;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    MyComboBox *parts_type;
    QLineEdit *LE_procedure_name;
    QLineEdit *LE_parts_name;
    QLineEdit *LE_assembly_name;
    MyPushButton1 *btn_search_create;
    MyComboBox *procedure_type;
    MyPushButton1 *btn_add;
    MyPushButton1 *btn_delete;
    QGroupBox *gb_text;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QTextEdit *text_info;
    QLabel *produce;
    MyPushButton1 *btn_modify_text;
    QLabel *parts;
    QLabel *assembly;
    QGroupBox *gb_other;
    QGridLayout *gridLayout_5;
    QLabel *LB_image;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *LE_file_path;
    MyPushButton1 *btn_choosefile;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    MyPushButton1 *btn_search_create_2;
    QLineEdit *LE_spa_img_name;
    QComboBox *info_type;
    QComboBox *number;
    MyPushButton1 *btn_add_2;
    MyPushButton1 *btn_delete_2;
    QGroupBox *gb_show_info;
    QGridLayout *gridLayout_7;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QRadioButton *rb_part;
    QRadioButton *rb_produce;
    QRadioButton *rb_spare;
    MyPushButton1 *btn_ok;
    QTableWidget *tableWidget;

    void setupUi(QWidget *mask_management)
    {
        if (mask_management->objectName().isEmpty())
            mask_management->setObjectName(QString::fromUtf8("mask_management"));
        mask_management->resize(1056, 777);
        treeWidget = new QTreeWidget(mask_management);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(40, 70, 256, 192));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        treeWidget->setFont(font);
        gb_info = new QGroupBox(mask_management);
        gb_info->setObjectName(QString::fromUtf8("gb_info"));
        gb_info->setGeometry(QRect(470, 60, 371, 611));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gb_info->sizePolicy().hasHeightForWidth());
        gb_info->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        gb_info->setFont(font1);
        verticalLayout = new QVBoxLayout(gb_info);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_7 = new QWidget(gb_info);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(widget_7);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(widget_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        parts_type = new MyComboBox(widget_7);
        parts_type->addItem(QString());
        parts_type->setObjectName(QString::fromUtf8("parts_type"));

        gridLayout_4->addWidget(parts_type, 1, 0, 1, 2);

        LE_procedure_name = new QLineEdit(widget_7);
        LE_procedure_name->setObjectName(QString::fromUtf8("LE_procedure_name"));

        gridLayout_4->addWidget(LE_procedure_name, 2, 2, 1, 1);

        LE_parts_name = new QLineEdit(widget_7);
        LE_parts_name->setObjectName(QString::fromUtf8("LE_parts_name"));

        gridLayout_4->addWidget(LE_parts_name, 1, 2, 1, 1);

        LE_assembly_name = new QLineEdit(widget_7);
        LE_assembly_name->setObjectName(QString::fromUtf8("LE_assembly_name"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LE_assembly_name->sizePolicy().hasHeightForWidth());
        LE_assembly_name->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(LE_assembly_name, 0, 1, 1, 2);

        btn_search_create = new MyPushButton1(widget_7);
        btn_search_create->setObjectName(QString::fromUtf8("btn_search_create"));
        sizePolicy1.setHeightForWidth(btn_search_create->sizePolicy().hasHeightForWidth());
        btn_search_create->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(btn_search_create, 0, 3, 1, 1);

        procedure_type = new MyComboBox(widget_7);
        procedure_type->addItem(QString());
        procedure_type->addItem(QString());
        procedure_type->setObjectName(QString::fromUtf8("procedure_type"));

        gridLayout_4->addWidget(procedure_type, 2, 0, 1, 2);

        btn_add = new MyPushButton1(widget_7);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        sizePolicy1.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(btn_add, 1, 3, 1, 1);

        btn_delete = new MyPushButton1(widget_7);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        sizePolicy1.setHeightForWidth(btn_delete->sizePolicy().hasHeightForWidth());
        btn_delete->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(btn_delete, 2, 3, 1, 1);


        verticalLayout->addWidget(widget_7);

        gb_text = new QGroupBox(gb_info);
        gb_text->setObjectName(QString::fromUtf8("gb_text"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(gb_text->sizePolicy().hasHeightForWidth());
        gb_text->setSizePolicy(sizePolicy3);
        gb_text->setFont(font1);
        gridLayout_2 = new QGridLayout(gb_text);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(gb_text);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 6, 1, 1);

        label_4 = new QLabel(gb_text);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 3, 1, 1);

        label = new QLabel(gb_text);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        text_info = new QTextEdit(gb_text);
        text_info->setObjectName(QString::fromUtf8("text_info"));

        gridLayout_2->addWidget(text_info, 1, 0, 1, 11);

        produce = new QLabel(gb_text);
        produce->setObjectName(QString::fromUtf8("produce"));
        produce->setFont(font1);
        produce->setStyleSheet(QString::fromUtf8("color:blue;"));

        gridLayout_2->addWidget(produce, 0, 7, 1, 1);

        btn_modify_text = new MyPushButton1(gb_text);
        btn_modify_text->setObjectName(QString::fromUtf8("btn_modify_text"));
        sizePolicy1.setHeightForWidth(btn_modify_text->sizePolicy().hasHeightForWidth());
        btn_modify_text->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(btn_modify_text, 0, 10, 1, 1);

        parts = new QLabel(gb_text);
        parts->setObjectName(QString::fromUtf8("parts"));
        parts->setFont(font1);
        parts->setStyleSheet(QString::fromUtf8("color:blue;"));

        gridLayout_2->addWidget(parts, 0, 4, 1, 1);

        assembly = new QLabel(gb_text);
        assembly->setObjectName(QString::fromUtf8("assembly"));
        assembly->setFont(font1);
        assembly->setStyleSheet(QString::fromUtf8("color:blue;"));

        gridLayout_2->addWidget(assembly, 0, 1, 1, 1);


        verticalLayout->addWidget(gb_text);

        gb_other = new QGroupBox(gb_info);
        gb_other->setObjectName(QString::fromUtf8("gb_other"));
        sizePolicy3.setHeightForWidth(gb_other->sizePolicy().hasHeightForWidth());
        gb_other->setSizePolicy(sizePolicy3);
        gb_other->setFont(font1);
        gridLayout_5 = new QGridLayout(gb_other);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        LB_image = new QLabel(gb_other);
        LB_image->setObjectName(QString::fromUtf8("LB_image"));
        sizePolicy3.setHeightForWidth(LB_image->sizePolicy().hasHeightForWidth());
        LB_image->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(LB_image, 1, 0, 1, 1);

        widget = new QWidget(gb_other);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LE_file_path = new QLineEdit(widget);
        LE_file_path->setObjectName(QString::fromUtf8("LE_file_path"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(LE_file_path->sizePolicy().hasHeightForWidth());
        LE_file_path->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(LE_file_path, 1, 0, 1, 1);

        btn_choosefile = new MyPushButton1(widget);
        btn_choosefile->setObjectName(QString::fromUtf8("btn_choosefile"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(btn_choosefile->sizePolicy().hasHeightForWidth());
        btn_choosefile->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(btn_choosefile, 1, 1, 1, 1);


        gridLayout_5->addWidget(widget, 2, 0, 1, 1);

        widget_2 = new QWidget(gb_other);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy7);
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btn_search_create_2 = new MyPushButton1(widget_2);
        btn_search_create_2->setObjectName(QString::fromUtf8("btn_search_create_2"));

        gridLayout_3->addWidget(btn_search_create_2, 0, 3, 1, 1);

        LE_spa_img_name = new QLineEdit(widget_2);
        LE_spa_img_name->setObjectName(QString::fromUtf8("LE_spa_img_name"));

        gridLayout_3->addWidget(LE_spa_img_name, 0, 2, 1, 1);

        info_type = new QComboBox(widget_2);
        info_type->addItem(QString());
        info_type->addItem(QString());
        info_type->setObjectName(QString::fromUtf8("info_type"));
        sizePolicy.setHeightForWidth(info_type->sizePolicy().hasHeightForWidth());
        info_type->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(info_type, 0, 0, 1, 1);

        number = new QComboBox(widget_2);
        number->addItem(QString());
        number->addItem(QString());
        number->addItem(QString());
        number->setObjectName(QString::fromUtf8("number"));

        gridLayout_3->addWidget(number, 0, 1, 1, 1);

        btn_add_2 = new MyPushButton1(widget_2);
        btn_add_2->setObjectName(QString::fromUtf8("btn_add_2"));

        gridLayout_3->addWidget(btn_add_2, 0, 4, 1, 1);

        btn_delete_2 = new MyPushButton1(widget_2);
        btn_delete_2->setObjectName(QString::fromUtf8("btn_delete_2"));

        gridLayout_3->addWidget(btn_delete_2, 0, 5, 1, 1);


        gridLayout_5->addWidget(widget_2, 0, 0, 1, 1);


        verticalLayout->addWidget(gb_other);

        gb_show_info = new QGroupBox(mask_management);
        gb_show_info->setObjectName(QString::fromUtf8("gb_show_info"));
        gb_show_info->setGeometry(QRect(30, 391, 241, 181));
        sizePolicy3.setHeightForWidth(gb_show_info->sizePolicy().hasHeightForWidth());
        gb_show_info->setSizePolicy(sizePolicy3);
        gb_show_info->setFont(font1);
        gridLayout_7 = new QGridLayout(gb_show_info);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        widget_5 = new QWidget(gb_show_info);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout = new QHBoxLayout(widget_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        rb_part = new QRadioButton(widget_5);
        rb_part->setObjectName(QString::fromUtf8("rb_part"));

        horizontalLayout->addWidget(rb_part);

        rb_produce = new QRadioButton(widget_5);
        rb_produce->setObjectName(QString::fromUtf8("rb_produce"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(rb_produce->sizePolicy().hasHeightForWidth());
        rb_produce->setSizePolicy(sizePolicy8);

        horizontalLayout->addWidget(rb_produce);

        rb_spare = new QRadioButton(widget_5);
        rb_spare->setObjectName(QString::fromUtf8("rb_spare"));

        horizontalLayout->addWidget(rb_spare);

        btn_ok = new MyPushButton1(widget_5);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        sizePolicy1.setHeightForWidth(btn_ok->sizePolicy().hasHeightForWidth());
        btn_ok->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btn_ok);


        gridLayout_7->addWidget(widget_5, 0, 0, 1, 1);

        tableWidget = new QTableWidget(gb_show_info);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        tableWidget->setFont(font2);

        gridLayout_7->addWidget(tableWidget, 1, 0, 1, 1);


        retranslateUi(mask_management);

        QMetaObject::connectSlotsByName(mask_management);
    } // setupUi

    void retranslateUi(QWidget *mask_management)
    {
        mask_management->setWindowTitle(QApplication::translate("mask_management", "Form", nullptr));
        gb_info->setTitle(QApplication::translate("mask_management", "\344\277\241\346\201\257\345\275\225\345\205\245", nullptr));
        label_2->setText(QApplication::translate("mask_management", "\350\243\205\351\205\215\344\275\223\357\274\232", nullptr));
        parts_type->setItemText(0, QApplication::translate("mask_management", "\351\203\250\344\273\2661", nullptr));

        btn_search_create->setText(QApplication::translate("mask_management", "\346\220\234\347\264\242/\345\210\233\345\273\272", nullptr));
        procedure_type->setItemText(0, QApplication::translate("mask_management", "\345\267\245\345\272\2171", nullptr));
        procedure_type->setItemText(1, QApplication::translate("mask_management", "\345\267\245\345\272\2172", nullptr));

        btn_add->setText(QApplication::translate("mask_management", "\346\267\273\345\212\240", nullptr));
        btn_delete->setText(QApplication::translate("mask_management", "\345\210\240\351\231\244", nullptr));
        gb_text->setTitle(QApplication::translate("mask_management", "\345\267\245\350\211\272\346\226\207\346\234\254\344\277\241\346\201\257\345\275\225\345\205\245:", nullptr));
        label_3->setText(QApplication::translate("mask_management", "\345\267\245\345\272\217\357\274\232", nullptr));
        label_4->setText(QApplication::translate("mask_management", "\351\203\250\344\273\266\357\274\232", nullptr));
        label->setText(QApplication::translate("mask_management", "\350\243\205\351\205\215\344\275\223\357\274\232", nullptr));
        produce->setText(QString());
        btn_modify_text->setText(QApplication::translate("mask_management", "\346\226\207\346\234\254\344\277\256\346\224\271", nullptr));
        parts->setText(QString());
        assembly->setText(QString());
        gb_other->setTitle(QApplication::translate("mask_management", "\345\205\266\344\273\226\344\277\241\346\201\257\345\275\225\345\205\245:", nullptr));
        LB_image->setText(QString());
        btn_choosefile->setText(QApplication::translate("mask_management", "\351\200\211\345\217\226\346\226\207\344\273\266", nullptr));
        btn_search_create_2->setText(QApplication::translate("mask_management", "\346\220\234\347\264\242/\345\210\233\345\273\272", nullptr));
        info_type->setItemText(0, QApplication::translate("mask_management", "\345\233\276\347\211\207\344\277\241\346\201\257", nullptr));
        info_type->setItemText(1, QApplication::translate("mask_management", "\351\233\266\344\273\266\344\277\241\346\201\257", nullptr));

        number->setItemText(0, QApplication::translate("mask_management", "\347\274\226\345\217\2671", nullptr));
        number->setItemText(1, QApplication::translate("mask_management", "\347\274\226\345\217\2672", nullptr));
        number->setItemText(2, QApplication::translate("mask_management", "\347\274\226\345\217\2673", nullptr));

        btn_add_2->setText(QApplication::translate("mask_management", "\346\267\273\345\212\240", nullptr));
        btn_delete_2->setText(QApplication::translate("mask_management", "\345\210\240\351\231\244", nullptr));
        gb_show_info->setTitle(QApplication::translate("mask_management", "\344\277\241\346\201\257\350\241\250", nullptr));
        label_8->setText(QApplication::translate("mask_management", "\346\237\245\350\257\242\346\226\271\345\274\217\357\274\232", nullptr));
        rb_part->setText(QApplication::translate("mask_management", "\351\203\250\344\273\266\344\277\241\346\201\257", nullptr));
        rb_produce->setText(QApplication::translate("mask_management", "\345\267\245\345\272\217\344\277\241\346\201\257", nullptr));
        rb_spare->setText(QApplication::translate("mask_management", "\351\233\266\344\273\266/\345\233\276\347\211\207\344\277\241\346\201\257", nullptr));
        btn_ok->setText(QApplication::translate("mask_management", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mask_management: public Ui_mask_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASK_MANAGEMENT_H
