/**
 * Class code: how static variables work in functions
 * @file static_variable_example.cpp
 * @author Karyn Doke
 * @date 2025-02-10
 */

#include <iostream>
using namespace std;

void increment_counter();
// increments a local static variable 

// controls the program
int main() {
  
      // Calling function increment_counter 5 times
    for (int i = 0; i < 5; i++)
        increment_counter();
  
    return 0;
}

/**
 * @brief increments a local static variable counter
 */
void increment_counter() {
  
    // Static variable initialized once
    static int count = 0;

    // The value will be updated and carried over
    // to the next function call
    count++;
    cout << count << " ";
}



