/**
 * @file passing _arrays_to_functions_using_pointers.cpp
 * @author Karyn Doke
 * @brief passing arrays to functions using pointers
 * @version 0.1
 * @date 2025-02-16 
 */
#include <iostream>
using namespace std;

void printArray(int* arr, int size);
// print array 

int main() {

    int arr[4] = {5, 10, 15, 20};
    printArray(arr, 3);
    
    return 0;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}