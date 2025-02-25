#include <iostream>
using namespace std;

void createLeak() {
    int* arr = new int[100]; // Dynamically allocate an array of 100 integers
    // We forget to free the memory with delete[]!
    delete[] arr;
    
}

int main() {
    for (int i = 0; i < 1000; ++i) {
        createLeak();
    }

    cout << "Memory leak example completed!" << endl;
    
    return 0;
}
