#ifndef PROBLEM_H
#define PROBLEM_H

#include <QDialog>
class QLineEdit;
class QPushButton;

class problem: public QDialog
{
    Q_OBJECT
    public:
        problem(QWidget* p = nullptr);
    private:
        void createWidget();
        void makeLayout();
        void makeConnections();
    private:
        QLineEdit* le1;
        QLineEdit* le2;
        QPushButton* pb1;
        QPushButton* pb2;
};

#endif