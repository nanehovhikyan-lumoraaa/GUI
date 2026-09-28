# Qt6 Find Dialog Widget (Work in Progress)

An under-development C++ desktop application built using the **Qt 6** framework[cite: 9]. This project defines a custom `findDialog` subclass inheriting from `QDialog` featuring UI components like labels, line edits, checkboxes, and buttons[cite: 10, 11].

## Prerequisites

Before building and running the project, ensure you have:
* **C++ Compiler** supporting C++17 or later[cite: 9]
* **CMake** (version 3.16 or higher)[cite: 9]
* **Qt 6** (with the `Widgets` module)[cite: 9]

## Project Structure

* `CMakeLists.txt` — CMake build configuration file linking against the required Qt6 Widgets component and specifying source/header files (`findDialog.cpp`, `findDialog.h`, `main.cpp`)[cite: 9].
* `findDialog.h` — Header file declaring the `findDialog` class structure and its private UI pointer members[cite: 10].
* `main.cpp` — Main application entry point initializing the application and displaying the dialog instance[cite: 11].

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





