#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>

class QLineEdit;
class QPushButton;
class QTextBrowser;
class QVBoxLayout;
class QHBoxLayout;

class MainWindow : public QDialog {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
private slots:
    void printText();
private:
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;
    QPushButton *printButton;
    QPushButton *quitButton;
};

#endif