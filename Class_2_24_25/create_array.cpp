#include <iostream>
using namespace std;

int* create_array(int size) {
    int* arr = new int[size]; // Allocate an array on the heap

    // Initialize the array with some values
    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 100;
    }
    
    return arr; // Return the pointer to the array
}

int main() {
    int size = 5;
    int* my_array = create_array(size); 
   
    // Output the array elements
    for (int i = 0; i < size; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;

    delete[] my_array; // Free the memory when done
    return 0;
}
