#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;

/**
 * @brief searches for target value in an array using binary search
 * 
 * @param a is a sorted array in increasing order
 * @param first index in array
 * @param last index in array
 * @param key is target value searching for
 * @param found false is not found otherwise true
 * @param location 
 */
void search(const int a[], int first, int last, int key, bool& found, int& location)
{   
    int mid = 0;
    if (first > last)
    {
        found = false;
    }
    else
    {
        mid = (first + last)/2;
        if (key == a[mid])
        {
            found = true;
            location = mid;
        }
        else if (key < a[mid])
        {
            search(a, first, mid - 1, key, found, location);
        }
        else if (key > a[mid])
        {
            cout << endl;
            search(a, mid + 1, last, key, found, location);
        }
    }
}

int main( )
{
    int a[ARRAY_SIZE] = {44, 51, 3, 10, 0, 9, 11, 48, 34, 2};
    const int finalIndex = ARRAY_SIZE - 1;
    int key, location = 0;
    bool found = false;

    // sort array using sort method from std library
    sort(a, a + sizeof a / sizeof a[0]);
    
   cout << "Sorted Array: ";
   for (int i = 0; i < ARRAY_SIZE; i++ ) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    cout << "Enter number to be located: ";
    cin >> key;
    search(a, 0, finalIndex, key, found, location);

    if (found)
        cout << key << " is in index location " << location << endl;
    else
        cout << key << " is not in the array." << endl;
    return 0;
}


