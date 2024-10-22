/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_25;
    QWidget *widget01;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEditCity;
    QLabel *labelSearch;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelCurrentDate;
    QWidget *widget02;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelWeatherIcon;
    QGridLayout *gridLayout_2;
    QLabel *labelWeatherType;
    QLabel *labelCity;
    QLabel *labelTempRange;
    QLabel *labelTemp;
    QSpacerItem *horizontalSpacer;
    QWidget *widget03;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget0301;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelFX;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelWindsType;
    QLabel *labelWindsType_data;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFX_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelPM25;
    QLabel *labelPM25Data;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelFX_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelHumidity;
    QLabel *labelHumidityData;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelFX_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelAirQuality;
    QLabel *labelAirQualityData;
    QWidget *widget04;
    QVBoxLayout *verticalLayout_24;
    QWidget *widget0401;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelDay0;
    QLabel *labelDate0;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelDay1;
    QLabel *labelDate1;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelDay2;
    QLabel *labelDate2;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelDay3;
    QLabel *labelDate3;
    QVBoxLayout *verticalLayout_10;
    QLabel *labelDay4;
    QLabel *labelDate4;
    QVBoxLayout *verticalLayout_11;
    QLabel *labelDay5;
    QLabel *labelDate5;
    QWidget *widget0402;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_12;
    QLabel *labelDay0_2;
    QLabel *labelDate0_2;
    QVBoxLayout *verticalLayout_13;
    QLabel *labelDay0_3;
    QLabel *labelDate0_3;
    QVBoxLayout *verticalLayout_14;
    QLabel *labelDay0_4;
    QLabel *labelDate0_4;
    QVBoxLayout *verticalLayout_15;
    QLabel *labelDay0_5;
    QLabel *labelDate0_5;
    QVBoxLayout *verticalLayout_16;
    QLabel *labelDay0_6;
    QLabel *labelDate0_6;
    QVBoxLayout *verticalLayout_17;
    QLabel *labelDay0_7;
    QLabel *labelDate0_7;
    QWidget *widget0403;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelAirq0;
    QLabel *labelAirq1;
    QLabel *labelAirq2;
    QLabel *labelAirq3;
    QLabel *labelAirq4;
    QLabel *labelAirq5;
    QWidget *widget0404;
    QWidget *widget0405;
    QWidget *widget0406;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_18;
    QLabel *labelDay0_8;
    QLabel *labelDate0_8;
    QVBoxLayout *verticalLayout_19;
    QLabel *labelDay0_9;
    QLabel *labelDate0_9;
    QVBoxLayout *verticalLayout_20;
    QLabel *labelDay0_10;
    QLabel *labelDate0_10;
    QVBoxLayout *verticalLayout_21;
    QLabel *labelDay0_11;
    QLabel *labelDate0_11;
    QVBoxLayout *verticalLayout_22;
    QLabel *labelDay0_12;
    QLabel *labelDate0_12;
    QVBoxLayout *verticalLayout_23;
    QLabel *labelDay0_13;
    QLabel *labelDate0_13;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(465, 863);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(9, 9, 451, 841));
        verticalLayout_25 = new QVBoxLayout(widget);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        widget01 = new QWidget(widget);
        widget01->setObjectName("widget01");
        widget01->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        horizontalLayout_6 = new QHBoxLayout(widget01);
        horizontalLayout_6->setSpacing(15);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, -1, 0, -1);
        lineEditCity = new QLineEdit(widget01);
        lineEditCity->setObjectName("lineEditCity");
        lineEditCity->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     padding: 0 8px;\n"
