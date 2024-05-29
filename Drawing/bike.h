#ifndef BIKE_H
#define BIKE_H

#include <QWidget>
#include <QPainter>
#include <QPen>

class Bike : public QWidget
{


public:
    explicit Bike(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override {
        QPainter painter(this);
        QPen pen(Qt::black, 2);
        painter.setPen(pen);

        // Wheels
        painter.drawEllipse(QPoint(75, 150), 30, 30);
        painter.drawEllipse(QPoint(175, 150), 30, 30);

        //Main Frame

        painter.drawLine(QPoint(75, 150), QPoint(175, 150));
        painter.drawLine(QPoint(75, 150), QPoint(90, 90));

        painter.drawEllipse(QPoint(125, 150), 10, 10);

        painter.drawEllipse(QPoint(175, 150), 5, 5);

        painter.drawLine(QPoint(90, 90), QPoint(100, 100));

        painter.drawLine(QPoint(90, 90), QPoint(80, 80));

        painter.drawLine(QPoint(175, 150), QPoint(180, 100));

        painter.drawLine(QPoint(180, 100), QPoint(200, 100));
        painter.drawLine(QPoint(180, 100), QPoint(160, 100));

        painter.drawLine(QPoint(180, 100), QPoint(75, 150));

        painter.drawLine(QPoint(125, 140), QPoint(175, 145));

        painter.drawLine(QPoint(125, 160), QPoint(175, 155));

        painter.drawLine(QPoint(125, 150), QPoint(110, 140));

        painter.drawLine(QPoint(125, 150), QPoint(140, 160));

    }
};

#endif // BIKE_H
