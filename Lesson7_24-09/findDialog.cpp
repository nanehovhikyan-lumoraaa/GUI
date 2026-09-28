#include "findDialog.h"

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QVBoxLayout>

findDialog::findDialog(QWidget* p) : QDialog(p)
{
    createWidgets();

    makeWidgetsLayout();

    makeConnections();
}

void findDialog::createWidgets()
{
    find_label = new QLabel(" &Find What: ");
    text = new QLineEdit;
    match_case = new QCheckBox("Match case");
    backward = new QCheckBox("Search backward");
    find = new QPushButton("Find");
    find->setEnabled(false);
    close = new QPushButton("Close");
    find_label->setBuddy(text);
}

void findDialog::makeWidgetsLayout()
{
    QHBoxLayout* topLyt = new QHBoxLayout;
    topLyt->addWidget(find_label);
    topLyt->addWidget(text);

    QVBoxLayout* leftLyt = new QVBoxLayout;
    leftLyt->addLayout(topLyt);
    leftLyt->addWidget(match_case);
    leftLyt->addWidget(backward);

    QVBoxLayout* rightLyt = new QVBoxLayout;
    rightLyt->addWidget(find);
    rightLyt->addWidget(close);
    rightLyt->addStretch();

    QHBoxLayout* mainLyt = new QHBoxLayout;
    mainLyt->addLayout(leftLyt);
    mainLyt->addLayout(rightLyt);

    this->setLayout(mainLyt);
}

void findDialog::makeConnections()
{
    QObject::connect(close, SIGNAL(clicked()), this, SLOT(close()));
    // QObject::connect(text, SIGNAL(textChanged(QString)), this, SLOT(checkText(QString)));
    // modern
    connect(text, &QLineEdit::textChanged, this, &findDialog::checkText);
    connect(find, SIGNAL(clicked()), this, SLOT(find_text()));
    setWindowTitle("Find...");
}

void findDialog::checkText(const QString& str)
{
    find->setEnabled(!str.isEmpty());
}

void findDialog::find_text()
{
    Qt::CaseSensitivity cs = match_case->isChecked() ? Qt::CaseSensitive : Qt::CaseInsensitive;
    QString text_to_find = text->text();            // text() is the same as getText()
    if (backward->isChecked())
    {
        emit findPrev(text_to_find, cs);
    }
    else{
        emit findNext(text_to_find, cs);
    }
}