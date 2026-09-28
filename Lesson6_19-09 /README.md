# Qt6 Advanced Find Dialog with Signals & Slots

An advanced C++ desktop application built using the **Qt 6** framework[cite: 16]. This project extends the custom `findDialog` widget by introducing explicit custom `signals` (`findPrev`, `findNext`), case-sensitivity options, search direction handling via checkboxes, and enabling CMake's Automatic Meta-Object Compiler (`CMAKE_AUTOMOC`) to support Qt's signal-slot mechanism[cite: 16, 17, 18].

## Prerequisites

Before building and running the project, ensure you have:
* **C++ Compiler** supporting C++17 or later[cite: 16]
* **CMake** (version 3.16 or higher)[cite: 16]
* **Qt 6** (with the `Widgets` module)[cite: 16]

## Project Structure

* `CMakeLists.txt` — CMake build configuration file enabling `CMAKE_AUTOMOC`, specifying the project sources (`findDialog.cpp`, `findDialog.h`, `main.cpp`), and linking against Qt6 Widgets[cite: 16].
* `findDialog.h` — Header file containing the class declaration with the `Q_OBJECT` macro, custom signals, private helper functions, and slots (`checkText`, `find_text`)[cite: 18].
* `findDialog.cpp` — Implementation file managing the UI components, layout organization, signal-slot connections, and search logic with case-sensitivity options[cite: 17].
* `main.cpp` — Application entry point initializing the `QApplication` and showing the `findDialog` window[cite: 19].

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





