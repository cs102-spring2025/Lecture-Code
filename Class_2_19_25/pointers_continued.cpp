/**
 * @file pointers_continued.cpp
 * @author Karyn Doke
 * @brief more about pointers
 * @version 0.1
 * @date 2025-02-16
 */
#include <iostream>
using namespace std;

int main () {

    int v1 = 42; // declare a variable of type int
    int* p1 = &v1; // declare a pointer pointing to address v1
    int* p2 = p1; // p2 and p1 point to the same memory address
    cout << v1 << endl; // cout v1 value
    cout << *p1 << endl; // dereference p1 and cout the value
    cout << *p2 << endl; // dereference p2 and cout the value

    // be careful!!!!!
    p1 = p2; // this assigns the memory address that p2 is pointing to to p1
    *p1 = *p2; // this changes the value where p2 is pointing to the value where p1 is pointing 

    // declaring a pointer without initializing it
    int* ptr;
    cout << *ptr << " " << &ptr;

    // Dereferencing a pointer allows us to modify the value at the memory 
    // address it points to, without needing direct access to the original variable.
    int v2 = 100;
    p2 = &v2; // p2 points to v2
    *p2 = 999; // change the value where p2 is pointing to 999
    cout  << *p2 << " and " << v2 << endl;
    return 0;
}