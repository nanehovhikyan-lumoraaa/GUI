# Qt6 SpinBox and Slider Synchronizer

An interactive C++ desktop application built using the **Qt 6** framework[cite: 7]. This project demonstrates two-way widget synchronization and layout management by linking a `QSpinBox` and a horizontal `QSlider` so that updating one automatically updates the other in real-time[cite: 8].

## Prerequisites

Before building and running the project, ensure you have:
* **C++ Compiler** supporting C++17 or later[cite: 7]
* **CMake** (version 3.16 or higher)[cite: 7]
* **Qt 6** (with the `Widgets` module)[cite: 7]

## Project Structure

* `CMakeLists.txt` — CMake build configuration file linking against the required Qt6 Widgets component[cite: 7].
* `using_slider_spinbox.cpp` — Main application file containing the UI setup, horizontal layout configuration, and bidirectional signal-slot connections between the spinbox and slider[cite: 8].

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