"     background: white;\n"
"     selection-background-color: darkgray;\n"
" }\n"
""));

        horizontalLayout_6->addWidget(lineEditCity);

        labelSearch = new QLabel(widget01);
        labelSearch->setObjectName("labelSearch");
        labelSearch->setMinimumSize(QSize(20, 20));
        labelSearch->setMaximumSize(QSize(20, 20));
        labelSearch->setPixmap(QPixmap(QString::fromUtf8(":/res/search.png")));
        labelSearch->setScaledContents(true);

        horizontalLayout_6->addWidget(labelSearch);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        labelCurrentDate = new QLabel(widget01);
        labelCurrentDate->setObjectName("labelCurrentDate");

        horizontalLayout_6->addWidget(labelCurrentDate);


        verticalLayout_25->addWidget(widget01);

        widget02 = new QWidget(widget);
        widget02->setObjectName("widget02");
        horizontalLayout_5 = new QHBoxLayout(widget02);
        horizontalLayout_5->setSpacing(35);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, -1, 0, -1);
        labelWeatherIcon = new QLabel(widget02);
        labelWeatherIcon->setObjectName("labelWeatherIcon");
        labelWeatherIcon->setMinimumSize(QSize(80, 80));
        labelWeatherIcon->setMaximumSize(QSize(80, 80));
        labelWeatherIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/sun.png")));
        labelWeatherIcon->setScaledContents(true);

        horizontalLayout_5->addWidget(labelWeatherIcon);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        labelWeatherType = new QLabel(widget02);
        labelWeatherType->setObjectName("labelWeatherType");
        labelWeatherType->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        gridLayout_2->addWidget(labelWeatherType, 1, 0, 1, 1);

        labelCity = new QLabel(widget02);
        labelCity->setObjectName("labelCity");
        labelCity->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        labelCity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelCity, 0, 3, 1, 1);

        labelTempRange = new QLabel(widget02);
        labelTempRange->setObjectName("labelTempRange");
        labelTempRange->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        gridLayout_2->addWidget(labelTempRange, 1, 2, 1, 1);

        labelTemp = new QLabel(widget02);
        labelTemp->setObjectName("labelTemp");
        QFont font;
        font.setPointSize(30);
        labelTemp->setFont(font);
        labelTemp->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));

        gridLayout_2->addWidget(labelTemp, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_2);


        verticalLayout_25->addWidget(widget02);

        widget03 = new QWidget(widget);
        widget03->setObjectName("widget03");
        widget03->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230)"));
        verticalLayout = new QVBoxLayout(widget03);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        label = new QLabel(widget03);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        widget0301 = new QWidget(widget03);
        widget0301->setObjectName("widget0301");
        widget0301->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 139, 0);\n"
