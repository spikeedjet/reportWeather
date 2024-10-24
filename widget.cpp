#include "widget.h"
#include "ui_widget.h"
#include "test.cpp"

#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMouseEvent>
#include <QPainter>
#include <qtimer.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(459,883);

    manager = new QNetworkAccessManager(this);
    api = "http://gfeljm.tianqiapi.com/api?unescape=1&version=v9&appid=86381825&appsecret=Bsflh9cJ";

    fetchWeatherData();
    QTimer::singleShot(600000, this, &Widget::fetchWeatherData);

    ui->labelSearch->installEventFilter(this);
    ui->widget0404->installEventFilter(this);
    ui->widget0405->installEventFilter(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::initializeWeatherIcons()
{
    weatherIcons = {
        {"晴", ":/res/Wea/sun.png"},
        {"多云", ":/res/Wea/cloudy.png"},
        {"阴", ":/res/Wea/overcast.png"},
        {"小雨", ":/res/Wea/rain.png"},
        {"中雨", ":/res/Wea/rainy.png"},
        {"大雨", ":/res/Wea/rainstorm.png"},
        {"雷阵雨", ":/res/Wea/thunderShower.png"},
        {"雪", ":/res/Wea/snow.png"},
        {"多云转阴", ":/res/Wea/cloudyToOvercast.png"},
        {"小雨转晴", ":/res/Wea/rainToSun.png"},
        {"小雨转阴", ":/res/Wea/rianToCloudy.png"}
    };
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
        QByteArray rep = reply->readAll();
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
    dataArray = jsonObj["data"].toArray();
    if (!dataArray.isEmpty()) {

        // 更新最高气温数据
        updateMaxTemperatures();

        updateMinTemperatures();

        // 触发重绘
        update();

        QJsonObject todayWeather = dataArray[0].toObject();

        //part2
        date = todayWeather["date"].toString();
        week = todayWeather["week"].toString();
        wea = todayWeather["wea"].toString();
        tem = todayWeather["tem"].toString();
        humidity = todayWeather["humidity"].toString();
        QString temLow = todayWeather["tem2"].toString();
        QString temHigh = todayWeather["tem1"].toString();
        QString airTips = todayWeather["air_tips"].toString();
        ui->labelCity->setText(city + "市");
        ui->labelTemp->setText(tem + "℃");
        ui->labelWeatherType->setText(wea);
        ui->labelHumidityData->setText(humidity);
        ui->labelCurrentDate->setText(date + "  " + week);
        ui->labelTempRange->setText(temLow+"~"+temHigh+"℃");
        ui->labelAirTips->setText(airTips);

        QString iconPath = weatherIcons.value(wea);

        // Load the icon
        QPixmap icon(iconPath);
        if (!icon.isNull()) {
            ui->labelWeatherIcon->setPixmap(icon);
        } else {
            qDebug() << "Failed to load icon:" << iconPath;
        }

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
    } else {
        qDebug() << "AQI data is not in the expected format";
    }


    //获取未来6天的天气质量
    if (!dataArray.isEmpty()) {
        todayWeather = dataArray[0].toObject();
        tomorrowWeather = dataArray[1].toObject();
        tomorrowPlus1Weather = dataArray[2].toObject();
        tomorrowPlus2Weather = dataArray[3].toObject();
        tomorrowPlus3Weather = dataArray[4].toObject();
        tomorrowPlus4Weather = dataArray[5].toObject();

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
        QString wea[] = {
            todayWea, tomorrWea, tomorrowPlus1Wea,
            tomorrowPlus2Wea, tomorrowPlus3Wea, tomorrowPlus4Wea
        };

        for (int i = 0; i < 6; ++i) {
            setWeaLabel(weaLabels[i], wea[i]);
        }

        QLabel* weaPicLabel[] = {
            ui->labelWeaPic0,ui->labelWeaPic1,ui->labelWeaPic2,
            ui->labelWeaPic3,ui->labelWeaPic4,ui->labelWeaPic5,
        };

        for (int i = 0; i < 6; ++i) {
            setWeaPic(weaPicLabel[i], wea[i]);
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
        //0401
        showDateWidget0401();

    }
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->widget0404) {
        if (event->type() == QEvent::Paint) {
            drawMaxTemp();
        }
    }

    if (watched ==ui->widget0405){
        if (event->type() == QEvent::Paint){
            drawMinTemp();
        }
    }

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

            // qDebug() << "Requesting weather for city:" << city;
            return true; // Event was handled
        }
    }
    // Pass unhandled events to the base class
    return QWidget::eventFilter(watched, event);
}



