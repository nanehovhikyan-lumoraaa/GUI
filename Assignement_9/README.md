# Problem 9 - The CircleBar Widget and a Horizontal Slider

This project is a C++ desktop GUI application built using **Qt 6** and **CMake**. It implements a custom `CircleBar` widget paired with a horizontal `QSlider` that stays synchronized through signals, slots, and mouse wheel event handling.

## Features

* **Custom `CircleBar` Widget (`QPainter`):** Displays a value between `0` and `100` using two concentric circles—an outer reference ring representing `100` and an inner filled circle that scales from a central dot at `0` up to the full outer circle at `100`.
* **Mouse Wheel Control (`wheelEvent`):** Overrides `QWidget::wheelEvent` so scrolling the mouse wheel or trackpad over the `CircleBar` increments or decrements its value.
* **Two-Way Slider Synchronization:** Connects `QSlider::valueChanged` and `CircleBar::valueChanged` so dragging the slider updates the circle and scrolling on the circle moves the slider.

## Project Structure

* `main.cpp`: Entry point of the application that initializes `QApplication` and displays the `problem` dialog window.
* `circlebar.h`: Header file declaring the custom `CircleBar` widget, its `value()` getter, `setValue(int)` slot, `valueChanged(int)` signal, and `paintEvent` / `wheelEvent` overrides.
* `circlebar.cpp`: Implementation file containing value clamping, mouse wheel stepping, and custom 2D circle rendering.
* `problem.h`: Header file declaring the `problem` dialog class and pointers to `CircleBar` and `QSlider`.
* `problem.cpp`: Implementation file setting up the widgets (`createWidget`), vertical layout (`makeLayout`), and two-way signal-slot connections (`makeConnections`).
* `CMakeLists.txt`: Build configuration file for CMake and Qt 6 Widgets.

## Requirements

* **C++ Compiler:** Supporting C++17 or later.
* **Qt 6:** Specifically the `Widgets` module (`find_package(Qt6 REQUIRED COMPONENTS Widgets)`).
* **CMake:** Version 3.16 or higher.

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

4. Run the compiled application (`circlebar`).