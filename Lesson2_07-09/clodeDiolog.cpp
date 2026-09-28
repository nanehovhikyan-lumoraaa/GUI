#include <QApplication>
#include <QPushButton>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    QPushButton* pb = new QPushButton("Exit");
    QObject::connect(pb, SIGNAL(clicked()), &a, SLOT(quit()));      // what to do when the button is clicked
    pb->show();          // -> because it's a button
    a.exec();
}