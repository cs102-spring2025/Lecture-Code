// Destructor
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
    BinarySearchTree();
    ~BinarySearchTree();
    bool search(int x);
    void insert(int x);
    void print();

    BinaryNode* _root;

private:
    bool search_recursive(BinaryNode* curr, int x);
    void insert_recursive(BinaryNode* &curr, int x);
    void recursive_print(BinaryNode* curr);
    void recursive_destructor(BinaryNode* curr);
   

};

BinarySearchTree::BinarySearchTree() {
     _root = nullptr;
}

BinarySearchTree::~BinarySearchTree() {
    recursive_destructor(_root);
}

/**
 * @brief do a post order traversal to delete all nodes
 * 
 * @param curr 
 */
void BinarySearchTree::recursive_destructor(BinaryNode* curr){
    // Base case: if at a nullptr, do nothing
    if (curr == nullptr) {
        return;
    }

    // Recursive cases: pre-order traversal to delete each node
        cout << "About to delete node with data: " << curr->_data << endl;
        recursive_destructor(curr->_left);
        recursive_destructor(curr->_right);
        delete curr;

}

bool BinarySearchTree::search (int x) { 
    return search_recursive(_root, x); 
 }

 bool BinarySearchTree::search_recursive(BinaryNode * curr, int x) {
// Base case: if at nullptr, x isn't in tree
    if (curr == nullptr)       
        return false;

// Base case: if curr->_data= x, we found it if (curr-›_data == x)
    if (curr->_data == x)       
       return true;

// Recursive cases: look left or right depending on if x is <= or > data
    if (x <= curr->_data)
        return search_recursive(curr->_left, x);
    else
        return search_recursive(curr->_right, x);
 }

 void BinarySearchTree::insert(int x) {
    insert_recursive(_root, x);

    // to check that the inserts worked
    // cout << "Root: " << _root->_data << endl;
    // if (_root->_left != nullptr)
    //    cout << "Left: " << _root->_left->_data << endl;
    // if (_root->_right != nullptr)
    //    cout << "Right: " << _root->_right->_data << endl;
    // cout << endl;

 }

 /**
  * @brief Insert x into (sub) tree rooted at node curr
  *   If curr is nullptr, make a new node here
  *   Otherwise, see if x is smaller or larger than curr's data, and recur
  *   left or right depending.
  * 
  * @param curr - node pointer reference. Why reference? It makes it so that when 
  *               we find the location for this node, we can just set curr to a new node
  *               and it will change the pointer.
  * @param x - value to insert
  */
 void BinarySearchTree::insert_recursive(BinaryNode* &curr, int x){
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

 void BinarySearchTree::print() {
    cout << "Tree Traversal: ";
    recursive_print(_root);
    cout << endl;
 }

 void BinarySearchTree::recursive_print(BinaryNode* curr) {
    if (curr != nullptr) {
        cout << curr->_data << " ";
        recursive_print(curr->_left);
        recursive_print(curr->_right);
    }
 }

 int main() {
    // Construct the tree:
    /*         10
    *         /  \ 
    *        6    18
    *       / \   / \ 
    *      4  8  15  21
    *     / \
    *    3   5      
    */

    BinarySearchTree bst;
    bst. insert(10);
    bst. insert(6); 
    bst. insert(4); 
    bst. insert(3);
    bst. insert(5);
    bst. insert(8);
    bst. insert(18);
    bst. insert(15);
    bst. insert(21);
    
    bst.print();
    return 0;
 }