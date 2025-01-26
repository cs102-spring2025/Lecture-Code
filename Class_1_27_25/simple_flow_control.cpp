#include <iostream>

int main() {

    float grade = 89.0;
    int score = 5;
    int x = 7;

    // single statement for each alternative
    if (grade > 60)
        std::cout << "You passed the exam!" << std::endl;
    else
        std::cout << "You did not pass the exam." << std::endl;

    // sequence of statements for each alternative
    if (grade > 60){
        std::cout << "You passed the exam!" << std::endl;
        std::cout << "You passed the course!" << std::endl;
    }
    else {
        std::cout << "You did not pass the exam." << std::endl;
        std::cout << "You must repeat the course." << std::endl;
    }
    
    // compound boolean statement using && (and) operator
     if ((score > 0) && (score > 10 ))
        std::cout << "Your score is between 0 and 10. " << std::endl;
    else
        std::cout << "Your score is not between 0 and 10." << std::endl;

    // compound boolean statement using || (or) operator
     if ((x == 1) || (x > 10))
        std::cout << "x is 1 or x is greater than 10. " << std::endl;
    else
        std::cout << "x is neither 1 or greater than 10." << std::endl;

    // simple while loop
    int countDown = 5;
    while (countDown > 0)
    {
        std::cout << "Hello!" << std::endl;
        countDown -= 1;
    }

    // simple for loop
    for(int number = 100; number >= 0; number--)
    {
        std::cout << number << " bottles of beer on the shelf. \n";
    }
    return 0;
}