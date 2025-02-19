/**
 * @file pointers_and_arrays.cpp
 * @author Karyn Doke
 * @brief pointers and arrays
 * @version 0.1
 * @date 2025-02-16
 */
#include <iostream>
using namespace std;

int main() {
    /* create an array with 5 elements named arr
    * output arr which is the memory address of arr[0]
    * output &arr[0] which is the same memory address
    */
    int arr[5] = {10, 20, 30, 40, 50};
    cout << arr << endl; 
    cout << &arr[0] << endl; 

    /* accessing elements using pointers
    * create a pointer that points to arr[0]
    * dereference ptr and output value at arr[0]
    */ 
    int* ptr = arr; 
    cout << *ptr << endl; 

    /* incrementing ptr moves pointer to point at successive memory locations
    * the pointer will increase by the size of the data type the
    * pointer points to i.e. an array of ints will typically be 4 bytes
    */
    ptr++; 
    cout << *ptr << endl;

    /* loop through the array using the pointer
    * dereference the pointer to get the value
    * move pointer to the next element in the array
    */
    int my_array[4] = {100, 200, 300, 400};
    int* ptr2 = my_array;
    for (int i = 0; i < 4; i++) {
        cout << *ptr2 << " "; 
        ptr2++;              
    }
    cout << endl;

    /* can access array elements using the array subscript i.e arr[i]
    * or pointer notation *(arr+i)
    */
    int arr2[4] = {11, 22, 33, 44};
    int* ptr3 = arr2;

    cout << "value at index 3: " << arr2[3] << endl;
    cout << "value at index 3: " <<  *(ptr3 + 3) << endl;
    cout << "value at index 3: " << *(arr + 3);
    cout << "address at index 3: " << ptr3 + 3 << endl;
    cout << "address at index 3: " << arr2 + 3 << endl;

    return 0;
}