# Qt6 Simple Widget Application

A lightweight C++ desktop application built using the **Qt 6** framework. This project serves as a basic template demonstrating window creation, labels, and push buttons with absolute positioning (`setGeometry`).

## Prerequisites

Before building and running the project, ensure you have the following installed on your system:
* **C++ Compiler** supporting C++17 or later (e.g., GCC, Clang, MSVC)
* **CMake** (version 3.16 or higher)
* **Qt 6** (specifically the `Widgets` component)

## Project Structure

* `CMakeLists.txt` — CMake configuration file specifying project requirements, dependencies, and target link libraries for Qt6.
* `test_1.cpp` — Main source file containing the entry point (`main`), application loop, and window UI setup.

## Building and Running

You can build and run the project using standard CMake commands in your terminal:

1. **Create a build directory:**
   bash
   mkdir build
   cd build
   

2. **Configure the project with CMake:**
   bash
   cmake ..
   
   *(Note: If Qt6 is installed in a custom path, you may need to pass `-DCMAKE_PREFIX_PATH=/path/to/qt` to this command).*

3. **Build the executable:**
   bash
   cmake --build .
   

4. **Run the application:**
   * **On Linux/macOS:** `./first`
   * **On Windows:** `.\Debug\first.exe` (or `.\first.exe` depending on your generator)