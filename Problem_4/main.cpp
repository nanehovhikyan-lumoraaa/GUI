#include <QApplication>
#include "problem.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    MainWindow* p = new MainWindow;
    p->show();

    return app.exec();
}