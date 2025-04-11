#include <iostream>
using namespace std;

void cheers(int n) {

  // base case
    if (n == 1) {
        cout << "Hurray\n" << endl;
    }

    else {
        cout << "Hip " << endl;
        cheers(n - 1);
    }


    
}

int main() {

    cheers(3);
    return 0;
}

