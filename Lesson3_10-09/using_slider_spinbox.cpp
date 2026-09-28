#include <QApplication>
#include <QSpinBox>
#include <QSlider>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // create widgets
    QSpinBox* age = new QSpinBox;
    age->setRange(0, 140);
    QSlider* sl = new QSlider(Qt::Horizontal);
    sl->setRange(0, 140);

    // create layout
    QWidget* frame = new QWidget;
    frame->setWindowTitle("Enter Your Age");
    QHBoxLayout* lyt = new QHBoxLayout;
    lyt->addWidget(age);
    lyt->addWidget(sl);
    frame->setLayout(lyt);
    frame->show();

    //create connections
    QObject::connect(age, SIGNAL(valueChanged(int)), sl, SLOT(setValue(int)));
    QObject::connect(sl, SIGNAL(valueChanged(int)), age, SLOT(setValue(int)));
    age->setValue(19);

    return app.exec();
}