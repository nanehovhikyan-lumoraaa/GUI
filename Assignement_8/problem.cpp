#include "problem.h"
#include <QPainter>
#include <QPushButton>
#include <QTimer>
#include <QVBoxLayout>
#include <QHBoxLayout>

problem::problem(QWidget* p) : QDialog(p), currentState(0)
{
    setWindowTitle("Problem 8: Traffic Light");
    setFixedSize(260, 440);
    createWidget();
    makeLayout();
    makeConnections();
}

void problem::createWidget()
{
    pbNext = new QPushButton("Next");
    pbAuto = new QPushButton("Start Auto");

    timer = new QTimer(this);
    timer->setInterval(1500); // Switches every 1.5 seconds when running
}

void problem::makeLayout()
{
    QHBoxLayout* buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(pbNext);
    buttonLayout->addWidget(pbAuto);

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addStretch(); // Leaves top area open for the painted traffic light
    mainLayout->addLayout(buttonLayout);

    this->setLayout(mainLayout);
}

void problem::makeConnections()
{
    connect(pbNext, &QPushButton::clicked, this, &problem::nextLight);
    connect(pbAuto, &QPushButton::clicked, this, &problem::toggleAuto);
    connect(timer, &QTimer::timeout, this, &problem::nextLight);
}

void problem::nextLight()
{
    currentState = (currentState + 1) % 3;
    update(); // Triggers paintEvent() to redraw the lights
}

void problem::toggleAuto()
{
    if (timer->isActive()) {
        timer->stop();
        pbAuto->setText("Start Auto");
    } else {
        timer->start();
        pbAuto->setText("Stop Auto");
    }
}

void problem::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Draw dark gray traffic light housing box
    int boxWidth = 120;
    int boxHeight = 330;
    int boxX = (width() - boxWidth) / 2;
    int boxY = 20;

    painter.setBrush(QColor(45, 45, 45));
    painter.setPen(Qt::black);
    painter.drawRoundedRect(boxX, boxY, boxWidth, boxHeight, 15, 15);

    // Circle dimensions
    int diameter = 80;
    int circleX = boxX + (boxWidth - diameter) / 2;

    // 1. Red Light (State 0)
    if (currentState == 0)
        painter.setBrush(Qt::red);
    else
        painter.setBrush(QColor(90, 20, 20)); // Dimmed red
    painter.drawEllipse(circleX, boxY + 25, diameter, diameter);

    // 2. Yellow Light (State 1)
    if (currentState == 1)
        painter.setBrush(Qt::yellow);
    else
        painter.setBrush(QColor(90, 90, 20)); // Dimmed yellow
    painter.drawEllipse(circleX, boxY + 125, diameter, diameter);

    // 3. Green Light (State 2)
    if (currentState == 2)
        painter.setBrush(Qt::green);
    else
        painter.setBrush(QColor(20, 90, 20)); // Dimmed green
    painter.drawEllipse(circleX, boxY + 225, diameter, diameter);
}