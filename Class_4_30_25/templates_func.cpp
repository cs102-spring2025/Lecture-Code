#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
    

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    double a = 1.1, b = 2.2;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    string aa = "hello", bb = "there";
    swap(aa, bb);
    cout << "After swap: aa = " << aa << ", bb = " << bb << endl;

    return 0;
}
