/**
 * @file arrays_in_functions.cpp
 * @author Karyn Doke
 * @brief passing arrays in functions
 * @version 0.1
 * @date 2025-02-13 
 */
#include <iostream>
using namespace std;

void change_array(int array[]);
// changes an index value in array

int main() {
    int my_array[3] = {0,1,2};
    cout << my_array << endl;
    change_array(my_array);
    cout << my_array[0];

    return 0;
}

/**
 * @brief Changes the value of an array element based on user input
 * @param array The array to be modified
 */
void change_array(int array[]) {
    int index;
    int value;
    cout << array[0] << endl;
    cout << "What index do you want to change? ";
    cin >> index;
    cout << "What value should go at this index? ";
    cin >> value;
    cout << array[0];
    array[index] = value;
}
