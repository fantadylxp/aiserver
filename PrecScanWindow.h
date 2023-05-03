#ifndef PRECSCANWINDOW_H
#define PRECSCANWINDOW_H

#include <QWidget>
#include<QFrame>
#include "ui_ps_image.h"
// namespace Ui {
// class PrecScanWindow;
// class dsds{int i;};
// }

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
