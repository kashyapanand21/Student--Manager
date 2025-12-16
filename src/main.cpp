#include <iostream>
#include "student.h"
using namespace std;

void showMenu() {
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Exit" << endl;
}

int main() {
    cout << "Student Manager started" << endl;
    showMenu();

    Student s;
    s.id = 1;
    s.name = "Test Student";

    return 0;
}

