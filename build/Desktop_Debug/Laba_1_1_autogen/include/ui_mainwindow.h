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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
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
    QWidget *Home;
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
    QWidget *Cameres;
    QWidget *Sound;
    QWidget *Lights;
    QWidget *CLimat;
    QFrame *ClimatFrame;
    QTextBrowser *textBrowser_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSlider *horizontalSlider_2;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QLabel *label_4;
    QLabel *label_3;
    QSlider *horizontalSlider_3;
    QTreeWidget *treeWidget_3;
    QTextBrowser *textBrowser_2;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QLabel *label;
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
        stackedWidget->setGeometry(QRect(70, 30, 961, 601));
        Home = new QWidget();
        Home->setObjectName("Home");
        treeWidget_2 = new QTreeWidget(Home);
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
        textBrowser = new QTextBrowser(Home);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(-20, -10, 981, 151));
        Type_interface_2 = new QLabel(Home);
        Type_interface_2->setObjectName("Type_interface_2");
        Type_interface_2->setGeometry(QRect(70, 20, 131, 91));
        QFont font4;
        font4.setPointSize(28);
        font4.setBold(true);
        Type_interface_2->setFont(font4);
        horizontalLayoutWidget_5 = new QWidget(Home);
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

        backgroundFrame = new QFrame(Home);
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
        stackedWidget->addWidget(Home);
        Cameres = new QWidget();
        Cameres->setObjectName("Cameres");
        stackedWidget->addWidget(Cameres);
        Sound = new QWidget();
        Sound->setObjectName("Sound");
        stackedWidget->addWidget(Sound);
        Lights = new QWidget();
        Lights->setObjectName("Lights");
        stackedWidget->addWidget(Lights);
        CLimat = new QWidget();
        CLimat->setObjectName("CLimat");
        ClimatFrame = new QFrame(CLimat);
        ClimatFrame->setObjectName("ClimatFrame");
        ClimatFrame->setGeometry(QRect(0, 120, 771, 471));
        ClimatFrame->setStyleSheet(QString::fromUtf8("#ClimatFrame {\n"
"    \n"
"    border-image: url(\"D:/visualProgramming/Laba_1_1/img/climat.jpg\") 0 0 0 0 stretch stretch;\n"
"}\n"
""));
        ClimatFrame->setFrameShape(QFrame::Shape::StyledPanel);
        ClimatFrame->setFrameShadow(QFrame::Shadow::Raised);
        textBrowser_3 = new QTextBrowser(ClimatFrame);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(70, 80, 611, 301));
        gridLayoutWidget = new QWidget(ClimatFrame);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(77, 84, 541, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_2 = new QSlider(gridLayoutWidget);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 4, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font8;
        font8.setPointSize(26);
        label_2->setFont(font8);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalSlider = new QSlider(gridLayoutWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font8);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font8);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalSlider_3 = new QSlider(gridLayoutWidget);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 6, 0, 1, 1);

        treeWidget_3 = new QTreeWidget(CLimat);
        treeWidget_3->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem11 = new QTreeWidgetItem(treeWidget_3);
        __qtreewidgetitem11->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem12 = new QTreeWidgetItem(__qtreewidgetitem11);
        __qtreewidgetitem12->setFont(0, font1);
        QTreeWidgetItem *__qtreewidgetitem13 = new QTreeWidgetItem(__qtreewidgetitem11);
        __qtreewidgetitem13->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem14 = new QTreeWidgetItem(__qtreewidgetitem11);
        __qtreewidgetitem14->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem15 = new QTreeWidgetItem(treeWidget_3);
        __qtreewidgetitem15->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem16 = new QTreeWidgetItem(__qtreewidgetitem15);
        __qtreewidgetitem16->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem17 = new QTreeWidgetItem(__qtreewidgetitem15);
        __qtreewidgetitem17->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem18 = new QTreeWidgetItem(__qtreewidgetitem15);
        __qtreewidgetitem18->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem19 = new QTreeWidgetItem(treeWidget_3);
        __qtreewidgetitem19->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem20 = new QTreeWidgetItem(__qtreewidgetitem19);
        __qtreewidgetitem20->setFont(0, font2);
        QTreeWidgetItem *__qtreewidgetitem21 = new QTreeWidgetItem(__qtreewidgetitem19);
        __qtreewidgetitem21->setFont(0, font2);
        treeWidget_3->setObjectName("treeWidget_3");
        treeWidget_3->setGeometry(QRect(760, 130, 201, 481));
        treeWidget_3->setFont(font3);
        treeWidget_3->setStyleSheet(QString::fromUtf8("#ClimatFrame {\n"
"    \n"
"    border-image: url(\"D:/visualProgramming/Laba_1_1/img/climat.jpg\") 0 0 0 0 stretch stretch;\n"
"}\n"
""));
        textBrowser_2 = new QTextBrowser(CLimat);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(0, 0, 961, 141));
        horizontalLayoutWidget_7 = new QWidget(CLimat);
        horizontalLayoutWidget_7->setObjectName("horizontalLayoutWidget_7");
        horizontalLayoutWidget_7->setGeometry(QRect(250, 10, 700, 121));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_31 = new QPushButton(horizontalLayoutWidget_7);
        pushButton_31->setObjectName("pushButton_31");
        pushButton_31->setMinimumSize(QSize(100, 100));
        pushButton_31->setFont(font5);
        pushButton_31->setIconSize(QSize(40, 40));

        horizontalLayout_7->addWidget(pushButton_31);

        pushButton_32 = new QPushButton(horizontalLayoutWidget_7);
        pushButton_32->setObjectName("pushButton_32");
        pushButton_32->setMinimumSize(QSize(100, 100));
        pushButton_32->setFont(font5);

        horizontalLayout_7->addWidget(pushButton_32);

        pushButton_33 = new QPushButton(horizontalLayoutWidget_7);
        pushButton_33->setObjectName("pushButton_33");
        pushButton_33->setMinimumSize(QSize(100, 100));
        pushButton_33->setFont(font5);

        horizontalLayout_7->addWidget(pushButton_33);

        pushButton_34 = new QPushButton(horizontalLayoutWidget_7);
        pushButton_34->setObjectName("pushButton_34");
        pushButton_34->setMinimumSize(QSize(100, 100));
        pushButton_34->setFont(font5);

        horizontalLayout_7->addWidget(pushButton_34);

        pushButton_35 = new QPushButton(horizontalLayoutWidget_7);
        pushButton_35->setObjectName("pushButton_35");
        pushButton_35->setMinimumSize(QSize(100, 100));
        pushButton_35->setFont(font5);

        horizontalLayout_7->addWidget(pushButton_35);

        label = new QLabel(CLimat);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 161, 51));
        QFont font9;
        font9.setPointSize(24);
        label->setFont(font9);
        stackedWidget->addWidget(CLimat);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1204, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


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
        label_2->setText(QCoreApplication::translate("MainWindow", "Upper Floor", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Lower Floor", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Main Floor", nullptr));

        const bool __sortingEnabled1 = treeWidget_3->isSortingEnabled();
        treeWidget_3->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem11 = treeWidget_3->topLevelItem(0);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("MainWindow", "Upper Floor", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem11->child(0);
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("MainWindow", "Bedroom 1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem11->child(1);
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("MainWindow", "Bathroom", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem11->child(2);
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("MainWindow", "Kids room", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = treeWidget_3->topLevelItem(1);
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("MainWindow", "Main Floor", nullptr));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem15->child(0);
        ___qtreewidgetitem16->setText(0, QCoreApplication::translate("MainWindow", "Kitchen", nullptr));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem15->child(1);
        ___qtreewidgetitem17->setText(0, QCoreApplication::translate("MainWindow", "Entru", nullptr));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem15->child(2);
        ___qtreewidgetitem18->setText(0, QCoreApplication::translate("MainWindow", "Garage", nullptr));
        QTreeWidgetItem *___qtreewidgetitem19 = treeWidget_3->topLevelItem(2);
        ___qtreewidgetitem19->setText(0, QCoreApplication::translate("MainWindow", "Lower Floor", nullptr));
        QTreeWidgetItem *___qtreewidgetitem20 = ___qtreewidgetitem19->child(0);
        ___qtreewidgetitem20->setText(0, QCoreApplication::translate("MainWindow", "Theater", nullptr));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem19->child(1);
        ___qtreewidgetitem21->setText(0, QCoreApplication::translate("MainWindow", "Bedroom 2", nullptr));
        treeWidget_3->setSortingEnabled(__sortingEnabled1);

        pushButton_31->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        pushButton_32->setText(QCoreApplication::translate("MainWindow", "Climat", nullptr));
        pushButton_33->setText(QCoreApplication::translate("MainWindow", "Lights", nullptr));
        pushButton_34->setText(QCoreApplication::translate("MainWindow", "Cameras", nullptr));
        pushButton_35->setText(QCoreApplication::translate("MainWindow", "Sound", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Climat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
