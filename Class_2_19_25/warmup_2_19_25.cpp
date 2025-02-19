/**
 * @file warmup_2_19_25.cpp
 * @author Karyn Doke
 * @brief warmup with pointers
 * @version 0.1
 * @date 2025-02-16
 */
#include <iostream>
using namespace std;

int main( )
{
    int v1 = 42;
    int v2 = 58;

    int* p1 = &v1;
    int* p2 = &v2;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;

    v1 = 100;
    v2 = 200;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;

    p1 = p2;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl;
    return 0;
}
