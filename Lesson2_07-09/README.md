# Qt6 Exit Button Application

A lightweight C++ desktop application built using the **Qt 6** framework[cite: 6]. This project demonstrates event handling by connecting a push button's click signal directly to the application's quit slot to instantly close the program[cite: 5].

## Prerequisites

Before building and running the project, ensure you have:
* **C++ Compiler** supporting C++17 or later[cite: 6]
* **CMake** (version 3.16 or higher)[cite: 6]
* **Qt 6** (with the `Widgets` module)[cite: 6]

## Project Structure

* `CMakeLists.txt` — CMake build configuration file linking against the required Qt6 Widgets component[cite: 6].
* `clodeDiolog.cpp` — Main application file containing the `main` function, an "Exit" push button, and the signal-slot connection to terminate the event loop[cite: 5].

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



