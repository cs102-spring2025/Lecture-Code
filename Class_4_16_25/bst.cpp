#include <iostream>
using namespace std;

class BinaryNode {
public:
    BinaryNode(int data) {
        _data = data;
        _left = nullptr;
        _right = nullptr;
    }

    int _data;
    BinaryNode* _left;
    BinaryNode* _right;
};

class BinarySearchTree {
public:

    BinaryNode* _root;

    BinarySearchTree() {
        _root = nullptr;
   }
   
   bool search (int x) { 
       return search_recursive(_root, x); 
    }

 void insert(int x) {
    insert_recursive(_root, x);

 }

 void print() {
    cout << "Tree Traversal: ";
    recursive_print(_root);
    cout << endl;
 }

private:
    void recursive_print(BinaryNode* curr) {
        if (curr != nullptr) {
            recursive_print(curr->_left);
            cout << curr->_data << " ";
            recursive_print(curr->_right);
           
        }
     }

     void insert_recursive(BinaryNode* &curr, int x){
        if (curr == nullptr) {
            curr = new BinaryNode(x);
        }
        else if (x <= curr->_data) {
            insert_recursive(curr->_left, x);
        }
        else {
            insert_recursive(curr->_right, x);
        }
    
     }

     bool search_recursive(BinaryNode * curr, int x) {
        if (curr == nullptr)       
            return false;
    
        if (curr->_data == x)       
           return true;
    
        if (x <= curr->_data)
            return search_recursive(curr->_left, x);
        else
            return search_recursive(curr->_right, x);
     }

};

 int main() {
    // Construct the tree:
    /*         3
    *         / \ 
    *        1   4
    *             \ 
    *              7
    *             /
    *            5
    */

    BinarySearchTree bst;

    bst.insert(3);
    bst.insert(4); 
    bst.insert(1); 
    bst.insert(7);
    bst.insert(5);
    
    bst.print();
    return 0;
 }