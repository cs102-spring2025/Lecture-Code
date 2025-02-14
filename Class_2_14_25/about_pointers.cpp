/**
 * @file about_pointers.cpp
 * @author Karyn Doke
 * @brief introduces pointer syntax
 * @version 0.1
 * @date 2025-02-12
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

    // assign 2 to variable number
    int number = 2;
    // output the address of number using address-of operator &
    cout << number << " is at address " << &number << endl;

    //declaring pointers
    // type *ptr
    // type * ptr
    // type* ptr  --> we will adopt this syntax

    // declare a pointer and assign the memory address of number
    int* number_ptr = &number;
    cout << "number_ptr is pointing to: " << number_ptr  << endl;

    // declare a pointer of type string
    string* string_ptr;
    string name = "Mary Poppins";
    string_ptr = &name;
    cout << *string_ptr << endl;

    return 0;
}