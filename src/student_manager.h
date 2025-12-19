#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include <vector>
#include "student.h"

class StudentManager {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student);
    void addStudentFromInput();
    void viewStudents() const;
};

#endif
