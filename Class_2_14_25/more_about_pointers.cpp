/**
 * @file more_about_pointers.cpp
 * @author Karyn Doke
 * @brief demonstrates pointers
 * @version 0.1
 * @date 2025-02-14
 */

#include <iostream>
using namespace std;

int main() {
    // take note that you need to place a * in front of each pointer variable,
    // in other words, * applies only to the name that followed. 
    int *p1, *p2, i; 	// p1 and p2 are pointers, i is an int
	int* p3, p4, j;	    // p3 is an int pointer, p4 and j are ints.
	int * p5, * p6, k;  // p5 and p6 are int pointers, k is an int.

    // dereferencing a pointer
    // if we want to retrieve the actual value stored at the 
    // address a pointer is pointing to
    int number = 2;
    int* number_ptr = &number;
    cout << *number_ptr << endl;

    // reassigning pointers gives us the ability 
    // to dynamically change the memory we are working with
    int* another_ptr = number_ptr;
    cout << "address another_ptr is pointing to : " 
    << another_ptr << " address number_prt is pointing to : " 
    << number_ptr << endl;

    // get the address where a pointer is stored NOT pointing to
    cout << &number_ptr << endl;

    return 0;
}