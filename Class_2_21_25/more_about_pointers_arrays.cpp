#include <iostream>
using namespace std;


int main() {

    int my_array[4] = {11, 22, 33, 44};
    int* ptr = my_array; 

    // the following statements are equivalent to access array elements
    cout << "value at index 3: " <<  *(ptr + 3) << endl; // pointer notation
    cout << "value at index 3: " << my_array[3] << endl; // array subscript notation
    cout << "value at index 3: " << *(my_array + 3) << endl; // pointer notation

    // can use pointers to iterate over an array
    for (int i = 0; i < 4; i++) {
        cout << ptr << " "; 
        ptr++; 
    }

    cout << ptr << endl; // what is the value of this?

    int arr[6] = {2, 4, 6, 8, 10, 12};
    int arr2[6];
    
    cout << arr << endl; // output the memory address
    arr++; // can we do this?
    arr2 = arr1; // can we do this?
 
    return 0;
}

