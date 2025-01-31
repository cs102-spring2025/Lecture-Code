#include <iostream>

double totalCost(int numberPar, double pricePar);
//Computes the total cost, including 5% sales tax,
//on numberPar items at a cost of pricePar each.

int main( )
{
    double price, bill;
    int number;

    std::cout << "Enter the number of items purchased: ";
    std::cin >> number;
    std::cout << "Enter the price per item $";
    std::cin >> price;

    bill = totalCost(number, price);

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    std::cout << number << " items at "
         << "$" << price << " each.\n"
         << "Final bill, including tax, is $" << bill
         << std::endl;

    return 0;
}

double totalCost(int numberPar, double pricePar)
{
    const double TAX_RATE = 0.05; //5% sales tax
    double subtotal;

    subtotal = pricePar * numberPar;
    return (subtotal + subtotal*TAX_RATE);
}
