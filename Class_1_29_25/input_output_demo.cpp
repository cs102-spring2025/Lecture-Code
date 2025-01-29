#include <iostream>
// cin will convert the user input into the type of variable that matches


int main(){
    int cats;
    double meters;
    std::cout << "How many cats do you have?: ";
    std::cin >> cats;
    std::cout << typeid(cats).name() << std::endl;
    std::cout << "How tall are you in meters?: ";
    std::cin >> meters;
    std::cout << typeid(meters).name() << std::endl;

    return 0;
}
