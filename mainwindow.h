#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "climatwindow.h"


class ClimatWindow;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
protected:
    void resizeEvent(QResizeEvent *event) override;

private slots:


private:
    Ui::MainWindow *ui;
    ClimatWindow *climatWin = nullptr;
};
#endif // MAINWINDOW_H
