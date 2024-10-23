#ifndef WIDGET_H
#define WIDGET_H

#include "qnetworkreply.h"
#include <QWidget>
#include <QJsonDocument>
#include <QJsonObject>
#include <QLabel>

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
    void parseWeatherJson(const QString &jsonString);
    void updateUI();

protected:
    bool eventFilter(QObject *watched, QEvent *event) override;

private:
    Ui::Widget *ui;
    QNetworkReply *reply;
    QString date ;
    QString week ;
    QString wea ;
    QString tem;
    QString humidity;
    void setAirQualityLabel(QLabel* label, const QString& airQuality);
    void setWeaLabel(QLabel* label, const QString& airQuality);
    QString getSearchCityName ();
    QString api;
    QNetworkAccessManager *manager;



};
#endif // WIDGET_H
