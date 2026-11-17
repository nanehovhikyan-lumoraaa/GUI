#include "problem.h"
#include <QLabel>
#include <QPushButton>
#include <QRadioButton>
#include <QSpinBox>
#include <QSlider>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QColorDialog>
#include <QFont>

problem::problem(QWidget* p) : QDialog(p), currentColor(QColor(219, 48, 122)) // Default pink/magenta
{
    setWindowTitle("homework4_changingFontSizeColor");
    createWidget();
    makeLayout();
    makeConnections();
    updateTextStyling();
}

void problem::createWidget()
{
    // Top Display Label
    displayLabel = new QLabel("I love Qt... Now I can change font, font size, font color...");
    displayLabel->setAlignment(Qt::AlignCenter);
    displayLabel->setMinimumHeight(100);
    displayLabel->setStyleSheet(
        "QLabel {"
        "   border: 1px solid black;"
        "   background-color: white;"
        "   padding: 10px;"
        "}"
    );

    // Color Button
    colorButton = new QPushButton("Choose Color");

    // Font Family Radio Buttons
    rbArial = new QRadioButton("Arial");
    rbTimes = new QRadioButton("Times New Roman");
    rbTimes->setChecked(true); // Default selection
    rbImpact = new QRadioButton("Impact");
    rbCourier = new QRadioButton("Courier New");

    // Font Size Controls
    sizeSpinBox = new QSpinBox;
    sizeSpinBox->setRange(8, 72);
    sizeSpinBox->setValue(25);

    sizeSlider = new QSlider(Qt::Horizontal);
    sizeSlider->setRange(8, 72);
    sizeSlider->setValue(25);
}

void problem::makeLayout()
{
    // Color Box Layout
    QVBoxLayout* colorLayout = new QVBoxLayout;
    colorLayout->addWidget(colorButton);
    colorLayout->addStretch();
    QGroupBox* colorGroup = new QGroupBox("Set Color");
    colorGroup->setLayout(colorLayout);

    // Select Font Box Layout
    QVBoxLayout* fontLayout = new QVBoxLayout;
    fontLayout->addWidget(rbArial);
    fontLayout->addWidget(rbTimes);
    fontLayout->addWidget(rbImpact);
    fontLayout->addWidget(rbCourier);
    QGroupBox* fontGroup = new QGroupBox("Select Font");
    fontGroup->setLayout(fontLayout);

    // Set Font Size Box Layout
    QHBoxLayout* sizeWidgetsLayout = new QHBoxLayout;
    sizeWidgetsLayout->addWidget(sizeSpinBox);
    sizeWidgetsLayout->addWidget(sizeSlider);
    
    QVBoxLayout* sizeLayout = new QVBoxLayout;
    sizeLayout->addLayout(sizeWidgetsLayout);
    sizeLayout->addStretch();
    QGroupBox* sizeGroup = new QGroupBox("Set Font Size");
    sizeGroup->setLayout(sizeLayout);

    // Bottom horizontal layout containing all three groups
    QHBoxLayout* bottomLayout = new QHBoxLayout;
    bottomLayout->addWidget(colorGroup);
    bottomLayout->addWidget(fontGroup);
    bottomLayout->addWidget(sizeGroup);

    // Main vertical layout
    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addWidget(displayLabel);
    mainLayout->addLayout(bottomLayout);

    this->setLayout(mainLayout);
}

void problem::makeConnections()
{
    // Radio buttons for font styling
    connect(rbArial, &QRadioButton::toggled, this, &problem::updateTextStyling);
    connect(rbTimes, &QRadioButton::toggled, this, &problem::updateTextStyling);
    connect(rbImpact, &QRadioButton::toggled, this, &problem::updateTextStyling);
    connect(rbCourier, &QRadioButton::toggled, this, &problem::updateTextStyling);

    // Synchronize slider and spinbox
    connect(sizeSlider, &QSlider::valueChanged, sizeSpinBox, &QSpinBox::setValue);
    connect(sizeSpinBox, &QSpinBox::valueChanged, sizeSlider, &QSlider::setValue);

    // Spinbox value changes trigger style updates
    connect(sizeSpinBox, &QSpinBox::valueChanged, this, &problem::updateTextStyling);

    // Color button click opens color dialog
    connect(colorButton, &QPushButton::clicked, this, &problem::chooseColorClicked);
}

void problem::updateTextStyling()
{
    // Determine font family from selected radio button
    QString fontFamily = "Times New Roman";
    if (rbArial->isChecked()) fontFamily = "Arial";
    else if (rbTimes->isChecked()) fontFamily = "Times New Roman";
    else if (rbImpact->isChecked()) fontFamily = "Impact";
    else if (rbCourier->isChecked()) fontFamily = "Courier New";

    // Get current size
    int fontSize = sizeSpinBox->value();

    // Apply font family and size
    QFont font(fontFamily, fontSize);
    displayLabel->setFont(font);

    // Apply text color
    displayLabel->setStyleSheet("color: " + currentColor.name() + ";");
}

void problem::chooseColorClicked()
{
    QColor color = QColorDialog::getColor(currentColor, this, "Choose Font Color");
    if (color.isValid()) {
        currentColor = color;
        updateTextStyling();
    }
}