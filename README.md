# Student Manager (C++)

A command-line application to manage student records with persistent storage, built using modern C++ and a professional GitHub workflow.

## Features
- Add student records via CLI
- View all stored students
- Persistent storage using file I/O
- Input validation to prevent crashes
- Clean modular C++ design

## Project Structure
src/
├── main.cpp              # Application entry point and menu handling
├── student.h             # Student data structure
├── student.cpp
├── student_manager.h     # Manages student collection and operations
├── student_manager.cpp
students.txt              # Runtime data file (generated at runtime)

## Build and Run

### Requirements
- C++ compiler (g++ recommended)
- Git

### Compile
```bash
g++ src/main.cpp src/student.cpp src/student_manager.cpp -o app
./app


If someone can’t run it after this, **you failed**.

---

## 5️⃣ How data persistence works (short but clear)

```md
## Data Persistence

Student records are saved to a local file (`students.txt`) when the program exits.
On startup, existing records are automatically loaded from this file.

## Development Workflow

This project was developed using:
- Feature branches
- GitHub Issues
- Pull Requests
- Versioned releases (v0.1 – v0.6)

This simulates a real-world collaborative workflow.

## Future Improvements
- Autosave after each modification
- Better input validation and error messages
- Configurable data file path
