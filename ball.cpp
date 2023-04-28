#include "ball.h"
#include <QPainter>
#include <QTimer>

Ball::Ball(QWidget *parent) : QWidget(parent)
{
    x = 0;
    y = 0;
    dx = 1;
    dy = 1;

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(10);
}

void Ball::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setBrush(Qt::red);
    painter.setPen(Qt::black);
    painter.drawEllipse(x, y, 20, 20);
}

void Ball::move()
{
    x += dx;
    y += dy;

    if (x < 0)
    {
        x = 0;
        dx = -dx;
    }

    if (x > width() - 20)
    {
        x = width() - 20;
        dx = -dx;
    }

    if (y < 0)
    {
        y = 0;
        dy = -dy;
    }

    if (y > height() - 20)
    {
        y = height() - 20;
        dy = -dy;
    }

    update();
}
