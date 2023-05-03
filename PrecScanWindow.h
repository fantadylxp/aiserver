#ifndef PRECSCANWINDOW_H
#define PRECSCANWINDOW_H

#include <QWidget>
#include<QFrame>

namespace Ui {
class PrecScanWindow;
}

class PrecScanWindow : public QFrame
{
    Q_OBJECT

public:
    explicit PrecScanWindow(QFrame *parent = nullptr);
    ~PrecScanWindow();

private:
    Ui::PrecScanWindow *ui;
};

#endif // PRECSCANWINDOW_H
