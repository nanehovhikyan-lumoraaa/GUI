#ifndef PROBLEM_H
#define PROBLEM_H

#include <QDialog>
#include <QColor>

class QLabel;
class QPushButton;
class QRadioButton;
class QSpinBox;
class QSlider;
class QGroupBox;

class problem : public QDialog
{
    Q_OBJECT
public:
    problem(QWidget* p = nullptr);

private slots:
    void updateTextStyling();
    void chooseColorClicked();

private:
    void createWidget();
    void makeLayout();
    void makeConnections();

private:
    QLabel* displayLabel;
    
    // Set Color Group
    QPushButton* colorButton;
    QColor currentColor;

    // Select Font Group
    QRadioButton* rbArial;
    QRadioButton* rbTimes;
    QRadioButton* rbImpact;
    QRadioButton* rbCourier;

    // Set Font Size Group
    QSpinBox* sizeSpinBox;
    QSlider* sizeSlider;
};

#endif