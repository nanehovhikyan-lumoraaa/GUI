# Assignment 2 - Qt C++ Application

This project is a simple C++ desktop application built using **Qt 6** and **CMake**. It provides a dialog window with text fields, a clear utility, and a safe exit confirmation prompt.

## Features

- **Text Mirroring:** Typing into the first input field (`QLineEdit`) automatically updates the read-only second input field in real-time.
- **Clear Functionality:** The "Clear" button clears the text from both input fields simultaneously.
- **Confirmation Dialog:** Clicking the "Close" button triggers a `QMessageBox` asking the user to confirm whether they really want to exit the application.

## Project Structure

- `main.cpp`: Entry point of the application that instantiates the `problem` dialog window.
- `problem.h`: Header file declaring the `problem` class, its child widgets, layout/setup methods, and the `checkExit` slot.
- `problem.cpp`: Implementation file handling widget instantiation, UI layouts, signal-slot connections, and the exit confirmation logic.
- `CMakeLists.txt`: Build configuration file for CMake.

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