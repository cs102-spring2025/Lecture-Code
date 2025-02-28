#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers;

    // check if vector is empty
    cout << "Check if numbers is empty: " << numbers.empty() << endl;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access and modify elements
    numbers[0] = 100; // Modify the first element

     // check if vector is empty
     cout << "Check if numbers is empty: " << numbers.empty() << endl;

    // Iterate through the vector
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // access an element
    cout << numbers.at(2) << endl;

    // pop everything off
    numbers.pop_back();
    numbers.pop_back();
    numbers.pop_back();

    // check if vector is empty
    cout << "Check if numbers is empty: " << numbers.empty() << endl;

    // Access an element that does not exist
    cout << numbers.at(2);

    // size vs capacity
    // size is the number of elements in the vector;
    // capacity is the number of elements the vector currently has allocated in memory

    numbers.push_back(999);
    numbers.push_back(777);
    numbers.push_back(111);
    numbers.push_back(222);
    numbers.push_back(888);
    numbers.push_back(555);
    cout << numbers.size() << endl;
    cout << numbers.capacity() << endl;
    
    return 0;
}
