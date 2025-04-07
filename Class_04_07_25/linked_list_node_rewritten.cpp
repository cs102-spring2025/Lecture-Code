#include <iostream>
using namespace std;
 
 /**
  * @class Node
  * @brief A class representing a node in a linked list.
  * Each node holds an integer data value and a pointer to the next node.
  */
 class Node {
    public:

    Node(int initial_data) {
        data = initial_data;
        next = nullptr;
    }
    
    int data;      
    Node* next;  
    
    };

    
 /**
  * @class LinkedList
  * @brief A singly linked list implementation with basic operations.
  */
 class LinkedList {
    private:
         Node* head; 
         int size;

     public:
        LinkedList();
        ~LinkedList();
        void insert_node(int index, int value);
        void delete_node(int index);
        bool contains_node(int target);
        void modify_node(int index, int new_value);
        Node* get_node(int index);
        void display_list();

    };

     /**
      * @brief Constructor for LinkedList, initializes an empty list.
      */
     LinkedList::LinkedList() {
         head = nullptr;
         size = 0;
     }
 
     /**
      * @brief Destructor for LinkedList, frees all nodes in the list.
      */
     LinkedList::~LinkedList() {
         Node* current = head;
         Node* next_node = nullptr;
         while (current != nullptr) { // Traverse and delete each node
             next_node = current->next; // Store next node before deleting current
             delete current; // Free current node
             current = next_node; // Move to next node
         }
     }
 
     /**
      * @brief Inserts a new node with a given value at a given index.
      * @param value Integer value to insert at position index.
      */
     void LinkedList::insert_node(int index, int value) {
        size++;
         Node* new_node = new Node(value);
         if (index == 0) {
            new_node->next = head;
            head = new_node; 
         }
                
         else {    
            Node* previous = get_node(index - 1);
            new_node->next = previous->next;
            previous->next = new_node;
         }
     }

     /**
      * @brief Deletes the node in the list at position index
      * @param value Integer value of the node to delete.
      * Note: we need to link together the node before it and the node after it
      */
     void LinkedList::delete_node(int index) {
        size--;
        if (index == 0 ) {
            Node* to_delete = head;
            head = head->next;
            delete to_delete;
        }
        else {
            Node* previous = get_node(index - 1);
            Node* to_delete = previous->next;
            previous->next = to_delete->next;
            delete to_delete;
        }
        
     }

   /**
      * @brief true if this linked list has a node with value of target
      * @param target 
      * @return true 
      * @return false 
      */
     bool LinkedList::contains_node(int target) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == target) {
                return true;
            }
            current = current->next;
        }
            return false;
     }
 
     /**
      * @brief Set node at position index's data to new_value
      * @param index 
      * @param new_value 
      */
     void LinkedList::modify_node(int index, int new_value) {
        get_node(index)->data = new_value;
     }

     /**
      * @brief returns a pointer to the node at position index
      * @param index 
      * @return Node* 
      */
     Node* LinkedList::get_node(int index) {
        Node* current = head;
        for (int i = 0; i < index; i++ ) {
            current = current->next;
        }
        return current;
     }

     /**
      * @brief Displays all nodes in the list.
      */
     void LinkedList::display_list() {
         if (head == nullptr) { 
             return;
         }
         Node* current = head;
         while (current != nullptr) { 
             cout << current->data << " -> ";
             current = current->next;
         }
        cout << "nullptr" << endl;
     }
 
 int main() {
    LinkedList list;
    list.insert_node(0, 100);
    list.insert_node(1, 200);
    list.insert_node(2, 400);
    list.display_list();
    list.insert_node(0, 999);
    list.display_list();
    list.modify_node(2, 900);
    list.modify_node(0, 5000);
    list.display_list();
    list.delete_node(0);
    list.display_list();
    return 0;
 }
 
 