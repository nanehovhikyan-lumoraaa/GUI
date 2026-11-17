#include "problem.h"
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QMessageBox>

problem::problem(QWidget* p) : QDialog(p)
{
    setWindowTitle("The Greatest Common Divisor");
    createWidget();
    makeLayout();
    makeConnections();
}

void problem::createWidget()
{
    leNumber1 = new QLineEdit;
    leNumber2 = new QLineEdit;
    
    leResult = new QLineEdit;
    leResult->setReadOnly(true);
    leResult->setText("1"); // Default state

    pbCount = new QPushButton("Count");
    pbCount->setEnabled(false); // Disabled by default until both inputs are filled

    pbQuit = new QPushButton("Quit");
}

void problem::makeLayout()
{
    // Using a QGridLayout to align labels and line edits side-by-side
    QGridLayout* gridLayout = new QGridLayout;
    gridLayout->addWidget(new QLabel("Number 1:"), 0, 0);
    gridLayout->addWidget(leNumber1, 0, 1);
    
    gridLayout->addWidget(new QLabel("Number 2:"), 1, 0);
    gridLayout->addWidget(leNumber2, 1, 1);
    
    gridLayout->addWidget(new QLabel("The Greatest Common Divisor:"), 2, 0);
    gridLayout->addWidget(leResult, 2, 1);

    // Right-side vertical layout for the buttons
    QVBoxLayout* buttonLayout = new QVBoxLayout;
    buttonLayout->addWidget(pbCount);
    buttonLayout->addWidget(pbQuit);
    buttonLayout->addStretch();

    // Main layout combining the grid and buttons horizontally
    QHBoxLayout* mainLayout = new QHBoxLayout;
    mainLayout->addLayout(gridLayout);
    mainLayout->addLayout(buttonLayout);

    this->setLayout(mainLayout);
}

void problem::makeConnections()
{
    // Monitor both text inputs to enable/disable the Count button
    connect(leNumber1, &QLineEdit::textChanged, this, &problem::checkInputs);
    connect(leNumber2, &QLineEdit::textChanged, this, &problem::checkInputs);

    // Count button triggers GCD calculation
    connect(pbCount, &QPushButton::clicked, this, &problem::calculateGCD);

    // Quit button triggers exit check
    connect(pbQuit, &QPushButton::clicked, this, &problem::checkExit);
}

void problem::checkInputs(const QString&)
{
    // Enable Count button only if both text fields are non-empty
    bool bothFilled = !leNumber1->text().trimmed().isEmpty() && !leNumber2->text().trimmed().isEmpty();
    pbCount->setEnabled(bothFilled);
}

void problem::calculateGCD()
{
    bool ok1, ok2;
    int a = leNumber1->text().toInt(&ok1);
    int b = leNumber2->text().toInt(&ok2);

    if (!ok1 || !ok2) {
        QMessageBox::warning(this, "Invalid Input", "Please enter valid integer numbers.");
        return;
    }

    // Euclidean algorithm for GCD
    a = qAbs(a);
    b = qAbs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    leResult->setText(QString::number(a));
}

void problem::checkExit()
{
    int r = QMessageBox::question(this, "Exit", "Are you sure you want to exit?",
                                    QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
    if (r == QMessageBox::Yes)
        close();
}