void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event); // 标记 event 为未使用
}

void Widget::updateMaxTemperatures()
{
    maxTemperatures.clear();
    for (int i = 0; i < qMin(6, dataArray.size()); ++i) {
        QJsonObject dayWeather = dataArray[i].toObject();
        int maxTemp = dayWeather["tem1"].toString().remove("℃").toInt();
        maxTemperatures.append(maxTemp);
    }
    qDebug()<< maxTemperatures;
}

void Widget::updateMinTemperatures()
{
    minTemperatures.clear();

    for (int i = 0; i < qMin(6, dataArray.size()); i++){
        QJsonObject dayWeather = dataArray[i].toObject();
        int minTemp = dayWeather["tem2"].toString().remove("℃").toInt();
        minTemperatures.append(minTemp);
    }

}

void Widget::setAirQualityLabel(QLabel* label, const QString& airQuality) {
    label->setText(airQuality);
    if (airQuality == "良") {
        label->setStyleSheet("background-color: rgb(255, 170, 0);color: rgb(255, 255, 255);border-radius: 5px;");
    } else {
        label->setStyleSheet("background-color: rgb(170, 200, 0);color: rgb(255, 255, 255);border-radius: 5px;");
    }
}


void Widget::setWeaLabel(QLabel* label, const QString& wea) {
    label->setText(wea);
    label->setStyleSheet("background-color: rgb(0, 119, 179);color: rgb(255, 255, 255);border-bottom-left-radius: 5px;border-bottom-right-radius: 5px;");

}

QString Widget::getSearchCityName()
{
    return ui->lineEditCity->displayText();
}

void Widget::setWeaPic(QLabel *weaPicLabel, const QString &wea)
{
    QString iconPath = weatherIcons.value(wea);

    // Load the icon
    QPixmap icon(iconPath);
    if (!icon.isNull()) {

        weaPicLabel->setPixmap(icon);
    } else {
        qDebug() << "Failed to load icon:" << iconPath;
    }
}

void Widget::drawMaxTemp()
{
    QPainter painter(ui->widget0404);

    if (maxTemperatures.isEmpty()) {
        return;
    }

    if (!ui->widget0404) {
        qDebug() << "widget0404 is null!";
        return;
    }

    painter.setRenderHint(QPainter::Antialiasing);

    // 设置绘图区域
    int margin = 20; // 减小边距以适应小部件
    int width = ui->widget0404->width() - 2 * margin; // 使用 widget0404 的宽度
    int height = ui->widget0404->height() - 2 * margin; // 使用 widget0404 的高度
    int bottom = ui->widget0404->height() - margin; // 使用 widget0404 的高度
    // int top = bottom - height;

    // 找出最高和最低温度
    int maxTemp = *std::max_element(maxTemperatures.begin(), maxTemperatures.end());
    int minTemp = *std::min_element(maxTemperatures.begin(), maxTemperatures.end());


    // 绘制折线
    QPen pen(QColor(255, 255, 200), 2); // 设置为淡黄色
    painter.setPen(pen);

    if (maxTemperatures.size() < 2) {
        return; // 如果没有足够的数据点，直接返回
    }

    int xStep = width / (maxTemperatures.size() - 1);
    for (int i = 0; i < maxTemperatures.size() - 1; ++i) {
        int x1 = margin + i * xStep;
        int y1 = bottom - (maxTemperatures[i] - minTemp) * height / (maxTemp - minTemp);
        int x2 = margin + (i + 1) * xStep;
        int y2 = bottom - (maxTemperatures[i + 1] - minTemp) * height / (maxTemp - minTemp);

        painter.drawLine(x1, y1, x2, y2);

        // 绘制数据点
        painter.setBrush(Qt::blue);
        painter.drawEllipse(QPoint(x1, y1), 3, 3);
    }

    // 绘制最后一个数据点
    painter.drawEllipse(QPoint(margin + width, bottom - (maxTemperatures.last() - minTemp) * height / (maxTemp - minTemp)), 3, 3);

    // 绘制温度标签
    painter.setPen(Qt::black);
    for (int i = 0; i < maxTemperatures.size(); ++i) {
        int x = margin + i * xStep;
        int y = bottom - (maxTemperatures[i] - minTemp) * height / (maxTemp - minTemp);
        painter.setPen(QColor(255, 255, 200));
        painter.drawText(QRect(x - 20, y - 20, 40, 20), Qt::AlignCenter, QString::number(maxTemperatures[i]) + "℃");
    }
}

