#include <iostream>

double ave(double n1, double n2);
//returns the average of two numbers n1, n2

double ave(double n1, double n2, double n3);
// returns the average of three numbers n1, n2, n3


int main( )
{
    std::cout << "The average of 2.0, 2.5, and 3.0 is: " << ave(2.0, 2.5, 3.0) << std::endl;
    std::cout << "The average of 2.0, and 3.0 is: " << ave(2.0, 3.0) << std::endl;
   
    return 0;
}

double ave(double n1, double n2)
{
    return ((n1 + n2)/2.0);

}

double ave(double n1, double n2, double n3)
{
    return ((n1 + n2 + n3)/3.0);
    
}


