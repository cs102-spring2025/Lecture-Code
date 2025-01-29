#include <iostream>
#include <string>

int main() {
    std::string input;
    char ch;

    std::cout << "Enter a string: ";
    // std::cin >> input;

    //What is above will break for strings containing a space!
    //Remember cin reads until the first space or newline
    // to read a whole line we can use:
    
    std::getline(std::cin, input); // reads the line as a string

    for (int i = 0; i < input.size(); i++){ // we can iterate over a string by indices
        ch = input[i];
        std::cout << "The ASCII value of " << ch << " is " << int(ch) << std::endl;
    }
}
