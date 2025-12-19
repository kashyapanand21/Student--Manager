#include "student_manager.h"
#include <iostream>
using namespace std ;
void StudentManager::addStudent(const Student& student) {
    students.push_back(student);
}

void StudentManager::viewStudents() const {
    for (const auto& s : students) {
        cout << "ID: " << s.id << ", Name: " << s.name << endl;
    }
}
