#include <iostream>
#include "student_manager.h"
#include <limits>


int main() {
    StudentManager manager;
    manager.loadFromFile();

    int choice;
while (true) {
    std::cout << "\n1. Add Student\n2. View Students\n3. Exit\n";
    std::cout << "Enter choice: ";

    if (!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input.\n";
        continue;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (choice == 1) {
        manager.addStudentFromInput();
    } else if (choice == 2) {
        manager.viewStudents();
    } else if (choice == 3) {
        manager.saveToFile();
        break;
    } else {
        std::cout << "Invalid choice.\n";
    }
}

    manager.saveToFile();


    return 0;
}
