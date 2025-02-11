/**
 * Class code: how static variables work
 * @file static_variable_example.cpp
 * @author Karyn Doke
 * @date 2025-02-10
 */
 
#include <iostream>
using namespace std;

// Global static variable
static int count = 0;

void increment();
// increments static variable count

int main() {
    increment();
    increment();
    return 0;
}

/**
 * @brief increments static variable count
 */
void increment() {
    count++;
    cout << count << " ";
    cout << endl;
}
