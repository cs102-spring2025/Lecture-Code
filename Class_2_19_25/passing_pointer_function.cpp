/**
 * @file passing_pointer_function.cpp
 * @author Karyn Doke
 * @brief passing by pointers in functions
 * @version 0.1
 * @date 2025-02-16
 */
#include <iostream>
using namespace std;

void pass_by_pointer(int* x, int* y);
// swaps the values where x, y are pointing

int main() {
    int a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";

    // pass the address of a and b
    pass_by_pointer(&a, &b);

    cout << "After Swap with pass by pointer\n";
    cout << "a = " << a << " b = " << b << "\n";

    return 0;
}

void pass_by_pointer(int* x, int* y) {
    // value is accessed by * operator.
    // passed parameters can be moved/reassigned to
    // different memory locations.
    int z = *x;
    *x = *y;
    *y = z;
}

