#include <iostream>
using namespace std;


long factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

long fib(int n) {

    if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
    return fib(n-1) + fib(n-2);

    }

// excercise
long sum_1_to_n(int n) {

    if (n == 1)
        return 1;
    return n + sum_1_to_n(n - 1);

    }

// exercise
void writeVertical(int n) {

    if (n < 10) {
         cout << n << endl;
    }

    else {

        writeVertical(n/10);
        cout << (n % 10) << endl;
    }

    /**
     * n = 941
     * 941 / 10  --> n = 94 goes to stack
        * 94 / 10 --> n = 9 goes to the stack
            * 9 / 10 --> print 9
        * 94 % 10 --> print 4
        * 941 % 10 --> print 1
     */


}



int main() {

    // execute function fib
    cout << "fib(" << 8  << ") = " << fib(8)  << endl;
    cout << "fib(" << 15 << ") = " << fib(15) << endl;
    cout << "fib(" << 37 << ") = " << fib(37) <<  endl;
    cout << "fib(" << 47 << ") = " << fib(47) <<  endl; 
    cout << endl;
    
    // execute function factorial
    cout << "factorial(" <<  8  <<  ") = " <<  factorial(8) <<  endl; 
    cout << "factorial(" <<  15 <<  ") = " <<  factorial(15) <<  endl; 
    cout << "factorial(" <<  37 <<  ") = " <<  factorial(37) <<  endl;
    cout << "factorial(" <<  47 <<  ") = " <<  factorial(37) <<  endl;
    
    // too big for a long
    cout << "factorial(" << 1023 << ") = " << factorial(1024) << endl;
    cout << endl;

    return 0;
}

