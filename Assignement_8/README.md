# Assignment - The Greatest Common Divisor

This project is a C++ desktop GUI application built using **Qt 6** and **CMake**. It provides an interactive dialog window allowing users to calculate the Greatest Common Divisor (GCD) of two integer numbers.

## Features

* **Dynamic Input Validation:** The **Count** button remains disabled until both input fields (`Number 1` and `Number 2`) contain text.
* **GCD Calculation:** Uses the Euclidean algorithm to calculate the greatest common divisor of two integers and displays the result in a read-only output field (`QLineEdit`).
* **Error Handling:** Displays a warning dialog (`QMessageBox`) if the user enters non-integer values.
* **Safe Exit Confirmation:** Clicking the **Quit** button prompts the user with a confirmation message box before closing the application.

## Project Structure

* `main.cpp`: Entry point of the application that initializes `QApplication` and displays the main `problem` dialog window.
* `problem.h`: Header file declaring the `problem` class, UI widget pointers, setup helper methods, and slots.
* `problem.cpp`: Implementation file containing widget initialization (`createWidget`), layout organization (`makeLayout`), signal-slot connections (`makeConnections`), and GCD calculation logic.
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

4. Run the compiled application (`gcd_app`).