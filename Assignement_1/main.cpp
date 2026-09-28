#include <QApplication>
#include "problem.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    problem* p = new problem();
    p->show();

    return app.exec();
}