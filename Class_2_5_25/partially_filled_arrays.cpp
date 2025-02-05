#include <iostream>
using namespace std;
const int MAX_NUMBER_SCORES = 50;

void print(int a[], int size);
// prints the elements in the array

int main(){
    int scores[MAX_NUMBER_SCORES], numberUsed;
    cout << "Enter golf scores: " << endl;
    cout << "Enter up to 5 scores and mark the end of the list with a negative number:\n";
    int next, index = 0;
    cin >> next;
    while ((next >=0) && (index < MAX_NUMBER_SCORES))
    {
        scores[index] = next;
        index++;
        cin >> next;
    }
    numberUsed = index;
    cout << "Number used: " << numberUsed << endl;
    print(scores, numberUsed);
    return 0;
}

void print(int a[],  int size)
{
    cout << "{";
    for (int i = 0; i < size - 1; i++) {
        cout << a[i] << ", ";
    }
    cout << a[size - 1] << "}" << endl;
}

// write a function that fills the array