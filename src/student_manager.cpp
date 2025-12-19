#include "student_manager.h"
#include <iostream>

void StudentManager::addStudent(const Student& student) {
    students.push_back(student);
}

void StudentManager::addStudentFromInput() {
    Student s;
    std::cout << "Enter student ID: ";
    std::cin >> s.id;

    std::cout << "Enter student name: ";
    std::cin.ignore();
    std::getline(std::cin, s.name);

    students.push_back(s);
}

void StudentManager::viewStudents() const {
    if (students.empty()) {
        std::cout << "No students found.\n";
        return;
    }

    std::cout << "\n--- Student List ---\n";
    for (const auto& s : students) {
        std::cout << "ID   : " << s.id << "\n";
        std::cout << "Name : " << s.name << "\n";
        std::cout << "-------------------\n";
    }
}

