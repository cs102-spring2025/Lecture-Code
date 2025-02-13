/**
 * @file local_global_variables.cpp
 * @author Karyn Doke
 * @brief demonstration about how to access a global variable using ::
 * @version 0.1
 * @date 2025-02-13
 */
#include <iostream>
using namespace std;

// global variable
int number = 10;

void foo();
// demonstrates local vs global variable access

int main() {

    foo();
    return 0;
}

/**
 * @brief outputs local and global variable x
 * 
 */
void foo() {
    int number = 5;
    // local variable number will be output
    cout << number << endl; 
    // use :: to access global variable number
    cout << ::number << endl; 
}