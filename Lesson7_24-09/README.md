# Qt6 Finalized Find Dialog Widget

A complete C++ desktop application built using the **Qt 6** framework[cite: 20]. This project refines the `findDialog` widget by organizing internal layout and setup helper methods (`createWidgets`, `makeWidgetsLayout`, `makeConnections`) within a clean class structure enabled with `CMAKE_AUTOMOC`[cite: 20, 21, 22].

## Prerequisites

Before building and running the project, ensure you have:
* **C++ Compiler** supporting C++17 or later[cite: 20]
* **CMake** (version 3.16 or higher)[cite: 20]
* **Qt 6** (with the `Widgets` module)[cite: 20]

## Project Structure

* `CMakeLists.txt` — CMake build configuration file enabling `CMAKE_AUTOMOC`, specifying the project sources (`findDialog.cpp`, `findDialog.h`, `main.cpp`), and linking against Qt6 Widgets[cite: 20].
* `findDialog.h` — Header file containing the class declaration with the `Q_OBJECT` macro, custom search signals, private helper functions, and slots[cite: 22].
* `findDialog.cpp` — Implementation file managing the UI components, organized helper routines, signal-slot connections, and case-sensitive/backward search emission logic[cite: 21].
* `main.cpp` — Application entry point initializing the `QApplication` and showing the `findDialog` window[cite: 23].

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





