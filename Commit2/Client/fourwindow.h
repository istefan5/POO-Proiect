#ifndef FOURWINDOW_H
#define FOURWINDOW_H

#include <QWidget>

namespace Ui {
class FourWindow;
}

class FourWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FourWindow(QWidget *parent = nullptr);
    ~FourWindow();

private:
    Ui::FourWindow *ui;
};

#endif // FOURWINDOW_H
