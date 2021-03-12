/********************************************************************************
** Form generated from reading UI file 'mainscence.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCENCE_H
#define UI_MAINSCENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainscence
{
public:
    QAction *actionvedio;
    QAction *actionsave;
    QAction *actionclose;
    QAction *actioncontact;
    QAction *actionrizhi;
    QWidget *centralwidget;
    QLabel *lab_title;
    QWidget *widget_left;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QLabel *label_recent;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainscence)
    {
        if (mainscence->objectName().isEmpty())
            mainscence->setObjectName(QString::fromUtf8("mainscence"));
        mainscence->resize(800, 600);
        actionvedio = new QAction(mainscence);
        actionvedio->setObjectName(QString::fromUtf8("actionvedio"));
        actionsave = new QAction(mainscence);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        actionclose = new QAction(mainscence);
        actionclose->setObjectName(QString::fromUtf8("actionclose"));
        actioncontact = new QAction(mainscence);
        actioncontact->setObjectName(QString::fromUtf8("actioncontact"));
        actionrizhi = new QAction(mainscence);
        actionrizhi->setObjectName(QString::fromUtf8("actionrizhi"));
        centralwidget = new QWidget(mainscence);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lab_title = new QLabel(centralwidget);
        lab_title->setObjectName(QString::fromUtf8("lab_title"));
        lab_title->setGeometry(QRect(110, 0, 321, 31));
        lab_title->setFrameShape(QFrame::StyledPanel);
        lab_title->setAlignment(Qt::AlignCenter);
        widget_left = new QWidget(centralwidget);
        widget_left->setObjectName(QString::fromUtf8("widget_left"));
        widget_left->setGeometry(QRect(0, 0, 111, 291));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_left->sizePolicy().hasHeightForWidth());
        widget_left->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(widget_left);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(widget_left);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        treeWidget->setFont(font);

        verticalLayout->addWidget(treeWidget);

        label_recent = new QLabel(widget_left);
        label_recent->setObjectName(QString::fromUtf8("label_recent"));
        label_recent->setFrameShape(QFrame::StyledPanel);

        verticalLayout->addWidget(label_recent);

        listWidget = new QListWidget(widget_left);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        listWidget->setFont(font1);

        verticalLayout->addWidget(listWidget);

        mainscence->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainscence);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        mainscence->setMenuBar(menubar);
        statusbar = new QStatusBar(mainscence);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainscence->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionvedio);
        menu->addSeparator();
        menu->addAction(actionsave);
        menu->addSeparator();
        menu->addSeparator();
        menu->addAction(actionrizhi);
        menu->addSeparator();
        menu->addAction(actionclose);
        menu_2->addAction(actioncontact);

        retranslateUi(mainscence);

        QMetaObject::connectSlotsByName(mainscence);
    } // setupUi

    void retranslateUi(QMainWindow *mainscence)
    {
        mainscence->setWindowTitle(QApplication::translate("mainscence", "MainWindow", nullptr));
        actionvedio->setText(QApplication::translate("mainscence", "\346\211\223\345\274\200\350\247\206\351\242\221", nullptr));
        actionsave->setText(QApplication::translate("mainscence", "\344\277\235\345\255\230\346\211\200\346\234\211\346\226\207\344\273\266", nullptr));
        actionclose->setText(QApplication::translate("mainscence", "\351\200\200\345\207\272", nullptr));
        actioncontact->setText(QApplication::translate("mainscence", "\350\201\224\347\263\273\346\210\221\344\273\254", nullptr));
        actionrizhi->setText(QApplication::translate("mainscence", "\346\227\245\345\277\227", nullptr));
        lab_title->setText(QApplication::translate("mainscence", "TextLabel", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("mainscence", "1", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("mainscence", "\347\263\273\347\273\237\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("mainscence", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("mainscence", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("mainscence", "\346\240\207\350\256\260\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem5->setText(0, QApplication::translate("mainscence", "\347\244\272\346\225\231\350\247\206\351\242\221\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("mainscence", "\350\247\206\351\242\221\346\237\245\350\257\242", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("mainscence", "\350\247\206\351\242\221\345\211\252\350\276\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem8->setText(0, QApplication::translate("mainscence", "\347\273\264\344\277\256\346\240\207\350\256\260", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        label_recent->setText(QApplication::translate("mainscence", "\346\234\200\350\277\221\347\273\264\344\277\256\350\247\206\351\242\221", nullptr));

        const bool __sortingEnabled1 = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("mainscence", "\345\207\217\351\200\237\345\231\250\347\273\264\344\277\256             2020.12.21", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("mainscence", "\345\217\221\345\260\204\345\215\225\345\205\203\347\273\264\344\277\256          2020.12.30", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled1);

        menu->setTitle(QApplication::translate("mainscence", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("mainscence", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainscence: public Ui_mainscence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCENCE_H
