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
        top = nullptr;
        size = 0;
    }
  
    ~PointerBasedStack() {
        cout << "Calling the destructor..." << endl;
        while (top != nullptr) {
            pop();
        }
    }
    
    void push(int item) {
       Node* node_ptr = new Node(item);
       node_ptr->set_next(top);
       top = node_ptr;

    }
    
    int get_top() {
        return top->get_data();
    }
    
    void pop() {
       
      
        


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
    
    undo.push(1);
    cout << "After pushing 1, top is: " << undo.get_top() << endl;
    undo.push(2);
    cout << "After pushing 2, top is: " << undo.get_top() << endl;
    undo.push(3);
    cout << "After pushing 3, top is: " << undo.get_top() << endl;
    undo.display();
    undo.pop();
    undo.display();
}
