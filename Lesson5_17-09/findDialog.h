#ifndef FINDDIALOG_H            // Include guard
#define FINDDIALOG_H

#include <QDialog>

class QLabel;                   // Forward declarartions
class QLineEdit;
class QCheckBox;
class QPushButton;

class findDialog : public QDialog
{
public:
//constructor
    findDialog(QWidget* p = nullptr);
private:
    void makeWidgetsLayout();
    void createWidgets();
private slots:
    void checkText(const QString& str);
private:
    QLabel* find_label;
    QLineEdit* text;
    QPushButton* find;
    QPushButton* close;
    QCheckBox* match_case;
    QCheckBox* backward;
};

#endif