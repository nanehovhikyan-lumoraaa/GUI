# Qt Problem 2 Application

A simple desktop application built with **Qt (C++)** that features real-time text synchronization between two input fields, alongside auxiliary control buttons.

---

## Features

* **Real-Time Text Mirroring:** As the user types text into the first `QLineEdit`, it is simultaneously printed into the second (read-only) `QLineEdit`[cite: 2, 5].
* **Clear Functionality:** Includes a clear button (`pb2`) connected to clear both text input fields instantly[cite: 5].
* **Close Functionality:** Includes a close button (`pb1`) to exit the application window gracefully[cite: 5].
* **Structured UI Layout:** Built utilizing nested vertical and horizontal layouts (`QVBoxLayout`, `QHBoxLayout`) inheriting from `QDialog`[cite: 5, 6].

---

## Project Structure

* **`main.cpp`**: Initializes the `QApplication` instance, instantiates the main dialog window, and starts the event loop[cite: 4].
* **`problem.h`**: Header file declaring the `problem` class, inheriting from `QDialog`, and defining private widgets and helper methods[cite: 6].
* **`problem.cpp`**: Implementation file containing widget setup, layout configuration, and signal-slot connections[cite: 5].

---

## Requirements

* **C++ Compiler** (supporting C++11 or later)
* **Qt 5** or **Qt 6** framework

---

## Getting Started & Compilation

If you are using **qmake**, run the following commands in your project terminal:

```bash
qmake -project
qmake
make