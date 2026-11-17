# Assignment 5 - Changing Font, Size, and Color

This project is a C++ desktop GUI application built using **Qt 6** and **CMake**. It allows users to dynamically customize the font family, font size, and text color of a displayed message in real time.

## Features

- **Font Family Selection:** Switch between *Arial*, *Times New Roman*, *Impact*, and *Courier New* using radio buttons (`QRadioButton`).
- **Font Size Control:** Adjust the font size smoothly using either the horizontal slider (`QSlider`) or the numeric spin box (`QSpinBox`), which stay synchronized with each other.
- **Color Picker:** Click the **Choose Color** button to open a standard `QColorDialog` and apply any selected color to the text.
- **Live Text Preview:** A central `QLabel` updates immediately whenever any font, size, or color setting changes.

## Project Structure

- `main.cpp`: Entry point of the application that initializes `QApplication` and displays the main `problem` dialog window.
- `problem.h`: Header file declaring the `problem` class, UI widget pointers, setup helper methods, and slots.
- `problem.cpp`: Implementation file containing widget initialization (`createWidget`), layout organization (`makeLayout`), signal-slot connections (`makeConnections`), and dynamic styling logic.
- `CMakeLists.txt`: Build configuration file for CMake and Qt 6 Widgets.

## Requirements

- **C++ Compiler:** Supporting C++17 or later.
- **Qt 6:** Specifically the `Widgets` module (`find_package(Qt6 REQUIRED COMPONENTS Widgets)`).
- **CMake:** Version 3.16 or higher.

## How to Build and Run

1. Open your terminal in the project directory.
2. Create a build directory and configure the project using CMake:
   ```bash
   mkdir build
   cd build
   cmake ..
   ```
3. Build the executable:
   ```bash
   cmake --build .
   ```
4. Run the compiled application (`first`).