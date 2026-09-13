#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "climatwindow.h"

#include <QResizeEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // ОТКЛЮЧАЕМ авторастяжение, чтобы оно не ломало пропорции
    ui->label_3->setScaledContents(false);

    // 1. Создаем виджет климата
    climatWin = new ClimatWindow(this);

    // 2. Встраиваем созданное окно климата внутрь вашего stackedWidget на страницу 2 (индекс 1)
    ui->stackedWidget->addWidget(climatWin);

    // Переключение на страницу Климата (индекс 1) при нажатии на кнопку Climat
    connect(ui->pushButton_22, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentIndex(1);
    });

    // Возврат на Домашнюю страницу (индекс 0) при нажатии на кнопку Home
    connect(ui->pushButton_21, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentIndex(0);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Этот метод автоматически срабатывает при запуске и растягивании окна
void MainWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);

    this->ensurePolished();

    QPixmap backPixmap("D:/visualProgramming/Laba_1_1/img/niceHouse.jpg");

    if (!backPixmap.isNull()) {
        // 1. Устанавливаем точные границы для рамки label_3
        int targetWidth = this->width() - 0;//- ui->treeWidget->width();
        int targetHeight = this->height() - 0;
        ui->label_3->setGeometry(0, 0, targetWidth, targetHeight);

        // 2. Растягиваем картинку с заполнением
        QPixmap scaledPix = backPixmap.scaled(ui->label_3->size(),
                                              Qt::KeepAspectRatioByExpanding,
                                              Qt::SmoothTransformation);

        // 3. ОБРЕЗАЕМ КАРТИНКУ строго под размер рамки, чтобы она не вылезала наружу
        scaledPix = scaledPix.copy(0, 0, ui->label_3->width(), ui->label_3->height());

        // 4. Отображаем идеально обрезанную картинку
        ui->label_3->setPixmap(scaledPix);
    }
}
