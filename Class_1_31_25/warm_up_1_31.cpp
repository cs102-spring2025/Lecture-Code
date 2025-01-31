#include <iostream>

void function1() {
    int num = 0; 
    num++;
    std::cout << num << std::endl;
}

void function2() {
    int num = 100;  
    num += 10;
    std::cout << num << std::endl;
}

int main() {
    int num = 500;
    std::cout << num << std::endl;

    function1();
    function2();

    function1();
    function2();

    return 0;
}
