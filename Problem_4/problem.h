#ifndef PROBLEM_H
#define PROBLEM_H

#include <QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
private slots:
    void handleExit();
};

#endif