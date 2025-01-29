#include <iostream>
#include <string>

// void function without parameters
void print_hello(){
    std::cout << "Hello" << std::endl;
}

// void function with a single parameter
void print_name(std::string fname) {
  std::cout << fname << " is in class." << std::endl;
}

// function with 1 parameter that returns an int value
int add_x(int x) {
  return 5 + x;
}

// function with parameters that returns a boolean value
bool appropriate_rate(int rate){
  return (((rate >=10) && (rate < 20) || (rate == 0)));

}

// function with multiple parameters that returns nothing
void print_first_last_name(std::string fname, std::string lname){
    std::cout << "First: " << fname << " Last: " << lname << std::endl;
}



int main(){

    print_hello(); // function call
    print_name("Karyn"); // function call with 1 argument
    int total = add_x(6); // function call with 1 argument
    std::cout << "The total is: " << total << std::endl;
    print_first_last_name("Karyn", "Doke");
    std::cout << appropriate_rate(0) << std::endl;

    return 0;
}