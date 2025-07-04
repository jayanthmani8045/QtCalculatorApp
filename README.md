# Qt Calculator App

A simple calculator desktop application built with C++ and Qt.

## Features

* Basic arithmetic operations: addition, subtraction, multiplication, and division
* Intuitive graphical user interface
* Converts input text to integers and displays results

## Prerequisites

* Windows 10 or later
* Qt 5.12 (or later) runtime libraries installed
* Minimized package includes `QtLearn.exe` and necessary Qt DLLs

## Getting Started

1. **Download & Unzip**

   * Download the ZIP archive containing the application files.
   * Extract (unzip) the contents to a directory of your choice.

2. **Run the Application**

   * Inside the extracted folder, locate `QtLearn.exe`.
   * Double-click `QtLearn.exe` to launch the calculator.

## Windows 64-Bit Execution

This application is built and tested on **Windows 10 (64-bit)** and later. To run it on a 64-bit system:

1. Confirm your machine is running a 64-bit version of Windows.
2. Ensure the extracted folder contains `QtLearn.exe` and the required Qt DLLs.
3. Double‑click on `QtLearn.exe` to launch the program.
4. If you encounter missing DLL errors, make sure you have the **Qt 5.12 (or later) 64-bit runtime** installed or place the corresponding Qt DLLs alongside `QtLearn.exe`.

## Usage

1. Launch the application.
2. Enter two integer values in the **First Number** and **Second Number** fields.
3. Click one of the operation buttons:

   * **+** (Add)
   * **−** (Subtract)
   * **×** (Multiply)
   * **÷** (Divide)
4. The result will be displayed in the **Result** field.

## File Structure

```
QtCalculatorApp.zip
│
├── QtLearn.exe          # Executable file
├── Qt5Core.dll         # Qt core library
├── Qt5Widgets.dll      # Qt widgets library
├── Qt5Gui.dll          # Qt GUI library
└── resources/          # Any additional resources (if included)
```

## Building from Source (Optional)

If you wish to modify or rebuild the application:

1. Open `QtLearn.pro` in Qt Creator.
2. Configure the project with your installed Qt version.
3. Build and run from within Qt Creator.

## License

This project is licensed under the MIT License. See `LICENSE` for details.

---

*Enjoy using the Qt Calculator App!*
