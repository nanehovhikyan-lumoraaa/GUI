#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.resize(400, 300);
    window.setWindowTitle("My first program!");

    QLabel* label = new QLabel("New Button", &window);
    label->setGeometry(50, 50, 120, 30);

    QPushButton* button = new QPushButton("Yes", &window);
    button->setGeometry(50, 100, 100, 30);

    window.show();

    return app.exec();
}