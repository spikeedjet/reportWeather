#include "widget.h"
#include "ui_widget.h"

#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMouseEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(465,863);

    ui->lineEditCity->setStyleSheet("color: white;");

    manager = new QNetworkAccessManager(this);
    api = "http://gfeljm.tianqiapi.com/api?unescape=1&version=v9&appid=86381825&appsecret=Bsflh9cJ";
    QUrl url(api);
    // QUrl url("http://t.weather.itboy.net");

    reply = manager->get(QNetworkRequest(url));
    connect(reply,&QNetworkReply::finished,
            this,&Widget::replyFinished);


    ui->labelSearch->installEventFilter(this);





}

Widget::~Widget()
{
    delete ui;
}

void Widget::replyFinished()
{

    int repCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    if (reply->error() == QNetworkReply::ContentNotFoundError){
        QMessageBox mes;
        mes.setWindowTitle("错误");
        mes.setText("网络请求失败");
        mes.setStyleSheet("QPushButton {color:red}");
        mes.setStandardButtons(QMessageBox::Ok);
        mes.exec();

    }else if (reply->error() == QNetworkReply::NoError && repCode == 200){

        //qDebug()<<"replayFinished.";
        QByteArray rep = reply->readAll();
        // qDebug()<< QString::fromUtf8(rep);
        parseWeatherJson(QString::fromUtf8(rep));
    }
}

