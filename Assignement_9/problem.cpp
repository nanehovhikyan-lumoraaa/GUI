#include "problem.h"
#include "circlebar.h"
#include <QSlider>
#include <QVBoxLayout>

problem::problem(QWidget* p) : QDialog(p)
{
    setWindowTitle("circlebar");
    createWidget();
    makeLayout();
    makeConnections();
}

void problem::createWidget()
{
    circleBar = new CircleBar;
    circleBar->setValue(35);

    slider = new QSlider(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(35);
}

void problem::makeLayout()
{
    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addWidget(circleBar);
    mainLayout->addWidget(slider);

    this->setLayout(mainLayout);
}

void problem::makeConnections()
{
    connect(slider, &QSlider::valueChanged, circleBar, &CircleBar::setValue);
    connect(circleBar, &CircleBar::valueChanged, slider, &QSlider::setValue);
}