#include <QApplication>
#include "findDialog.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    findDialog* fd = new findDialog;
    fd->show();
    
    return app.exec();
}