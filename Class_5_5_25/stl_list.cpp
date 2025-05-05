#include <iostream>
#include <list>
using namespace std;

void display_list(list<int> numbers);

int main() {
    list<int> numbers {20, 30, 40};
    display_list(numbers);
    
    // inserts an element to the beginning of the list
    numbers.push_front(10);
    
    // adds an element to the end of the list
    numbers.push_back(50);

    display_list(numbers);

    // returns the first element of the list
    cout << "This first number in the list: " << numbers.front();
    cout << endl;

    // returns the last element of the list
    cout << "This last number in the list: " << numbers.back();
    cout << endl;

    // remove the first element in the list
    numbers.pop_front();

    // remove the last element in the list
    numbers.pop_back();

    display_list(numbers);

    // access elements using an iterator
    // create an iterator to point to the first element of the list
    list<int>::iterator itr = numbers.begin();  
    
    // increment itr to point to the 2nd element
    itr++;
    cout << *itr << endl;

    // decrement itr to point to previous element 
    itr--;
    cout << *itr << endl;
   
    // use a for loop to iterate through the list
    for (itr = numbers.begin(); itr != numbers.end(); itr++) {
        cout << *itr << " ";
    }
        cout << endl;
    
    /*
    * Other list functions
    * reverse()     - reverse order of list
    * sort()        - sorts list elements 
    * unique()      - removes consecutive duplicate elements
    * empty()       - checks whether the list is empty
    * size()        - returns the number of elements in list
    * clear()       - clears all the values from the list
    * merge()       - merges two sorted lists
    */
    return 0;
}
void display_list(list<int> numbers) {
    cout << "List Elements: ";
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;

}