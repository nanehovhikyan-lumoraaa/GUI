# Problem 8 - Traffic Light

This project is a C++ desktop GUI application built using **Qt 6** and **CMake**. It implements an interactive traffic light widget with custom 2D graphics rendering and both manual and automatic state cycling.

## Features

* **Custom 2D Graphics (`QPainter`):** Draws a rounded traffic light housing box and three circular lights (Red, Yellow, Green) with smooth antialiasing, highlighting the active state while dimming the inactive ones.
* **Manual State Control:** Clicking the **Next** button immediately cycles the traffic light to the next state in sequence (`Red` $\rightarrow$ `Yellow` $\rightarrow$ `Green`).
* **Automatic Timer Mode (`QTimer`):** Clicking **Start Auto** initiates a timer that automatically switches the light every 1.5 seconds. Clicking **Stop Auto** pauses the cycle.

## Project Structure

* `main.cpp`: Entry point of the application that initializes `QApplication` and displays the `problem` dialog window.
* `problem.h`: Header file declaring the `problem` class, state tracking variables, widget pointers, slots, and the `paintEvent` override.
* `problem.cpp`: Implementation file containing widget initialization (`createWidget`), layout setup (`makeLayout`), signal-slot connections (`makeConnections`), state switching logic, and custom drawing in `paintEvent`.
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
4. Run the compiled application (`traffic_light`).