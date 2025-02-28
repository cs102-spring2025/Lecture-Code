#include <iostream>

const int NUMBER_OF_EMPLOYEES = 3;

int adjustDays(int oldDays);
//Returns oldDays plus 5.

int main( )
{
    
    int vacation[NUMBER_OF_EMPLOYEES], number;

    std::cout << "Enter allowed vacation days for employees 1"
         << " through " << NUMBER_OF_EMPLOYEES << ":\n";
    for (number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
        std::cin >> vacation[number-1];

    for (number = 0; number < NUMBER_OF_EMPLOYEES; number++)
        vacation[number] = adjustDays(vacation[number]);

    std::cout << "The revised number of vacation days are:\n";
    for (number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
        std::cout << "Employee number " << number
             << " vacation days = " << vacation[number-1] << std::endl;

    return 0;
}

int adjustDays(int oldDays)
{
    return (oldDays + 5);
}
