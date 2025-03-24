#include <iostream>
#include <string>

// controls program

int main() {
    std::string middleName, petName;
    std::string alterEgoName;

    std::cout << "Enter your middle name and the name of your pet. \n";
    std::cin >> middleName;
    std::cin >> petName;
    alterEgoName = petName + " " + middleName;
    std::cout << "The name of your alter ego is ";
    std::cout << alterEgoName << "." << std::endl;

    return 0;
}