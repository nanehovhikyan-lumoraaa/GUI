#include "problem.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QMessageBox>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent) {
    setWindowTitle("Exit Dialog Example");
    resize(400, 300);
    QMenuBar *bar = new QMenuBar(this);
    setMenuBar(bar);
    QMenu *fileMenu = menuBar()->addMenu("&File");
    QAction *exitAction = new QAction("&Exit", this);
    exitAction->setShortcut(QKeySequence::Quit);
    connect(exitAction, &QAction::triggered, this, &MainWindow::handleExit);
    fileMenu->addAction(exitAction);
}

void MainWindow::handleExit() {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit Application",
                                  "Do you really want to exit the application?", 
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
}