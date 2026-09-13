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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QListWidget *listWidget_3;
    QLabel *label_9;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QCalendarWidget *calendarWidget_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLabel *label_3;
    QTreeWidget *treeWidget_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1018, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 410, 49, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 160, 831, 361));
        label_2->setPixmap(QPixmap(QString::fromUtf8("img/niceHouse.jpg")));
        label_2->setScaledContents(false);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(70, 170, 721, 41));
        lineEdit_3->setFrame(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 170, 161, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_4->setFont(font);
        listWidget_3 = new QListWidget(centralwidget);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setGeometry(QRect(-40, -20, 1201, 171));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 30, 291, 91));
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        label_9->setFont(font1);
        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(320, 10, 661, 141));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_21 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setMinimumSize(QSize(100, 100));
        QFont font2;
        font2.setPointSize(20);
        pushButton_21->setFont(font2);
        pushButton_21->setIconSize(QSize(40, 40));

        horizontalLayout_5->addWidget(pushButton_21);

        pushButton_22 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setMinimumSize(QSize(100, 100));
        pushButton_22->setFont(font2);

        horizontalLayout_5->addWidget(pushButton_22);

        pushButton_23 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setMinimumSize(QSize(100, 100));
        pushButton_23->setFont(font2);

        horizontalLayout_5->addWidget(pushButton_23);

        pushButton_24 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setMinimumSize(QSize(100, 100));
        pushButton_24->setFont(font2);

        horizontalLayout_5->addWidget(pushButton_24);

        pushButton_25 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_25->setObjectName("pushButton_25");
        pushButton_25->setMinimumSize(QSize(100, 100));
        pushButton_25->setFont(font2);

        horizontalLayout_5->addWidget(pushButton_25);

        calendarWidget_3 = new QCalendarWidget(centralwidget);
        calendarWidget_3->setObjectName("calendarWidget_3");
        calendarWidget_3->setGeometry(QRect(590, 230, 201, 171));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(360, 430, 531, 221));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(340, 340, 521, 241));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_3->setPalette(palette);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Yu Gothic UI")});
        font3.setPointSize(100);
        font3.setBold(false);
        font3.setItalic(false);
        label_3->setFont(font3);
        treeWidget_2 = new QTreeWidget(centralwidget);
        treeWidget_2->headerItem()->setText(0, QString());
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setStrikeOut(false);
        QFont font5;
        font5.setPointSize(14);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget_2);
        __qtreewidgetitem->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem1->setFont(0, font4);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem2->setFont(0, font5);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem3->setFont(0, font5);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget_2);
        __qtreewidgetitem4->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem4);
        __qtreewidgetitem5->setFont(0, font5);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem4);
        __qtreewidgetitem6->setFont(0, font5);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(__qtreewidgetitem4);
        __qtreewidgetitem7->setFont(0, font5);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(treeWidget_2);
        __qtreewidgetitem8->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem9->setFont(0, font5);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem10->setFont(0, font5);
        treeWidget_2->setObjectName("treeWidget_2");
        treeWidget_2->setGeometry(QRect(60, 60, 191, 471));
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(false);
        treeWidget_2->setFont(font6);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1018, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        lineEdit_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\257\320\275\320\264\320\265\320\272\321\201\320\237\320\236\320\230\320\241\320\232", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "Climat", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "Lights", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "Cameras", nullptr));
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "Sound", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));

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

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