"border-radius: 20px;"));
        gridLayout = new QGridLayout(widget0301);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(30, 30, 30, 30);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelFX = new QLabel(widget0301);
        labelFX->setObjectName("labelFX");
        labelFX->setMinimumSize(QSize(45, 45));
        labelFX->setMaximumSize(QSize(45, 45));
        labelFX->setPixmap(QPixmap(QString::fromUtf8(":/res/wind.png")));
        labelFX->setScaledContents(true);

        horizontalLayout->addWidget(labelFX);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelWindsType = new QLabel(widget0301);
        labelWindsType->setObjectName("labelWindsType");
        labelWindsType->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelWindsType);

        labelWindsType_data = new QLabel(widget0301);
        labelWindsType_data->setObjectName("labelWindsType_data");
        labelWindsType_data->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelWindsType_data);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelFX_2 = new QLabel(widget0301);
        labelFX_2->setObjectName("labelFX_2");
        labelFX_2->setMinimumSize(QSize(45, 45));
        labelFX_2->setMaximumSize(QSize(45, 45));
        labelFX_2->setPixmap(QPixmap(QString::fromUtf8(":/res/pm2.5.png")));
        labelFX_2->setScaledContents(true);

        horizontalLayout_2->addWidget(labelFX_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        labelPM25 = new QLabel(widget0301);
        labelPM25->setObjectName("labelPM25");
        labelPM25->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelPM25);

        labelPM25Data = new QLabel(widget0301);
        labelPM25Data->setObjectName("labelPM25Data");
        labelPM25Data->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelPM25Data);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelFX_4 = new QLabel(widget0301);
        labelFX_4->setObjectName("labelFX_4");
        labelFX_4->setMinimumSize(QSize(45, 45));
        labelFX_4->setMaximumSize(QSize(45, 45));
        labelFX_4->setPixmap(QPixmap(QString::fromUtf8(":/res/de.png")));
        labelFX_4->setScaledContents(true);

        horizontalLayout_4->addWidget(labelFX_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        labelHumidity = new QLabel(widget0301);
        labelHumidity->setObjectName("labelHumidity");
        labelHumidity->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelHumidity);

        labelHumidityData = new QLabel(widget0301);
        labelHumidityData->setObjectName("labelHumidityData");
        labelHumidityData->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelHumidityData);


        horizontalLayout_4->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelFX_3 = new QLabel(widget0301);
        labelFX_3->setObjectName("labelFX_3");
        labelFX_3->setMinimumSize(QSize(45, 45));
        labelFX_3->setMaximumSize(QSize(45, 45));
        labelFX_3->setPixmap(QPixmap(QString::fromUtf8(":/res/air qulity.png")));
        labelFX_3->setScaledContents(true);

        horizontalLayout_3->addWidget(labelFX_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        labelAirQuality = new QLabel(widget0301);
        labelAirQuality->setObjectName("labelAirQuality");
        labelAirQuality->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelAirQuality);

        labelAirQualityData = new QLabel(widget0301);
        labelAirQualityData->setObjectName("labelAirQualityData");
        labelAirQualityData->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelAirQualityData);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);


        verticalLayout->addWidget(widget0301);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

        verticalLayout_25->addWidget(widget03);

        widget04 = new QWidget(widget);
        widget04->setObjectName("widget04");
        verticalLayout_24 = new QVBoxLayout(widget04);
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalLayout_24->setContentsMargins(0, 0, 0, -1);
        widget0401 = new QWidget(widget04);
        widget0401->setObjectName("widget0401");
        widget0401->setMinimumSize(QSize(0, 60));
        horizontalLayout_8 = new QHBoxLayout(widget0401);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, -1, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        labelDay0 = new QLabel(widget0401);
        labelDay0->setObjectName("labelDay0");
        labelDay0->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_6->addWidget(labelDay0);

        labelDate0 = new QLabel(widget0401);
        labelDate0->setObjectName("labelDate0");
        labelDate0->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(labelDate0);


        horizontalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        labelDay1 = new QLabel(widget0401);
        labelDay1->setObjectName("labelDay1");
        labelDay1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay1->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_7->addWidget(labelDay1);

        labelDate1 = new QLabel(widget0401);
        labelDate1->setObjectName("labelDate1");
        labelDate1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate1->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(labelDate1);


        horizontalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        labelDay2 = new QLabel(widget0401);
        labelDay2->setObjectName("labelDay2");
        labelDay2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_8->addWidget(labelDay2);

        labelDate2 = new QLabel(widget0401);
        labelDate2->setObjectName("labelDate2");
        labelDate2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate2->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(labelDate2);


        horizontalLayout_8->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        labelDay3 = new QLabel(widget0401);
        labelDay3->setObjectName("labelDay3");
        labelDay3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_9->addWidget(labelDay3);

        labelDate3 = new QLabel(widget0401);
        labelDate3->setObjectName("labelDate3");
        labelDate3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate3->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(labelDate3);


        horizontalLayout_8->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        labelDay4 = new QLabel(widget0401);
        labelDay4->setObjectName("labelDay4");
        labelDay4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_10->addWidget(labelDay4);

        labelDate4 = new QLabel(widget0401);
        labelDate4->setObjectName("labelDate4");
        labelDate4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate4->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(labelDate4);


        horizontalLayout_8->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName("verticalLayout_11");
        labelDay5 = new QLabel(widget0401);
        labelDay5->setObjectName("labelDay5");
        labelDay5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_11->addWidget(labelDay5);

        labelDate5 = new QLabel(widget0401);
        labelDate5->setObjectName("labelDate5");
        labelDate5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate5->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(labelDate5);


        horizontalLayout_8->addLayout(verticalLayout_11);


        verticalLayout_24->addWidget(widget0401);

        widget0402 = new QWidget(widget04);
        widget0402->setObjectName("widget0402");
        gridLayout_3 = new QGridLayout(widget0402);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName("verticalLayout_12");
        labelDay0_2 = new QLabel(widget0402);
        labelDay0_2->setObjectName("labelDay0_2");
        labelDay0_2->setEnabled(true);
        labelDay0_2->setMinimumSize(QSize(0, 0));
        labelDay0_2->setMaximumSize(QSize(70, 50));
        labelDay0_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_2->setPixmap(QPixmap(QString::fromUtf8(":/res/cloudy.png")));
        labelDay0_2->setScaledContents(true);
        labelDay0_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_12->addWidget(labelDay0_2);

        labelDate0_2 = new QLabel(widget0402);
        labelDate0_2->setObjectName("labelDate0_2");
        labelDate0_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_2->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(labelDate0_2);


        gridLayout_3->addLayout(verticalLayout_12, 0, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName("verticalLayout_13");
        labelDay0_3 = new QLabel(widget0402);
        labelDay0_3->setObjectName("labelDay0_3");
        labelDay0_3->setMaximumSize(QSize(70, 50));
        labelDay0_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_3->setPixmap(QPixmap(QString::fromUtf8(":/res/cloudy.png")));
        labelDay0_3->setScaledContents(true);
        labelDay0_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_13->addWidget(labelDay0_3);

        labelDate0_3 = new QLabel(widget0402);
        labelDate0_3->setObjectName("labelDate0_3");
        labelDate0_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_3->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(labelDate0_3);


        gridLayout_3->addLayout(verticalLayout_13, 0, 1, 1, 1);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName("verticalLayout_14");
        labelDay0_4 = new QLabel(widget0402);
        labelDay0_4->setObjectName("labelDay0_4");
        labelDay0_4->setMaximumSize(QSize(70, 50));
        labelDay0_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_4->setPixmap(QPixmap(QString::fromUtf8(":/res/cloudy.png")));
        labelDay0_4->setScaledContents(true);
        labelDay0_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_14->addWidget(labelDay0_4);

        labelDate0_4 = new QLabel(widget0402);
        labelDate0_4->setObjectName("labelDate0_4");
        labelDate0_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_4->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(labelDate0_4);


        gridLayout_3->addLayout(verticalLayout_14, 0, 2, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName("verticalLayout_15");
        labelDay0_5 = new QLabel(widget0402);
        labelDay0_5->setObjectName("labelDay0_5");
        labelDay0_5->setMaximumSize(QSize(70, 50));
        labelDay0_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_5->setPixmap(QPixmap(QString::fromUtf8(":/res/cloudy.png")));
        labelDay0_5->setScaledContents(true);
        labelDay0_5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_15->addWidget(labelDay0_5);

        labelDate0_5 = new QLabel(widget0402);
        labelDate0_5->setObjectName("labelDate0_5");
        labelDate0_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_5->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(labelDate0_5);


        gridLayout_3->addLayout(verticalLayout_15, 0, 3, 1, 1);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName("verticalLayout_16");
        labelDay0_6 = new QLabel(widget0402);
        labelDay0_6->setObjectName("labelDay0_6");
        labelDay0_6->setMaximumSize(QSize(70, 50));
        labelDay0_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_6->setPixmap(QPixmap(QString::fromUtf8(":/res/sunny.png")));
        labelDay0_6->setScaledContents(true);
        labelDay0_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_16->addWidget(labelDay0_6);

        labelDate0_6 = new QLabel(widget0402);
        labelDate0_6->setObjectName("labelDate0_6");
        labelDate0_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_6->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(labelDate0_6);


        gridLayout_3->addLayout(verticalLayout_16, 0, 4, 1, 1);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName("verticalLayout_17");
        labelDay0_7 = new QLabel(widget0402);
        labelDay0_7->setObjectName("labelDay0_7");
        labelDay0_7->setMaximumSize(QSize(70, 50));
        labelDay0_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_7->setPixmap(QPixmap(QString::fromUtf8(":/res/cloudy.png")));
        labelDay0_7->setScaledContents(true);
        labelDay0_7->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_17->addWidget(labelDay0_7);

        labelDate0_7 = new QLabel(widget0402);
        labelDate0_7->setObjectName("labelDate0_7");
        labelDate0_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 119, 179);\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_7->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(labelDate0_7);


        gridLayout_3->addLayout(verticalLayout_17, 0, 5, 1, 1);


        verticalLayout_24->addWidget(widget0402);

        widget0403 = new QWidget(widget04);
        widget0403->setObjectName("widget0403");
        widget0403->setMinimumSize(QSize(0, 60));
        horizontalLayout_7 = new QHBoxLayout(widget0403);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelAirq0 = new QLabel(widget0403);
        labelAirq0->setObjectName("labelAirq0");
        labelAirq0->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 200, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
""));
        labelAirq0->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(labelAirq0);

        labelAirq1 = new QLabel(widget0403);
        labelAirq1->setObjectName("labelAirq1");
        labelAirq1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
