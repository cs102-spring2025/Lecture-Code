#include "student.h"
#include <iostream>
using namespace std;

int main() {
    Student student1("Alice Brown", 3.5, 88.0, 91.0);
    student1.write_output();
    Student student2("John Smith", 4.0);
    student2.write_output();
    student2.set_cs_grade(99.0);
    student2.write_output();

    return 0;
}