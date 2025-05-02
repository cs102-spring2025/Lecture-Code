#include <iostream>
using namespace std;

// write function here
template <typename T>
T findMax(T n1, T n2) {

    return (n1 > n2) ? n1 : n2;

 }
int main() {
    cout << "Max of 3 and 7: " << findMax(3, 7) << endl;
    cout << "Max of 3.5 and 2.1: " << findMax(3.5, 2.1) << endl;
    cout << "Max of a and b: " << findMax('a', 'b') << endl;
    return 0;
}

