#include <iostream>
#include "student_manager.h"

int main() {
    StudentManager manager;
    int choice;

    while (true) {
        std::cout << "\n1. Add Student\n2. View Students\n3. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            manager.addStudentFromInput();
        } 
        else if (choice == 2) {
            manager.viewStudents();
        } 
        else if (choice == 3) {
            break;
        } 
        else {
            std::cout << "Invalid choice\n";
        }
    }

    return 0;
}
