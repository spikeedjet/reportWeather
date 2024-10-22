#include "widget.h"
#include "ui_widget.h"

#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QNetworkReply>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(465,863);

    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    // QUrl url("http://gfeljm.tianqiapi.com/api?unescape=1&version=v61&appid=86381825&appsecret=Bsflh9cJ");
    QUrl url("http://t.weather.itboy.net");

    reply = manager->get(QNetworkRequest(url));
    connect(reply,&QNetworkReply::finished,
            this,&Widget::replyFinished);


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
        qDebug()<< QString::fromUtf8(rep);
    }
}
