/**
 * Creates a random array of integers 0-9 and queries the user for one
 * such integer; the program searches the array and reports if the user's
 * integer is found.
 * @file style_project_1.cpp
 * @author Dave Perkins
 * @collaborators Darren Strash
 * @date January 25, 2024
 */

#include <iostream>
#include <ctime>

const int NUM_NUMBERS = 15;

/**
 * Prints the given array.
 * @param numbers an array of integers to be printed.
 */
void print_array(int numbers[NUM_NUMBERS]) 
{
   std::cout << "Here is the array: " << std::endl;
   for (int index = 0; index < NUM_NUMBERS; index++) 
   {
      std::cout << numbers[index] << " ";
   }
   std::cout << std::endl;
}

/**
 * Fills the given array with random integers 0-9.
 * @param numbers an array of integers to be filled.
 */
void fill_array(int numbers[NUM_NUMBERS]) 
{
    int random_number = 0;
    for (int index = 0; index < NUM_NUMBERS; index++) 
    {
        random_number = rand() % 10;
        numbers[index] = random_number;
    }
}

/**
 * Queries the user for an integer of their choice.
 * @return the integer chosen by the user.
 */
int get_user_pick() 
{
    int pick = 0;
    std::cout << "Choose a number from 0 to 9: ";
    std::cin >> pick;
    return pick;
}

/**
 * Returns true if the given integer pick is found in the array numbers.
 * @param numbers the array to search.
 * @param pick the integer to search for in the given array.
 * @return true if pick is found in the array, and false otherwise.
 */
bool is_found_in_array(int numbers[NUM_NUMBERS], int pick) 
{
    for (int index = 0; index < NUM_NUMBERS; index++) 
    {
        if (numbers[index] == pick) { return true; }
    }
    return false;
}

// Controls the flow of the program:
int main() 
{
    srand(time(0));

    int numbers[15] = {};
    fill_array(numbers);

    int pick = 0;
    pick = get_user_pick();

    print_array(numbers);

    if (is_found_in_array(numbers, pick)) 
    {
        std::cout << "Found your number!" << std::endl;
    } 
    else 
    {
        std::cout << "Didn't find your number!" << std::endl;
    }
    std::cout << std::endl;
    return 0;
}