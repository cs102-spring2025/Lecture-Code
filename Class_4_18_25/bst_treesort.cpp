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
    void insert(int x);
    void in_order_to_vector(vector<int> &nums);
   
    BinaryNode* _root;

private:
    void insert_recursive(BinaryNode* &curr, int x);
    void recursive_destructor(BinaryNode* curr);
    void in_order_to_vector_recursive(vector<int> &nums, BinaryNode* curr, int &index);
};

void tree_sort(vector<int> &numbers) {
    BinarySearchTree bst;
    for (int i = 0; i < numbers.size(); i++) {
        bst.insert(numbers[i]);
    }
    bst.in_order_to_vector(numbers);
}

void BinarySearchTree::in_order_to_vector(vector<int> &nums) {
    int index = 0;
    in_order_to_vector_recursive(nums, _root, index);
}

void BinarySearchTree::in_order_to_vector_recursive(vector<int> &nums, BinaryNode* curr, int &index) {
    if (curr!= nullptr) {
        in_order_to_vector_recursive(nums, curr->_left, index);

        nums[index] = curr->_data;
        index++;

        in_order_to_vector_recursive(nums, curr->_right, index);

    }

}

void BinarySearchTree::insert(int x) {
    insert_recursive(_root, x);
 }

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

BinarySearchTree::BinarySearchTree() {
     _root = nullptr;
}

BinarySearchTree::~BinarySearchTree() {
    recursive_destructor(_root);
}


void BinarySearchTree::recursive_destructor(BinaryNode* curr){
    // Base case: if at a nullptr, do nothing
    if (curr == nullptr) {
        return;
    }

    // Recursive cases: post-order traversal to delete each node
        recursive_destructor(curr->_left);
        recursive_destructor(curr->_right);
        delete curr;

}



int main () {
    
    vector<int> nums = {5, 2, -9, 0, 32, 31, 28, -24, -3, 54, -2, -42};
    
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i]<< ", ";
    }

    cout << endl;
    tree_sort(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i]<< ", ";
    }
    cout << endl;
 
  
    return 0;
 }