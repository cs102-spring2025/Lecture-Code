#include <iostream>
#include <string>
using namespace std; 

/**
 * Using namespace std is considered bad practice.
 * Alternative to this statement is to specify the namespace
 * to which the identifier belongs to (i.e. std::cout).
 * It imports all the symbols inside std, which is considered bad
 * practice especially in header files --> increases the risk
 * of collisions with your own symbols.
 */

int main() {
   string test = "";
   cout << "Please enter a string: ";
   cin >> test; // cin will only read up until the whitespace - more to come!
   cout << test << endl;
  
  return 0;
}

// To run, execute the following commands:
// g++ class_1_using_namespace.cpp -o myprogram2
// ./myprogram2