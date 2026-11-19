#include "circlebar.h"
#include <QPainter>
#include <QPaintEvent>
#include <QWheelEvent>
#include <QtMath>

CircleBar::CircleBar(QWidget* p) : QWidget(p), m_value(0)
{
    setMinimumSize(180, 180);
}

int CircleBar::value() const
{
    return m_value;
}

void CircleBar::setValue(int v)
{
    if (v < 0)
    {
        v = 0;
    }
    if (v > 100)
    {
        v = 100;
    }
    if (m_value == v)
    {
        return;
    }
    m_value = v;
    emit valueChanged(m_value);
    update();
}

void CircleBar::wheelEvent(QWheelEvent* event)
{
    int deltaY = event->angleDelta().y();
    int step = 0;
    if (deltaY > 0)
    {
        step = 1;
    }
    else if (deltaY < 0)
    {
        step = -1;
    }

    if (step != 0)
    {
        setValue(m_value + step);
        event->accept();
    }
    else
    {
        event->ignore();
    }
}

void CircleBar::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    int side = qMin(width(), height()) - 20;
    if (side < 10)
    {
        side = 10;
    }

    int centerX = width() / 2;
    int centerY = height() / 2;
    int outerRadius = side / 2;

    // Outer circle outline (represents value 100)
    painter.setPen(QPen(Qt::black, 1));
    painter.setBrush(Qt::NoBrush);
    painter.drawEllipse(QPoint(centerX, centerY), outerRadius, outerRadius);

    // Inner filled circle: value 0 is a small dot, value 100 fills outerRadius
    int minRadius = 3;
    int innerRadius = minRadius + ((outerRadius - minRadius) * m_value) / 100;

    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.drawEllipse(QPoint(centerX, centerY), innerRadius, innerRadius);
}