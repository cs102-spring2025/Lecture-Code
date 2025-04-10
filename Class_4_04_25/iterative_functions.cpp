#include <iostream>
using namespace std;


long iterative_factorial(int n) {
    long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}


int main () {

        cout << "factorial(" <<  10  <<  ") = " << iterative_factorial(10) << endl;
        cout << "factorial(" <<  20  <<  ") = " << iterative_factorial(20) << endl;

    return 0;
}