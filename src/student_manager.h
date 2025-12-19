#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include <vector>
#include "student.h"
using namespace std ;
class StudentManager {
private:
    vector<Student> students;

public:
    void addStudent(const Student& student);
    void viewStudents() const;
};

#endif
