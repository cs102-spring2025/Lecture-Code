#include <iostream>
using namespace std;

template <typename T>
   class Node {
   public:
       T data;
       Node* next;

       Node(T value) : data(value), next(nullptr) {}
   };

   template <typename T>
   class LinkedList {
   private:
       Node<T>* head;

   public:
       LinkedList() : head(nullptr) {}

       void add_element(T value) {
           Node<T>* newNode = new Node<T>(value);
           newNode->next = head;
           head = newNode;
       }

       void print_list() {
           Node<T>* current = head;
           while (current) {
               cout << current->data << " -> ";
               current = current->next;
           }
           cout << "null" << endl;
       }
   };

   int main() {
    LinkedList<int> int_list;
    int_list.add_element(10);
    int_list.add_element(20);
    int_list.add_element(30);
    cout << "Integer List: ";
    int_list.print_list();

    LinkedList<string> string_list;
    string_list.add_element("Alice");
    string_list.add_element("Bob");
    string_list.add_element("Charlie");
    cout << "String List: ";
    string_list.print_list();

    return 0;
}