""));
        labelAirq1->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(labelAirq1);

        labelAirq2 = new QLabel(widget0403);
        labelAirq2->setObjectName("labelAirq2");
        labelAirq2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 200, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
""));
        labelAirq2->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(labelAirq2);

        labelAirq3 = new QLabel(widget0403);
        labelAirq3->setObjectName("labelAirq3");
        labelAirq3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 200, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
""));
        labelAirq3->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(labelAirq3);

        labelAirq4 = new QLabel(widget0403);
        labelAirq4->setObjectName("labelAirq4");
        labelAirq4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 200, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
""));
        labelAirq4->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(labelAirq4);

        labelAirq5 = new QLabel(widget0403);
        labelAirq5->setObjectName("labelAirq5");
        labelAirq5->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 200, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
""));
        labelAirq5->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(labelAirq5);


        verticalLayout_24->addWidget(widget0403);

        widget0404 = new QWidget(widget04);
        widget0404->setObjectName("widget0404");
        widget0404->setMinimumSize(QSize(70, 80));
        widget0404->setMaximumSize(QSize(16777215, 80));
        widget0404->setCursor(QCursor(Qt::PointingHandCursor));
        widget0404->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 143, 143);\n"
"border-radius: 9px;"));

        verticalLayout_24->addWidget(widget0404);

        widget0405 = new QWidget(widget04);
        widget0405->setObjectName("widget0405");
        widget0405->setMinimumSize(QSize(0, 80));
        widget0405->setMaximumSize(QSize(16777215, 80));
        widget0405->setCursor(QCursor(Qt::PointingHandCursor));
        widget0405->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 143, 143);\n"
