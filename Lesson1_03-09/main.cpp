#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QLabel *lbl = new QLabel("Hello, <b>GUI-4</b>");
    lbl->show();

    return app.exec();
}