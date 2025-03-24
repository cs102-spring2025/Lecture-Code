#include <iostream>
#include <cmath>

int main() {

    // declare COST_PER_SQ_FT constant and cannot modify it
    const double COST_PER_SQ_FT = 10.50; 
    double budget, area, length_side;

    std::cout << "Enter the amount budgeted for your dog house $";
    std::cin >> budget;

    area = budget/COST_PER_SQ_FT;
    length_side = sqrt(area);

    /* Formatting numbers with a decimal point.
    * Magic formula that you can insert in your program
    * to cause numbers to contain a decimal point to 
    * be outputted with an exact number of decimal points.
    */ 
    std::cout.setf(std::ios::fixed); // fixed point notation
    std::cout.setf(std::ios::showpoint); // decimal point will always be shown
    std::cout.precision(2); // set precision to 2 decimal places

    /* cout statement that follows this will output values of type double in ordinary notation, 
    * exactly two digits after decimal point.
    */
    std::cout << "For a price of $" << budget << std::endl
         << "I can build you a luxurious square dog house\n"
         << "that is " << length_side
         << " feet on each side.\n";

    return 0;
}