#ifndef FIVEWINDOW_H
#define FIVEWINDOW_H

#include <QWidget>

namespace Ui {
class FiveWindow;
}

class FiveWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FiveWindow(QWidget *parent = nullptr);
    ~FiveWindow();

private:
    Ui::FiveWindow *ui;
};

#endif // FIVEWINDOW_H
