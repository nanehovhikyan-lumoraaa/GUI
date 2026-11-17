#ifndef PROBLEM_H
#define PROBLEM_H

#include <QDialog>

class QPushButton;
class QTimer;

class problem : public QDialog
{
    Q_OBJECT
public:
    problem(QWidget* p = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override;

private slots:
    void nextLight();
    void toggleAuto();

private:
    void createWidget();
    void makeLayout();
    void makeConnections();

private:
    int currentState; // 0 = Red, 1 = Yellow, 2 = Green
    QTimer* timer;
    QPushButton* pbNext;
    QPushButton* pbAuto;
};

#endif