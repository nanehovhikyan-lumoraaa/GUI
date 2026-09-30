#include "problem.h"
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

problem::problem(QWidget* p): QDialog(p)
{
    setWindowTitle("Assignement 2");
    createWidget();
    makeLayout();
    makeConnections();
}

void problem::createWidget()
{
    le1 = new QLineEdit;
    le2 = new QLineEdit;
    pb1 = new QPushButton("Close");
    pb2 = new QPushButton("Clear");
    le1->setPlaceholderText("Line 1");
    le2->setPlaceholderText("line 2");
    le2->setReadOnly(true);
}

void problem::makeLayout()
{
    QVBoxLayout* left_layout = new QVBoxLayout;
    left_layout->addWidget(le1);
    left_layout->addWidget(le2);

    QVBoxLayout* right_layout = new QVBoxLayout;
    right_layout->addWidget(pb1);
    right_layout->addWidget(pb2);

    QHBoxLayout* main_layout = new QHBoxLayout;
    main_layout->addLayout(left_layout);
    main_layout->addLayout(right_layout);
    this->setLayout(main_layout);
}

void problem::makeConnections()
{
    connect(le1, &QLineEdit::textChanged, le2, &QLineEdit::setText);
    connect(pb1, &QPushButton::clicked, this, &QWidget::close);
    connect(pb2, &QPushButton::clicked, le1, &QLineEdit::clear);
    connect(pb2, &QPushButton::clicked, le2, &QLineEdit::clear);
}