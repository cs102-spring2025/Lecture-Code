#include <iostream>
using namespace std;

int main() {

    char greeting [] = {'h', 'i',' ', 'T', 'h', 'e', 'r', 'e'};
    //cout << greeting << endl;

    int some_ints[5];
    for (int i = 0; i < 5; i++)
    {
      some_ints[i] = i + 100;
      cout << some_ints[i] << endl;
    }
    //cout << some_ints;
    return 0;
}