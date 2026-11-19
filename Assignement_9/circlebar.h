#ifndef CIRCLEBAR_H
#define CIRCLEBAR_H

#include <QWidget>

class QPaintEvent;
class QWheelEvent;

class CircleBar : public QWidget
{
    Q_OBJECT
public:
    CircleBar(QWidget* p = nullptr);
    int value() const;

public slots:
    void setValue(int v);

signals:
    void valueChanged(int newValue);

protected:
    void paintEvent(QPaintEvent* event) override;
    void wheelEvent(QWheelEvent* event) override;

private:
    int m_value;
};

#endif