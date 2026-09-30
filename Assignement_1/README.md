# Qt Problem Application (Print Button Variant)

A simple desktop application built with **Qt (C++)** that demonstrates button-triggered text copying between two input fields using custom slots and signals.

---

## Features

* **Explicit Button-Triggered Copying:** As the user types into the first `QLineEdit`, the text is copied to the second (read-only) `QLineEdit` only when the **Print** button (`pb`) is clicked.
* **Custom Slot Implementation:** Uses a custom slot (`fillText()`) connected to the print button's click signal to retrieve text and update the destination field.
* **Close Functionality:** Includes a **Close** button (`pb2`) connected directly to the `QWidget::close` slot to exit the application.
* **Structured UI Layout:** Built utilizing nested vertical and horizontal layouts (`QVBoxLayout`, `QHBoxLayout`) within a `QDialog` base class.

---

## Project Structure

* **`main.cpp`**: Initializes the `QApplication` instance, creates the main dialog window, and starts the event loop.
* **`problem.h`**: Header file declaring the `problem` class (inheriting from `QDialog`), private widgets, helper methods, and the custom `fillText()` slot.
* **`problem.cpp`**: Implementation file containing widget initialization, layout configuration, and signal-slot connection definitions.

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
```

Then run the compiled executable to launch your application!