"border-radius: 9px;"));

        verticalLayout_24->addWidget(widget0405);

        widget0406 = new QWidget(widget04);
        widget0406->setObjectName("widget0406");
        widget0406->setMinimumSize(QSize(0, 60));
        horizontalLayout_9 = new QHBoxLayout(widget0406);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setObjectName("verticalLayout_18");
        labelDay0_8 = new QLabel(widget0406);
        labelDay0_8->setObjectName("labelDay0_8");
        labelDay0_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(91, 91, 91);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_8->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_18->addWidget(labelDay0_8);

        labelDate0_8 = new QLabel(widget0406);
        labelDate0_8->setObjectName("labelDate0_8");
        labelDate0_8->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 91, 91);\n"
"\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_8->setAlignment(Qt::AlignCenter);

        verticalLayout_18->addWidget(labelDate0_8);


        horizontalLayout_9->addLayout(verticalLayout_18);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName("verticalLayout_19");
        labelDay0_9 = new QLabel(widget0406);
        labelDay0_9->setObjectName("labelDay0_9");
        labelDay0_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(91, 91, 91);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_9->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_19->addWidget(labelDay0_9);

        labelDate0_9 = new QLabel(widget0406);
        labelDate0_9->setObjectName("labelDate0_9");
        labelDate0_9->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 91, 91);\n"
"\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_9->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(labelDate0_9);


        horizontalLayout_9->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setObjectName("verticalLayout_20");
        labelDay0_10 = new QLabel(widget0406);
        labelDay0_10->setObjectName("labelDay0_10");
        labelDay0_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(91, 91, 91);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_10->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_20->addWidget(labelDay0_10);

        labelDate0_10 = new QLabel(widget0406);
        labelDate0_10->setObjectName("labelDate0_10");
        labelDate0_10->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 91, 91);\n"
"\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_10->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(labelDate0_10);


        horizontalLayout_9->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setObjectName("verticalLayout_21");
        labelDay0_11 = new QLabel(widget0406);
        labelDay0_11->setObjectName("labelDay0_11");
        labelDay0_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(91, 91, 91);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_11->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_21->addWidget(labelDay0_11);

        labelDate0_11 = new QLabel(widget0406);
        labelDate0_11->setObjectName("labelDate0_11");
        labelDate0_11->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 91, 91);\n"
"\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_11->setAlignment(Qt::AlignCenter);

        verticalLayout_21->addWidget(labelDate0_11);


        horizontalLayout_9->addLayout(verticalLayout_21);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setObjectName("verticalLayout_22");
        labelDay0_12 = new QLabel(widget0406);
        labelDay0_12->setObjectName("labelDay0_12");
        labelDay0_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(91, 91, 91);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_12->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_22->addWidget(labelDay0_12);

        labelDate0_12 = new QLabel(widget0406);
        labelDate0_12->setObjectName("labelDate0_12");
        labelDate0_12->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 91, 91);\n"
