#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* next; 
    
public:

    /**
     * @brief Construct a new Node object
     * @param initial_data 
     */
    Node(int initial_data) {
        data = initial_data;
        next = nullptr;
    }
    
    /**
     * @brief display data and next of object
     */
    void display_node(){
        cout << "Node info:" << endl;
        cout << "data = " << data << endl;
        cout << "next = " << next << endl;
    }
    
    /**
     * @brief Get the next object
     * @return Node* 
     */
    Node* get_next() {
        return next;
    }

    /**
     * @brief Set the next object
     * @param next_node 
     */
    void set_next(Node* next_node) {
        next = next_node;
    }
    
    /**
     * @brief Get the data object 
     * @return int 
     */
    int get_data() {
        return data;
    }

    /**
     * @brief Set the data object
     * @param new_data 
     */
    void set_data(int new_data) {
        data = new_data;
    }
};

class PointerBasedStack {
private:
    Node* top;
    int size;

public:
    /**
     * @brief Construct a new Pointer Based Stack object
     */
    PointerBasedStack() {
        top = nullptr;
        size = 0;
    }
  
    /**
     * @brief Destroy the Pointer Based Stack object 
     */
    ~PointerBasedStack() {
        while (top != nullptr) {
            pop();
        }
    }
    
    /**
     * @brief Add an item to stack 
     * @param item 
     */
    void push(int item) {
    Node* node_ptr = new Node(item);
    node_ptr->set_next(top);
    top = node_ptr;
    size++;

    }
    
    /**
     * @brief Get the top object
     * @return int 
     */
    int get_top() {
        return top->get_data();
    }
    
    /**
     * @brief Remove an item from stack
     */
    void pop() {
        Node* old_top = top;
        top = top->get_next();
        size--;
        delete old_top;

    }
    
    /**
     * @brief Get the size object
     * @return unsigned int 
     */
    unsigned int get_size() {
        return size;
        
    }
    
    /**
     * @brief Display the contents of a stack
     */
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
    
    /**
     * @brief Check if stack is emtpy
     * @return true 
     * @return false 
     */
    bool empty(){
        return top == nullptr;
    }
};

int main(){    
    PointerBasedStack undo;
    undo.push(33);
    undo.push(55);
    undo.push(88);
    undo.display();
    undo.pop();
    undo.display();
    undo.pop();
    undo.display();
}
