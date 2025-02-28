/**
 * @file warmup.cpp
 * @author Karyn Doke
 * @brief This program creates an array that holds 6 integers
 * @version 0.1
 * @date 2025-02-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
using namespace std;
const int ARRAY_SIZE = 6;
int main()
{
    int my_array[ARRAY_SIZE];
    my_array[0] = 1;
    my_array[1] = 2;
    my_array[2] = 3;

    for (int i = 0; i < ARRAY_SIZE; i++ )
    {
        cout << my_array[i] << endl;
    }


    return 0;
}