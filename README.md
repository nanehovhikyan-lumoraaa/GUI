# University GUI Programming Projects (Qt 6)

This repository contains a collection of C++ GUI desktop applications and widgets developed as part of university coursework and laboratory assignments for GUI programming using the **Qt 6** framework.

## About the Projects

These projects document the step-by-step learning progression, starting from basic standalone windows and single widgets up to custom reusable dialog classes, signal-slot architectures, and two-way component synchronization.

## Project Structure & Progression

Each subfolder represents a distinct lesson or incremental milestone:

1. **Basic Window & Labels** (`test_1.cpp`, `CMakeLists.txt`): Introduction to creating a `QApplication`, basic window geometry, labels, and push buttons with absolute positioning[cite: 1, 2].
2. **Minimal Text Label** (`main.cpp`, `CMakeLists_2.txt`): Minimalist application demonstrating rich-text label formatting (`QLabel`)[cite: 3, 4].
3. **Exit Dialog / Event Handling** (`clodeDiolog.cpp`, `CMakeLists_3.txt`): Demonstrating manual signal-slot connections linking a button click directly to the application's quit loop[cite: 5, 6].
4. **SpinBox & Slider Synchronization** (`using_slider_spinbox.cpp`, `CMakeLists_4.txt`): Bidirectional data binding and layout management (`QHBoxLayout`) keeping a `QSpinBox` and `QSlider` synchronized in real-time[cite: 7, 8].
5. **Custom Dialog Classes & Layouts** (`findDialog` series): 
   * Transitioning to custom subclasses inheriting from `QDialog`.
   * Building complex layouts using nested horizontal (`QHBoxLayout`) and vertical (`QVBoxLayout`) boxes.
   * Implementing custom `signals` and `slots`, buddy labels, checkboxes, and enabling CMake's Automatic Meta-Object Compiler (`CMAKE_AUTOMOC`) for Qt's meta-object system[cite: 12, 13, 14, 16, 17, 18].
6. **Data-Copy Problem Application** (`problem.cpp`, `CMakeLists_9.txt`): Practical forms featuring editable vs. read-only line edits (`QLineEdit`) and action handlers[cite: 24, 25, 26, 27].

## General Build Instructions

All projects are configured using **CMake** (version 3.16 or higher) and target **Qt 6**[cite: 1, 3, 6, 7, 9, 12, 16, 20, 24]. To build any individual project:

1. Navigate into the project folder.
2. Create and enter a build directory:
   ```bash
   mkdir build
   cd build


3. Configure and build:
```bash
cmake -S .. -B .
cmake --build .



4. Run the generated executable.
