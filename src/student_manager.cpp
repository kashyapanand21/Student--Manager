#include "student_manager.h"
#include <iostream>
#include <fstream>
#include <sstream>


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

void StudentManager::loadFromFile() {
    std::ifstream file("students.txt");
    if (!file.is_open()) {
        return; // File may not exist yet — not an error
    }

    students.clear();
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string idStr, name;

        if (!std::getline(ss, idStr, ',')) continue;
        if (!std::getline(ss, name)) continue;

        Student s;
        s.id = std::stoi(idStr);
        s.name = name;

        students.push_back(s);
    }
}

void StudentManager::saveToFile() const {
    std::ofstream file("students.txt");
    for (const auto& s : students) {
        file << s.id << "," << s.name << "\n";
    }
}

