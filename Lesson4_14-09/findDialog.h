#ifndef FINDDIOLOG_H
#define FINDDIOLOG_H

#include <QDiolog>

class QLabel;
class QLineEdit;
class QCheckBox;
class QPushButton;

class findDialog : public QDiolog
{
public:
//constructor
    findDialog(QWidget* p == nullptr);
private:
    QLabel* find_label;
    QLineEdit* text;
    QPushButton* find;
    QPushButton* close;
    QCheckBox* match_case;
    QCheckBox* backward;
};

#endif