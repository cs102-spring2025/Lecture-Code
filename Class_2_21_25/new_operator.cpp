#include <iostream>
using namespace std;


int main()  {
    // Dynamically allocate memory for a single integer
    int* p = new int; // 'new' allocates memory
    *p = 10; // assign a value to the dynamically allocated memory
   
    std::cout << "Address: " << p << " Value of p: " << *p << std::endl;

    // Deallocate the memory for the single integer
    delete p; // 'delete' frees the memory
   
    return 0;

}