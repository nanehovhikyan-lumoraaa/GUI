#ifndef PROBLEM_H
#define PROBLEM_H

#include <QDialog>

class CircleBar;
class QSlider;

class problem : public QDialog
{
    Q_OBJECT
public:
    problem(QWidget* p = nullptr);

private:
    void createWidget();
    void makeLayout();
    void makeConnections();

private:
    CircleBar* circleBar;
    QSlider* slider;
};

#endif