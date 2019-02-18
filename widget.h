#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_fetch_button_clicked();
    void data_ready_read();
    void data_read_finished();

private:
    Ui::Widget *ui;
    QNetworkAccessManager* manager;
    QNetworkReply* reply;
    QByteArray* buffer_array;
};

#endif // WIDGET_H
