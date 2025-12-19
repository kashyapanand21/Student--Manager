#include <iostream>
#include "student_manager.h"

int main() {
    StudentManager manager;

    Student s;
    s.id = 1;
    s.name = "Test Student";

    manager.addStudent(s);
    manager.viewStudents();

    return 0;
}