void Widget::parseWeatherJson(const QString &jsonString)
{
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonString.toUtf8());
    if (jsonDoc.isNull() || !jsonDoc.isObject()) {
        qDebug() << "Failed to create JSON doc or JSON is not an object.";
        return;
    }

    QJsonObject jsonObj = jsonDoc.object();

    // 解析顶层字段
    QString city = jsonObj["city"].toString();

    // 解析天气数据数组
    QJsonArray dataArray = jsonObj["data"].toArray();
    if (!dataArray.isEmpty()) {
        QJsonObject todayWeather = dataArray[0].toObject();

        //part2
        date = todayWeather["date"].toString();
        week = todayWeather["week"].toString();
        wea = todayWeather["wea"].toString();
        tem = todayWeather["tem"].toString();
        humidity = todayWeather["humidity"].toString();
        QString temLow = todayWeather["tem2"].toString();
        QString temHigh = todayWeather["tem1"].toString();

        ui->labelCity->setText(city);
        ui->labelTemp->setText(tem);
        ui->labelWeatherType->setText(wea);
        ui->labelHumidityData->setText(humidity);
        ui->labelCurrentDate->setText(date + "  " + week);
        ui->labelTempRange->setText(temLow+"~"+temHigh+"℃");

        //part3
        // Parse the "win" array
        QJsonArray winArray = todayWeather["win"].toArray();
        QString windDirection;
        if (!winArray.isEmpty()) {
            windDirection = winArray[0].toString(); // Get the first wind direction
            if (winArray.size() > 1 && winArray[0].toString() != winArray[1].toString()) {
                windDirection += " 转 " + winArray[1].toString(); // Add second direction if different
            }
        }
        ui->labelWindsType->setText(windDirection);

        QString winspeed = todayWeather["win_speed"].toString();
        ui->labelWindsType_data->setText(winspeed);

        QString humidity  = todayWeather["humidity"].toString();
        ui->labelHumidityData->setText(humidity);

        QString airLevel  = todayWeather["air_level"].toString();
        ui->labelAirQualityData->setText(airLevel);

    }

    QJsonValue aqiValue = jsonObj["aqi"];
    if (aqiValue.isObject()) {
        QJsonObject aqiObject = aqiValue.toObject();
        QString pm25 = aqiObject["pm25"].toString();
        ui->labelPM25Data->setText(pm25);
        qDebug() << "------------------------------------------------------------------------";
    } else {
        qDebug() << "AQI data is not in the expected format";
    }





    //获取未来6天的天气质量
    if (!dataArray.isEmpty()) {
        QJsonObject todayWeather = dataArray[0].toObject();
        QJsonObject tomorrowWeather = dataArray[1].toObject();
        QJsonObject tomorrowPlus1Weather = dataArray[2].toObject();
        QJsonObject tomorrowPlus2Weather = dataArray[3].toObject();
        QJsonObject tomorrowPlus3Weather = dataArray[4].toObject();
        QJsonObject tomorrowPlus4Weather = dataArray[5].toObject();

        //0402
        QString todayWea = todayWeather["wea"].toString();
        QString tomorrWea = tomorrowWeather["wea"].toString();
        QString tomorrowPlus1Wea = tomorrowPlus1Weather["wea"].toString();
        QString tomorrowPlus2Wea = tomorrowPlus2Weather["wea"].toString();
        QString tomorrowPlus3Wea = tomorrowPlus3Weather["wea"].toString();
        QString tomorrowPlus4Wea = tomorrowPlus4Weather["wea"].toString();

        QLabel* weaLabels[] = {
            ui->labelWea0, ui->labelWea1, ui->labelWea2,
            ui->labelWea3, ui->labelWea4, ui->labelWea5
        };
        QString Wea[] = {
            todayWea, tomorrWea, tomorrowPlus1Wea,
            tomorrowPlus2Wea, tomorrowPlus3Wea, tomorrowPlus4Wea
        };

        for (int i = 0; i < 6; ++i) {
            setWeaLabel(weaLabels[i], Wea[i]);
        }


        //0403
        QString todayAirQ = todayWeather["air_level"].toString();
        QString tomorrowAirQ = tomorrowWeather["air_level"].toString();
        QString tomorrowPlus1AirQ = tomorrowPlus1Weather["air_level"].toString();
        QString tomorrowPlus2AirQ = tomorrowPlus2Weather["air_level"].toString();
        QString tomorrowPlus3AirQ = tomorrowPlus3Weather["air_level"].toString();
        QString tomorrowPlus4AirQ = tomorrowPlus4Weather["air_level"].toString();

        QLabel* airQualityLabels[] = {
            ui->labelAirq0, ui->labelAirq1, ui->labelAirq2,
            ui->labelAirq3, ui->labelAirq4, ui->labelAirq5
        };
        QString airQualities[] = {
            todayAirQ, tomorrowAirQ, tomorrowPlus1AirQ,
            tomorrowPlus2AirQ, tomorrowPlus3AirQ, tomorrowPlus4AirQ
        };

        for (int i = 0; i < 6; ++i) {
            setAirQualityLabel(airQualityLabels[i], airQualities[i]);
        }

    }
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->labelSearch && event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        if (mouseEvent->button() == Qt::LeftButton) {
            // Handle the click event
            QString city = getSearchCityName();

            // Update the API URL with the new city
            api = "http://gfeljm.tianqiapi.com/api?unescape=1&version=v9&appid=86381825&appsecret=Bsflh9cJ&city=" + city;

            // Create a new network request with the updated URL
            QUrl url(api);
            reply = manager->get(QNetworkRequest(url));

            // Connect the new reply to the existing replyFinished slot
            connect(reply, &QNetworkReply::finished, this, &Widget::replyFinished);

            qDebug() << "Requesting weather for city:" << city;
            return true; // Event was handled
        }
    }
    // Pass unhandled events to the base class
    return QWidget::eventFilter(watched, event);
}




void Widget::setAirQualityLabel(QLabel* label, const QString& airQuality) {
    label->setText(airQuality);
    if (airQuality == "良") {
        label->setStyleSheet("background-color: rgb(255, 170, 0);color: rgb(255, 255, 255);border-radius: 5px;");
    } else {
        label->setStyleSheet("background-color: rgb(170, 200, 0);color: rgb(255, 255, 255);border-radius: 5px;");
    }
}


void Widget::setWeaLabel(QLabel* label, const QString& Wea) {
    label->setText(Wea);
    label->setStyleSheet("background-color: rgb(0, 119, 179);color: rgb(255, 255, 255);border-bottom-left-radius: 5px;border-bottom-right-radius: 5px;");


}

QString Widget::getSearchCityName()
{
    return ui->lineEditCity->displayText();
}







