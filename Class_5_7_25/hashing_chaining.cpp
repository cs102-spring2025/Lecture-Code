#include <iostream>
#include <list>
#include <vector>
using namespace std;

class HashTableChaining {
private:
    vector<list<int>> table;
    int size;

public:
    HashTableChaining(int size) : size(size), table(size) {}

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    bool search(int key) {
        int index = hashFunction(key);
        for (int k : table[index]) {
            if (k == key) return true;
        }
        return false;
    }

    void display() {
        for (int i = 0; i < size; ++i) {
            cout << "[" << i << "]: ";
            for (int k : table[i]) {
                cout << k << " -> ";
            }
            cout << "NULL" << endl;
        }
    }
};

int main() {
    HashTableChaining ht(7);
    ht.insert(10);
    ht.insert(7);
    ht.insert(20);
    ht.insert(17);
    ht.insert(30);

    ht.display();

    cout << "Search 15: " << (ht.search(15)) << endl;
    cout << "Search 25: " << (ht.search(25)) << endl;

    return 0;
}

