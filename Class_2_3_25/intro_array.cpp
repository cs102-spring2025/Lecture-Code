#include <iostream>

const int ARRAY_SIZE = 20;

int main()
{

    int empty_array[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "Empty Array[" << i << "]" << empty_array[i] << std::endl; 
    }

    // assign an array value
    empty_array[3] = 999;

    // output that value
    std::cout << "Empty Array value at index 3: " << empty_array[3] << std::endl;

    // you have to iterate over the array to obtain the array values
    // doing the following outputs a memory location where the beginning
    // of the array is stored
    std::cout << empty_array << std::endl;

    // sizeof gives you the number of bytes of the array not the 
    // number of elements.
    std::cout << "Number of bytes: " << sizeof(empty_array) << std::endl;

    // what if we wanted to get the number of bytes for each value
    // how does this work in memory?
    std::cout << sizeof(empty_array[1]) << std::endl;

    // out of range indices -- What will happen?
    std::cout << empty_array[2500] << std::endl;
    
    return 0;
}