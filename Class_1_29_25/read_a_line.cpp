#include <iostream>
#include <string>

// cin will stop reading at a space or a newline but we can use getline() to read a line 
// getline() will read a full line into a string

int main() {
    
    std::string my_input = " "; 
    std::cout << "Enter a whole line of input: ";
    std::getline(std::cin, my_input);
    std::cout << "You entered: " << my_input << std::endl;


    return 0;
}