# Qt6 Minimal Label Application

A minimalist C++ desktop application built using the **Qt 6** framework[cite: 3]. This project displays a simple standalone window with rich-text label formatting[cite: 4].

## Prerequisites

Before building and running the project, ensure you have:
* **C++ Compiler** supporting C++17 or later[cite: 3]
* **CMake** (version 3.16 or higher)[cite: 3]
* **Qt 6** (with the `Widgets` module)[cite: 3]

## Project Structure

* `CMakeLists.txt` — CMake build configuration file for the project[cite: 3].
* `main.cpp` — Entry point containing the application instance and a formatted `QLabel` window[cite: 4].

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



