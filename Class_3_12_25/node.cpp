#include <iostream>
using namespace std;

/**
 * @class Node 
 * @brief A class that implements a node
 * 
 * Each node holds an integer data value and a pointer to the next node.
 */
class Node {
private:
    int data;
    Node* next;
    
public:
    Node(int initial_data) {
        data = initial_data;
        next = nullptr;
    }
    
    void display_node(){
        cout << "Node info:" << endl;
        cout << "data = " << data << endl;
        cout << "next = " << next << endl;
    }
        
    Node* get_next() {
        return next;
    }

    void set_next(Node* next_node) {
        next = next_node;
    }
    
    int get_data() {
        return data;
    }

    void set_data(int new_data) {
        data = new_data;
    }
};

int main() {
    
    // create a node "data" = 2; "next" = nullptr (default); 
    Node node_1(2);
    node_1.display_node();

    // create a second node "data" = 5;
    // set node_1 "next" to point at address of node_2
    Node node_2(5);
    node_1.set_next(&node_2);
    node_1.display_node();

    // This is a pointer to a node (i.e. node_1)
    Node* node = &node_1;
    
    // using objects we have done the following but we cannot do this because 
    // node is a pointer and not a node itself.
    //node.get_data();
    //node.get_next();
    
    // we can dereference the pointer like this
    cout <<  (*node).get_data() << endl;
    // alternative notation -> (operator) dereferences the pointer
    cout << node->get_data() << endl;


    


}

