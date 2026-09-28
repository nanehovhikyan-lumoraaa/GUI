# Qt6 Find Dialog Complete Implementation

A complete C++ desktop application built using the **Qt 6** framework[cite: 12]. This project implements a fully functional custom `findDialog` widget inheriting from `QDialog`, featuring a structured layout with nested horizontal and vertical layouts (`QHBoxLayout`, `QVBoxLayout`), buddy labels, checkboxes, and dynamic button enabling based on text input[cite: 13, 14, 15].

## Prerequisites

Before building and running the project, ensure you have:
* **C++ Compiler** supporting C++17 or later[cite: 12]
* **CMake** (version 3.16 or higher)[cite: 12]
* **Qt 6** (with the `Widgets` module)[cite: 12]

## Project Structure

* `CMakeLists.txt` — CMake build configuration file specifying the project sources (`findDialog.cpp`, `findDialog.h`, `main.cpp`) and linking against Qt6 Widgets[cite: 12].
* `findDialog.h` — Header file containing class declarations, forward declarations, private helper functions (`createWidgets`, `makeWidgetsLayout`), and private slots (`checkText`)[cite: 14].
* `findDialog.cpp` — Implementation file containing the UI component initialization, layout management, and modern signal-slot connections[cite: 13].
* `main.cpp` — Application entry point instantiating the `QApplication` and showing the `findDialog` window[cite: 15].

## Building and Running

1. **Create a build directory:**
   bash
   mkdir build
   cd build



2. **Configure the project with CMake:**
bash
cmake -S .. -B .




*(If Qt6 is in a custom location, add `-DCMAKE_PREFIX_PATH=/path/to/qt`)*
3. **Build the executable:**
bash
cmake --build .




4. **Run the application:**
* **Linux/macOS:** `./first`
* **Windows:** `.\first.exe` (or inside your generator's configuration folder like `Debug/first.exe`)





