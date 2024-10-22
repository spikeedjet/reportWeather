#ifndef WIDGET_H
#define WIDGET_H

#include "qnetworkreply.h"
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void replyFinished();
    void slotReadyRead();
    void slotError();
    void slotSslErrors();



private:
    Ui::Widget *ui;
    QNetworkReply *reply;
};
#endif // WIDGET_H
