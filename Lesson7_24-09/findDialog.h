#ifndef FINDDIALOG_H            // Include guard
#define FINDDIALOG_H

#include <QDialog>

class QLabel;                   // Forward declarartions
class QLineEdit;
class QCheckBox;
class QPushButton;

class findDialog : public QDialog
{
    Q_OBJECT
public:
//constructor
    findDialog(QWidget* p = nullptr);
private:
    void makeWidgetsLayout();
    void createWidgets();
    void makeConnections();
signals:
    void findPrev(const QString&, Qt::CaseSensitivity);
    void findNext(const QString&, Qt::CaseSensitivity);
private slots:
    void checkText(const QString& str);
    void find_text();
private:
    QLabel* find_label;
    QLineEdit* text;
    QPushButton* find;
    QPushButton* close;
    QCheckBox* match_case;
    QCheckBox* backward;
};

#endif