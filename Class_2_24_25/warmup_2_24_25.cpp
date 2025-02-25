//Warm up: This code has a memory leak. Fill in the missing line of code that will solve our problem!

#include <iostream>
using namespace std;


  // Function to modify the array (e.g., multiply all elements by 2)
  void modify_array(int* arr, int size) {
      for (int i = 0; i < size; i++) {
          arr[i] *= 2;  // Multiply each element by 2
      }

  }

  // Function to print the array
  void print_array(int* arr, int size) {
      for (int i = 0; i < size; i++) {
          cout << arr[i] << " ";
    
      }
      cout << endl;

  }

  int main() {
      int size = 5;  
      int* my_array = new int[size];
      for (int i = 0; i < size; i++) {
        my_array[i] = i + 1;  // Initialize the array with values 1, 2, 3, ...
 
   }           

      // Modify the array
      modify_array(my_array, size);

      // Print the array after modification
      print_array(my_array, size);

      delete[] my_array; // free up the space
      return 0;
  }