"\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_12->setAlignment(Qt::AlignCenter);

        verticalLayout_22->addWidget(labelDate0_12);


        horizontalLayout_9->addLayout(verticalLayout_22);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setObjectName("verticalLayout_23");
        labelDay0_13 = new QLabel(widget0406);
        labelDay0_13->setObjectName("labelDay0_13");
        labelDay0_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(91, 91, 91);\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"\n"
""));
        labelDay0_13->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_23->addWidget(labelDay0_13);

        labelDate0_13 = new QLabel(widget0406);
        labelDate0_13->setObjectName("labelDate0_13");
        labelDate0_13->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 91, 91);\n"
"\n"
"color: rgb(255, 255, 255);\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;"));
        labelDate0_13->setAlignment(Qt::AlignCenter);

        verticalLayout_23->addWidget(labelDate0_13);


        horizontalLayout_9->addLayout(verticalLayout_23);


        verticalLayout_24->addWidget(widget0406);


        verticalLayout_25->addWidget(widget04);

        verticalLayout_25->setStretch(0, 1);
        verticalLayout_25->setStretch(1, 2);
        verticalLayout_25->setStretch(2, 3);
        verticalLayout_25->setStretch(3, 10);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEditCity->setPlaceholderText(QCoreApplication::translate("Widget", "\345\237\216\345\270\202", nullptr));
        labelSearch->setText(QString());
        labelCurrentDate->setText(QCoreApplication::translate("Widget", "2024/10/21          \346\230\237\346\234\237\344\270\200", nullptr));
        labelWeatherIcon->setText(QString());
        labelWeatherType->setText(QCoreApplication::translate("Widget", "\346\231\264\345\244\251", nullptr));
        labelCity->setText(QCoreApplication::translate("Widget", "\346\267\261\345\234\263\345\270\202    ", nullptr));
        labelTempRange->setText(QCoreApplication::translate("Widget", "20~26\342\204\203", nullptr));
        labelTemp->setText(QCoreApplication::translate("Widget", "23", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\220\204\347\261\273\344\272\272\347\276\244\345\217\257\350\207\252\347\224\261\346\264\273\345\212\250", nullptr));
        labelFX->setText(QString());
        labelWindsType->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelWindsType_data->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFX_2->setText(QString());
        labelPM25->setText(QCoreApplication::translate("Widget", "PM2.5", nullptr));
        labelPM25Data->setText(QCoreApplication::translate("Widget", "24", nullptr));
        labelFX_4->setText(QString());
        labelHumidity->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        labelHumidityData->setText(QCoreApplication::translate("Widget", "85%", nullptr));
        labelFX_3->setText(QString());
        labelAirQuality->setText(QCoreApplication::translate("Widget", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        labelAirQualityData->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelDay0->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDate0->setText(QCoreApplication::translate("Widget", "10/20", nullptr));
        labelDay1->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDate1->setText(QCoreApplication::translate("Widget", "10/20", nullptr));
        labelDay2->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDate2->setText(QCoreApplication::translate("Widget", "10/20", nullptr));
        labelDay3->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDate3->setText(QCoreApplication::translate("Widget", "10/20", nullptr));
        labelDay4->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDate4->setText(QCoreApplication::translate("Widget", "10/20", nullptr));
        labelDay5->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDate5->setText(QCoreApplication::translate("Widget", "10/20", nullptr));
        labelDay0_2->setText(QString());
        labelDate0_2->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelDay0_3->setText(QString());
        labelDate0_3->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelDay0_4->setText(QString());
        labelDate0_4->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelDay0_5->setText(QString());
        labelDate0_5->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelDay0_6->setText(QString());
        labelDate0_6->setText(QCoreApplication::translate("Widget", "\346\231\264", nullptr));
        labelDay0_7->setText(QString());
        labelDate0_7->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        labelAirq0->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelAirq1->setText(QCoreApplication::translate("Widget", "\350\211\257", nullptr));
        labelAirq2->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelAirq3->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelAirq4->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelAirq5->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelDay0_8->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelDate0_8->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelDay0_9->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelDate0_9->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelDay0_10->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelDate0_10->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelDay0_11->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelDate0_11->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelDay0_12->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelDate0_12->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelDay0_13->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelDate0_13->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
