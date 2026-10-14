#include "mainwindow.h"
#include <QFont>
#include <QColor>

#include <QLineEdit>
#include <QPushButton>
#include <QTextBrowser>
#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) : QDialog(parent) {
    setWindowTitle("Text Printer App");
    resize(450, 400);

    lineEdit = new QLineEdit(this);
    lineEdit->setPlaceholderText("Type something here...");

    textBrowser = new QTextBrowser(this);
    textBrowser->setPlaceholderText("Styled output will appear here...");

    printButton = new QPushButton("Print", this);
    quitButton = new QPushButton("Quit", this);

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(printButton);
    buttonLayout->addWidget(quitButton);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(lineEdit);
    mainLayout->addWidget(textBrowser);
    mainLayout->addLayout(buttonLayout);

    connect(printButton, &QPushButton::clicked, this, &MainWindow::printText);
    connect(quitButton, &QPushButton::clicked, this, &MainWindow::close);
}

void MainWindow::printText() {
    QString input = lineEdit->text();
    if (input.isEmpty()) {
        textBrowser->setHtml("<span style='color: red;'>Please enter some text first!</span>");
        return;
    }

    QStringList fonts = {"Arial", "Courier New", "Comic Sans MS", "Times New Roman", "Verdana"};
    QStringList colors = {"#e74c3c", "#3498db", "#2ecc71", "#9b59b6", "#e67e22"};
    QList<int> sizes = {12, 16, 20, 14, 18};

    QString htmlOutput = "<h3>Printed Variations:</h3><ul>";

    for (int i = 0; i < fonts.size(); ++i) {
        QString fontName = fonts[i];
        QString color = colors[i];
        int size = sizes.at(i % sizes.size());

        htmlOutput += QString("<li><span style='font-family: %1; color: %2; font-size: %3pt;'>%4</span> "
                              "<small style='color: gray;'>(Font: %1, Size: %3pt)</small></li>")
                      .arg(fontName)
                      .arg(color)
                      .arg(size)
                      .arg(input.toHtmlEscaped());
    }

    htmlOutput += "</ul>";
    textBrowser->setHtml(htmlOutput);
}