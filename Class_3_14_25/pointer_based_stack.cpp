#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

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

class PointerBasedStack {
private:
    Node* top;
    int size;

public:
    PointerBasedStack() {
        // top is initially null
        top = nullptr;
        //cout << "top is currently: " << top << endl;
        size = 0;
    }
  
    ~PointerBasedStack() {
       // cout << "Calling the destructor..." << endl;
        while (top != nullptr) {
            pop();
        }
    }
    
    void push(int item) {
    // pointer points to newly created node (i.e address of new node)
    Node* node_ptr = new Node(item);
    cout << "new node address of  " << node_ptr->get_data() << " is: " << node_ptr << endl;
    // dereference node_ptr and set next to point to top (initially null)
    node_ptr->set_next(top);
    cout << node_ptr->get_data() << " next is pointing to:  " << node_ptr->get_next() << endl;
    // top should point to new node
    top = node_ptr;
    cout << "top is pointing to: " << top << endl;
    size++;
    
    }
    
    int get_top() {
        return top->get_data();
    }
    
    void pop() {
       
        //cout << "Popping " << _top->get_data() << endl;
        // create a temp pointer to top why?
        // because top was created with new so we need to 
        // free the memory
        Node* old_top = top;
        // set the new top to 
        top = top->get_next();
        // decrement size
        size--;
        delete old_top;

    }
    
    unsigned int get_size() {
        return size;
        
    }
    
    void display() {
        cout << "Stack |";
        string result = "";
        Node* current_node = top;
        while(current_node != nullptr) {
            result = " " + to_string(current_node->get_data()) + 
                " |" + result;
            current_node = current_node->get_next();
        }
        cout << result << endl;
    }
    
    bool empty(){
        return top == nullptr;
    }
};

int main(){    
    PointerBasedStack undo;
    undo.push(33);
    //cout << "After pushing 1, top is: " << undo.get_top() << endl;
    undo.push(55);
    //cout << "After pushing 2, top is: " << undo.get_top() << endl;
    undo.push(88);
    cout << "After pushing 3, top is: " << undo.get_top() << endl;
    undo.display();
    undo.pop();
    undo.display();
    undo.pop();
    undo.display();
}
