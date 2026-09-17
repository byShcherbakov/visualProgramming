/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTreeWidget *treeWidget_2;
    QTextBrowser *textBrowser;
    QLabel *Type_interface_2;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QFrame *backgroundFrame;
    QLabel *time;
    QLabel *Home_data;
    QWidget *page_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1204, 734);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(80, 0, 961, 601));
        page = new QWidget();
        page->setObjectName("page");
        treeWidget_2 = new QTreeWidget(page);
        treeWidget_2->headerItem()->setText(0, QString());
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setStrikeOut(false);
        QFont font2;
        font2.setPointSize(14);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget_2);
        __qtreewidgetitem->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem1->setFont(0, font1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem2->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem3->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget_2);
        __qtreewidgetitem4->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem4);
        __qtreewidgetitem5->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem4);
        __qtreewidgetitem6->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(__qtreewidgetitem4);
        __qtreewidgetitem7->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(treeWidget_2);
        __qtreewidgetitem8->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem9->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem10->setFont(0, font2);
        treeWidget_2->setObjectName("treeWidget_2");
        treeWidget_2->setGeometry(QRect(770, 140, 191, 481));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(false);
        treeWidget_2->setFont(font3);
        textBrowser = new QTextBrowser(page);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(-20, -10, 981, 151));
        Type_interface_2 = new QLabel(page);
        Type_interface_2->setObjectName("Type_interface_2");
        Type_interface_2->setGeometry(QRect(70, 20, 131, 91));
        QFont font4;
        font4.setPointSize(28);
        font4.setBold(true);
        Type_interface_2->setFont(font4);
        horizontalLayoutWidget_5 = new QWidget(page);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(270, 10, 661, 121));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_21 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setMinimumSize(QSize(100, 100));
        QFont font5;
        font5.setPointSize(20);
        pushButton_21->setFont(font5);
        pushButton_21->setIconSize(QSize(40, 40));

        horizontalLayout_5->addWidget(pushButton_21);

        pushButton_22 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setMinimumSize(QSize(100, 100));
        pushButton_22->setFont(font5);

        horizontalLayout_5->addWidget(pushButton_22);

        pushButton_23 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setMinimumSize(QSize(100, 100));
        pushButton_23->setFont(font5);

        horizontalLayout_5->addWidget(pushButton_23);

        pushButton_24 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setMinimumSize(QSize(100, 100));
        pushButton_24->setFont(font5);

        horizontalLayout_5->addWidget(pushButton_24);

        pushButton_25 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_25->setObjectName("pushButton_25");
        pushButton_25->setMinimumSize(QSize(100, 100));
        pushButton_25->setFont(font5);

        horizontalLayout_5->addWidget(pushButton_25);

        backgroundFrame = new QFrame(page);
        backgroundFrame->setObjectName("backgroundFrame");
        backgroundFrame->setGeometry(QRect(0, 140, 771, 461));
        backgroundFrame->setStyleSheet(QString::fromUtf8("#backgroundFrame {\n"
"    \n"
"    border-image: url(\"D:/visualProgramming/Laba_1_1/img/niceHouse.jpg\") 0 0 0 0 stretch stretch;\n"
"}\n"
""));
        backgroundFrame->setFrameShape(QFrame::Shape::StyledPanel);
        backgroundFrame->setFrameShadow(QFrame::Shadow::Raised);
        time = new QLabel(backgroundFrame);
        time->setObjectName("time");
        time->setGeometry(QRect(130, 30, 511, 251));
        QFont font6;
        font6.setPointSize(80);
        time->setFont(font6);
        time->setStyleSheet(QString::fromUtf8("#time{\n"
"	color:white;\n"
"	badckground:transparent; \n"
"}"));
        Home_data = new QLabel(backgroundFrame);
        Home_data->setObjectName("Home_data");
        Home_data->setGeometry(QRect(410, 360, 341, 71));
        QFont font7;
        font7.setPointSize(55);
        Home_data->setFont(font7);
        Home_data->setStyleSheet(QString::fromUtf8("#Home_data {\n"
"    color: white;\n"
"    background-color: transparent;\n"
"}\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1204, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));

        const bool __sortingEnabled = treeWidget_2->isSortingEnabled();
        treeWidget_2->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_2->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Upper Floor", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "Bedroom 1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem->child(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "Bathroom", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem->child(2);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("MainWindow", "Kids room", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget_2->topLevelItem(1);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("MainWindow", "Main Floor", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("MainWindow", "Kitchen", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem4->child(1);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("MainWindow", "Entru", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem4->child(2);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("MainWindow", "Garage", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget_2->topLevelItem(2);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("MainWindow", "Lower Floor", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("MainWindow", "Theater", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("MainWindow", "Bedroom 2", nullptr));
        treeWidget_2->setSortingEnabled(__sortingEnabled);

        Type_interface_2->setText(QCoreApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "Climat", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "Lights", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "Cameras", nullptr));
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "Sound", nullptr));
        time->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        Home_data->setText(QCoreApplication::translate("MainWindow", "16.09.2026", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
