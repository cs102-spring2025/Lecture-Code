#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    // Base case: if the number is 0, return 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: add the last digit to the result of 
    //sumOfDigits for the rest of the number
    return (n % 10) + sum_of_digits(n / 10);
    }

int main() {
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The sum of the digits of " << number << " is " 
        << sum_of_digits(number) << endl;

    return 0;
}
