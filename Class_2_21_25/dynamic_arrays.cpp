#include <iostream>
using namespace std;

int main() {

    int* numbers = new int[10]; // dynamically allocate an array of 10 integers
    // set and access elements
    numbers[2] = 100;
    cout << numbers[2] << endl;

    // size does not need to be known at compile-time
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    double* double_numbers = new double[size];
    
    for (int i = 1; i <= size; i++) {
        double_numbers[i] = i * 10.0;
        cout << double_numbers[i] << " ";
    }
   

    return 0;
}