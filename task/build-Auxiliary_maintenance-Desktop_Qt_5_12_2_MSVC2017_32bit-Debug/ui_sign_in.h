/********************************************************************************
** Form generated from reading UI file 'sign_in.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_IN_H
#define UI_SIGN_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <mylabel.h>
#include <mylabel2.h>

QT_BEGIN_NAMESPACE

class Ui_Sign_in
{
public:
    QAction *actionlxwm;
    QAction *actionlx;
    QAction *actionlx_2;
    QAction *actionlianxi;
    QWidget *centralWidget;
    QWidget *wid_password;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *job_id;
    QLabel *label_password;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *password;
    QLabel *label_user;
    QWidget *wid_sq;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    Mylabel *label_sq;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_5;
    Mylabel2 *label_wj;
    QSpacerItem *horizontalSpacer_7;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *Sign_in)
    {
        if (Sign_in->objectName().isEmpty())
            Sign_in->setObjectName(QString::fromUtf8("Sign_in"));
        Sign_in->resize(390, 339);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        Sign_in->setFont(font);
        actionlxwm = new QAction(Sign_in);
        actionlxwm->setObjectName(QString::fromUtf8("actionlxwm"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        actionlxwm->setFont(font1);
        actionlx = new QAction(Sign_in);
        actionlx->setObjectName(QString::fromUtf8("actionlx"));
        actionlx_2 = new QAction(Sign_in);
        actionlx_2->setObjectName(QString::fromUtf8("actionlx_2"));
        actionlx_2->setEnabled(true);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setKerning(false);
        actionlx_2->setFont(font2);
        actionlx_2->setMenuRole(QAction::TextHeuristicRole);
        actionlianxi = new QAction(Sign_in);
        actionlianxi->setObjectName(QString::fromUtf8("actionlianxi"));
        centralWidget = new QWidget(Sign_in);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        wid_password = new QWidget(centralWidget);
        wid_password->setObjectName(QString::fromUtf8("wid_password"));
        wid_password->setGeometry(QRect(40, 60, 271, 101));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wid_password->sizePolicy().hasHeightForWidth());
        wid_password->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(wid_password);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        job_id = new QLineEdit(wid_password);
        job_id->setObjectName(QString::fromUtf8("job_id"));
        QFont font3;
        font3.setPointSize(11);
        job_id->setFont(font3);
        job_id->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(job_id, 0, 2, 1, 1);

        label_password = new QLabel(wid_password);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(13);
        font4.setBold(true);
        font4.setWeight(75);
        label_password->setFont(font4);

        gridLayout->addWidget(label_password, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        password = new QLineEdit(wid_password);
        password->setObjectName(QString::fromUtf8("password"));
        password->setFont(font3);
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 1, 2, 1, 1);

        label_user = new QLabel(wid_password);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        QFont font5;
        font5.setPointSize(13);
        font5.setBold(true);
        font5.setWeight(75);
        label_user->setFont(font5);
        label_user->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(label_user, 0, 1, 1, 1);

        wid_sq = new QWidget(centralWidget);
        wid_sq->setObjectName(QString::fromUtf8("wid_sq"));
        wid_sq->setGeometry(QRect(50, 160, 251, 26));
        horizontalLayout = new QHBoxLayout(wid_sq);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        label_sq = new Mylabel(wid_sq);
        label_sq->setObjectName(QString::fromUtf8("label_sq"));
        label_sq->setFont(font3);
        label_sq->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout->addWidget(label_sq);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label_wj = new Mylabel2(wid_sq);
        label_wj->setObjectName(QString::fromUtf8("label_wj"));
        label_wj->setFont(font3);
        label_wj->setCursor(QCursor(Qt::OpenHandCursor));
        label_wj->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(label_wj);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        Sign_in->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Sign_in);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Sign_in->setStatusBar(statusBar);
        menuBar = new QMenuBar(Sign_in);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 390, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        Sign_in->setMenuBar(menuBar);

        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu->menuAction());
        menu->addAction(actionlianxi);

        retranslateUi(Sign_in);

        QMetaObject::connectSlotsByName(Sign_in);
    } // setupUi

    void retranslateUi(QMainWindow *Sign_in)
    {
        Sign_in->setWindowTitle(QApplication::translate("Sign_in", "Sign_in", nullptr));
        actionlxwm->setText(QApplication::translate("Sign_in", "\350\201\224\347\263\273\346\210\221\344\273\254", nullptr));
        actionlx->setText(QApplication::translate("Sign_in", "lx", nullptr));
        actionlx_2->setText(QApplication::translate("Sign_in", "\350\201\224\347\263\273", nullptr));
        actionlianxi->setText(QApplication::translate("Sign_in", "\350\201\224\347\263\273\346\210\221\344\273\254", nullptr));
        label_password->setText(QApplication::translate("Sign_in", "\345\257\206   \347\240\201\357\274\232", nullptr));
        label_user->setText(QApplication::translate("Sign_in", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_sq->setText(QApplication::translate("Sign_in", "\347\224\263\350\257\267\350\264\246\345\217\267", nullptr));
        label_wj->setText(QApplication::translate("Sign_in", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        menu->setTitle(QApplication::translate("Sign_in", "\345\270\256\345\212\251", nullptr));
        menu_2->setTitle(QApplication::translate("Sign_in", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_in: public Ui_Sign_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_IN_H
