#include <iostream>
#include <string>

const int NUM_STUDENTS = 20;

int main()
{
    // syntax Ch 7.1
    // base_type array_name[number_of_elements];

    // example
    std::string cats[3];

    // we can use a constant to set the length
    int students[NUM_STUDENTS];

    int number_students = 20;
    // most compilers will no accept a variable
    int student_ids[number_students];

    // we can declare an array and initialize at the same time
    int rbg[3] = {255, 255, 255};
    bool weekdays[7]= {false, true, true, true, true, true, false};

    // if you don't initialize your array just like variables you will
    // get random values
    int random[100];

    return 0;

}