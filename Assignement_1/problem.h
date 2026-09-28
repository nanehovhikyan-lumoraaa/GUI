#ifndef PROBLEM_H
#define PROBLEM_H

#include <QDialog>

class QLabel;
class QPushButton;
class QLineEdit;

class problem : public QDialog
{
    Q_OBJECT
    public:
        problem(QWidget* p = nullptr);
    private:
        void createdWidget();
        void makeLayout();
        void makeConnections();
    private slots:
        void fillText();
    private:
        QLineEdit* le1;
        QLineEdit* le2;
        QPushButton* pb;
        QPushButton* pb2;
}; 

#endif