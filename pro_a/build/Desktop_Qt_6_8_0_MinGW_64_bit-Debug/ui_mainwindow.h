/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *nIpt;
    QVBoxLayout *verticalLayout_5;
    QPushButton *ok1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *place1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *place2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *distance;
    QPushButton *ok2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QPushButton *ok3;
    QPushButton *showTree;
    QPushButton *clr_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 441, 301));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        nIpt = new QLineEdit(layoutWidget);
        nIpt->setObjectName("nIpt");

        verticalLayout_4->addWidget(nIpt);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");

        horizontalLayout_2->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_2);

        ok1 = new QPushButton(layoutWidget);
        ok1->setObjectName("ok1");

        verticalLayout_6->addWidget(ok1);


        verticalLayout_7->addLayout(verticalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        place1 = new QLineEdit(layoutWidget);
        place1->setObjectName("place1");

        verticalLayout_3->addWidget(place1);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        place2 = new QLineEdit(layoutWidget);
        place2->setObjectName("place2");

        verticalLayout_2->addWidget(place2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        distance = new QLineEdit(layoutWidget);
        distance->setObjectName("distance");

        verticalLayout->addWidget(distance);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_7->addLayout(horizontalLayout);

        ok2 = new QPushButton(layoutWidget);
        ok2->setObjectName("ok2");

        verticalLayout_7->addWidget(ok2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        ok3 = new QPushButton(layoutWidget);
        ok3->setObjectName("ok3");

        verticalLayout_8->addWidget(ok3);

        showTree = new QPushButton(layoutWidget);
        showTree->setObjectName("showTree");

        verticalLayout_8->addWidget(showTree);

        clr_btn = new QPushButton(layoutWidget);
        clr_btn->setObjectName("clr_btn");

        verticalLayout_8->addWidget(clr_btn);


        horizontalLayout_3->addLayout(verticalLayout_8);


        verticalLayout_7->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\234\260\347\202\271\346\225\260", nullptr));
        ok1->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\274\226\345\217\267\357\274\232\345\234\260\347\202\2711(\346\225\264\346\225\260)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\274\226\345\217\267\357\274\232\345\234\260\347\202\2712(\346\225\264\346\225\260)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\267\235\347\246\273(\346\225\264\346\225\260or\345\260\217\346\225\260)", nullptr));
        ok2->setText(QCoreApplication::translate("MainWindow", "\345\275\225\345\205\245", nullptr));
        ok3->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\237\245\350\257\242", nullptr));
        showTree->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\345\233\276\347\244\272", nullptr));
        clr_btn->setText(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
