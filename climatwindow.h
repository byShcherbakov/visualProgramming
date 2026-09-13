#ifndef CLIMATWINDOW_H
#define CLIMATWINDOW_H

#include <QWidget>

namespace Ui {
class ClimatWindow;
}

class ClimatWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ClimatWindow(QWidget *parent = nullptr);
    ~ClimatWindow();

private:
    Ui::ClimatWindow *ui;
};

#endif // CLIMATWINDOW_H
