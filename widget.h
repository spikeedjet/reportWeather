#ifndef WIDGET_H
#define WIDGET_H

#include "qnetworkreply.h"
#include <QWidget>
#include <QJsonDocument>
#include <QJsonObject>
#include <QLabel>
#include <bits/concept_check.h>
#include <QJsonArray>
#include <qpainter.h>


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
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::Widget *ui;
    QNetworkReply *reply;
    QString date ;
    QString week ;
    QString wea ;
    QString tem;
    QString humidity;
    QString api;
    QNetworkAccessManager *manager;
    QVector<int> maxTemperatures; // 存储最高气温数据
    QVector<int> minTemperatures;
    QJsonArray dataArray; // 声明为类的成员变量
    QPainter painter;
    QJsonObject todayWeather ;
    QJsonObject tomorrowWeather ;
    QJsonObject tomorrowPlus1Weather;
    QJsonObject tomorrowPlus2Weather;
    QJsonObject tomorrowPlus3Weather ;
    QJsonObject tomorrowPlus4Weather;
    QMap<QString, QString> weatherIcons;

    void updateMaxTemperatures(); // 更新最高气温数据
    void updateMinTemperatures();
    void setAirQualityLabel(QLabel* label, const QString& airQuality);
    void setWeaLabel(QLabel* label, const QString& wea);
    QString getSearchCityName ();
    void setWeaPic(QLabel* weaPicLabel, const QString& wea);
    void drawMaxTemp();
    void drawMinTemp();
    void showTestWin();
    void showDateWidget0401();
    void fetchWeatherData();
    void initializeWeatherIcons();

};
#endif // WIDGET_H
