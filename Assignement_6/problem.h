#ifndef PROBLEM_H
#define PROBLEM_H

#include <QDialog>

class QLineEdit;
class QPushButton;
class QLabel;

class problem : public QDialog
{
    Q_OBJECT
public:
    problem(QWidget* p = nullptr);

private slots:
    void calculateGCD();
    void checkInputs(const QString& text);
    void checkExit();

private:
    void createWidget();
    void makeLayout();
    void makeConnections();

private:
    QLineEdit* leNumber1;
    QLineEdit* leNumber2;
    QLineEdit* leResult;
    QPushButton* pbCount;
    QPushButton* pbQuit;
};

#endif