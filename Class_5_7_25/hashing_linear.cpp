#include <iostream>
#include <vector>
using namespace std;

const int EMPTY = -1;

class HashTableLinear {
private:
    vector<int> _table;
    int _size;

public:
    //initialize the vector to be of size and 
    //fill it with -1s to indicate that it’s empty
    HashTableLinear(int inputSize) { 
        _size = inputSize; 
        _table = vector<int>(inputSize, EMPTY); 
}

    int hashFunction(int key) {
        return key % _size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        while (_table[index] != EMPTY) {
            index = (index + 1) % _size; // Linear probing
        }
        _table[index] = key;
    }

    bool search(int key) {
        int index = hashFunction(key);
        int startIndex = index;

        while (_table[index] != EMPTY) {
            if (_table[index] == key) return true;
            index = (index + 1) % _size;
            if (index == startIndex) break; // Full circle
        }
        return false;
    }

    void display() {
        for (int i = 0; i < _size; ++i) {
            if (_table[i] == EMPTY)
                cout << "[ ] ";
            else
                cout << "[" << _table[i] << "] ";
        }
        cout << endl;
    }
};

int main() {
    HashTableLinear ht(7);
    ht.insert(10);
    ht.insert(20);
    ht.insert(15);
    ht.insert(30);

    ht.display();

    cout << "Search 15: " << (ht.search(15)) << endl;
    cout << "Search 25: " << (ht.search(25)) << endl;

    return 0;
}
