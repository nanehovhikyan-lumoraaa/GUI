#include "problem.h"

#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>

problem::problem(QWidget* p): QDialog(p)
{
    setWindowTitle("My first program!");
    createdWidget();
    makeLayout();
    makeConnections();
}

void problem::createdWidget()
{
    // le1 = new QLineEdit("Original");
    // le2 = new QLineEdit("Copied");
    le1 = new QLineEdit();
    le1->setPlaceholderText("Original");

    le2 = new QLineEdit();
    le2->setPlaceholderText("Copied");
    le2->setReadOnly(true);

    pb = new QPushButton("Print");
    pb2 = new QPushButton("Close");
    // pb2->setAutoDefault(true);
    // pb->setDefault(true);
    // pb2->setFocus();
}

void problem::makeLayout()
{
    QVBoxLayout* right_layout = new QVBoxLayout;
    right_layout->addWidget(le1);
    right_layout->addWidget(le2);

    QVBoxLayout* left_layout = new QVBoxLayout;
    left_layout->addWidget(pb);
    left_layout->addWidget(pb2);

    QHBoxLayout* main_layout = new QHBoxLayout;
    main_layout->addLayout(right_layout);
    main_layout->addLayout(left_layout);

    this->setLayout(main_layout);
}

void problem::makeConnections()
{
    connect(pb, &QPushButton::clicked, this, &problem::fillText);
    connect(pb2, &QPushButton::clicked, this, &QWidget::close);
}

void problem::fillText()
{
    QString textToPrint = le1->text();
    le2->setText(textToPrint);
}