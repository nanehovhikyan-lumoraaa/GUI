```markdown
# Qt6 QMessageBox Overview (Theory & Lecture Notes)

This document covers the theoretical concepts and usage patterns of **`QMessageBox`** introduced during the university GUI programming lecture. No new code file was written for this lesson, as it focused on understanding standard dialog popups provided by Qt.

## What is QMessageBox?

`QMessageBox` is a modal dialog box used to inform the user or ask questions and receive answers. It provides a quick, standard way to display critical messages, warnings, informational notes, or confirmation prompts using native OS styling.

## Common Use Cases

* **Information:** Displaying non-critical status updates or notices (e.g., "File successfully saved").
* **Warnings:** Alerting users to potential issues (e.g., "Connection unstable").
* **Critical Errors:** Highlighting blocking failures (e.g., "Failed to open database").
* **Questions / Confirmations:** Asking the user to make a choice before proceeding (e.g., "Do you want to save changes before closing?").

## Standard Static Methods

Qt provides convenient static helper functions to instantly show standard message boxes without manually configuring layout or buttons:

1. **Information Box:**
   ```cpp
   QMessageBox::information(this, "Title", "Operation completed successfully.");

```

2. **Warning Box:**
```cpp
QMessageBox::warning(this, "Warning", "Disk space is running low.");

```


3. **Critical Error Box:**
```cpp
QMessageBox::critical(this, "Error", "An unhandled exception occurred.");

```


4. **Question / Confirmation Box:**
```cpp
QMessageBox::StandardButton reply;
reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to exit?",
                              QMessageBox::Yes | QMessageBox::No);
if (reply == QMessageBox::Yes) {
    // Handle yes case
}

```



## Key Standard Buttons

When building custom message boxes, you can combine standard button flags using the bitwise OR (`|`) operator, such as:

* `QMessageBox::Ok`
* `QMessageBox::Save`
* `QMessageBox::Discard`
* `QMessageBox::Cancel`
* `QMessageBox::Yes`
* `QMessageBox::No`

```

```