void Widget::drawMinTemp()
{
    QPainter painter(ui->widget0405);

    if (minTemperatures.isEmpty()){
        return;
    }

    painter.setRenderHint(QPainter::Antialiasing);

    int margin = 20;
    int width = ui->widget0405->width() - 2 * margin;
    int height = ui->widget0405->height() - 2 * margin; // 使用 widget0404 的高度
    int bottom = ui->widget0405->height() - margin; // 使用 widget0404 的高度
    // int top = bottom - height;

    int maxTemp = *std::max_element(minTemperatures.begin(),minTemperatures.end());
    int minTemp = *std::min_element(minTemperatures.begin(), minTemperatures.end());

    // 绘制折线
    QPen pen(QColor(144, 238, 144), 2); // 设置为淡绿色
    painter.setPen(pen);

    if (minTemperatures.size() < 2) {
        return; // 如果没有足够的数据点，直接返回
    }

    int xStep = width / (minTemperatures.size() - 1);
    for (int i = 0; i < minTemperatures.size() - 1; ++i) {
        int x1 = margin + i * xStep;
        int y1 = bottom - (minTemperatures[i] - minTemp) * height / (maxTemp - minTemp);
        int x2 = margin + (i + 1) * xStep;
        int y2 = bottom - (minTemperatures[i + 1] - minTemp) * height / (maxTemp - minTemp);

        painter.drawLine(x1, y1, x2, y2);

        // 绘制数据点
        painter.setBrush(Qt::blue);
        painter.drawEllipse(QPoint(x1, y1), 3, 3);
    }

    // 绘制最后一个数据点
    painter.drawEllipse(QPoint(margin + width, bottom - (minTemperatures.last() - minTemp) * height / (maxTemp - minTemp)), 3, 3);

    // 绘制温度标签
    painter.setPen(Qt::black);
    for (int i = 0; i < minTemperatures.size(); ++i) {
        int x = margin + i * xStep;
        int y = bottom - (minTemperatures[i] - minTemp) * height / (maxTemp - minTemp);
        painter.setPen(QColor(144, 238, 144)); // Set pen color to light green
        painter.drawText(QRect(x - 20, y - 20, 40, 20), Qt::AlignCenter, QString::number(minTemperatures[i]) + "℃");
    }

}

void Widget::showTestWin()
{
    // qDebug()<< "show test win";
    Test *test = new Test;
    test->show();
}

void Widget::showDateWidget0401()
{
    if (!dataArray.isEmpty()){

        //day
        QString tomorrowPlus2Week = tomorrowPlus2Weather["week"].toString();
        QString tomorrowPlus3Week = tomorrowPlus3Weather["week"].toString();
        QString tomorrowPlus4Week = tomorrowPlus4Weather["week"].toString();

        ui->labelDay3->setText(tomorrowPlus2Week);
        ui->labelDay4->setText(tomorrowPlus3Week);
        ui->labelDay5->setText(tomorrowPlus4Week);

        //date
        QString date0 = todayWeather["date"].toString();
        QString date1 = tomorrowWeather["date"].toString();
        QString date2 = tomorrowPlus1Weather["date"].toString();
        QString date3 = tomorrowPlus2Weather["date"].toString();
        QString date4 = tomorrowPlus3Weather["date"].toString();
        QString date5 = tomorrowPlus4Weather["date"].toString();

        ui->labelDate0->setText(date0.mid(5,5));
        ui->labelDate1->setText(date1.mid(5,5));
        ui->labelDate2->setText(date2.mid(5,5));
        ui->labelDate3->setText(date3.mid(5,5));
        ui->labelDate4->setText(date4.mid(5,5));
        ui->labelDate5->setText(date5.mid(5,5));



    }
}

void Widget::fetchWeatherData()
{
    QUrl url(api);
    reply = manager->get(QNetworkRequest(url));
    connect(reply, &QNetworkReply::finished, this, &Widget::replyFinished);
}













