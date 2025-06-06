#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

/* This is the maximum size of the stack, 
 * similar to how we have a fixed/limited amount of memory
 */
const int MAX_STACK_SIZE = 1000000; 

 /**
  * @class DynamicStack
  * @brief Stack implemented with dynamic array
  * Overflow and underflow handled by exception handling
  */
class Stack { 
    private:
        int size;
        int stack[MAX_STACK_SIZE];
        
    public:
        /**
         * @brief Construct a new Stack object
         * 
         */
        Stack() {
            size = 0;
        }

        /**
         * @brief Adds an item to the top of the stack
         * 
         * @param item - the int that is added to the top of the stack
         */
        void push(int item) {
            try {
                if (size == MAX_STACK_SIZE){
                    throw out_of_range("Stack is full!");
                }
                else {
                    stack[size] = item;
                    size++;
                }
            }
            catch (exception e) {
                cout << "Stack is full; you cannot add an item." << endl;
            }
           
            }
    

        /**
         * @brief Prints the stack sideways
         */
        void display() {
            cout << "Stack: [";
            for (int i = 0; i < size - 1; i++ ){ // goes from 0 to size - 2
                cout << stack[i] << " | ";
            }
            cout << stack[size -1] << " ] " << endl; // print size -1 
                                                    // to avoid having "|" after last

        }

        /**
         * @brief Returns what is on the top of the stack
         * 
         * @return int - what is on top of the stack
         */
        int top() {
            return stack[size -1 ];
    
        }

        /**
         * @brief Removes the top item off the stack, does not return it
         * To return, use top then pop
         * 
         * Exercise: make it exit gracefully if there's an error
         */
        void pop() {
            try {
                if (size > 0) {
                    size--; 
                }
                else {
                    throw out_of_range("You are out of range.");
                }
            }
            catch(exception e) {
                cout << "The stack is empty!" << endl;
            }
        }

        /**
         * @brief Returns whether the stack is empty
         * 
         * @return true - stack is empty
         * @return false - stack is not empty
         */
        bool empty() {
           return size == 0;
        }

        /**
         * @brief Returns the size of the stack i.e., how many elements are on the stack
         * 
         * @return int - the size of the stack
         */
        int get_size() {
           return size;
        }
};


// Controls program flow
int main() {
   
    Stack notable_dates;
    notable_dates.push(1776);
    notable_dates.push(2000);
    notable_dates.push(1969);
    notable_dates.push(1989);
    
    notable_dates.display();
    
    cout << "Top of stack: " << notable_dates.top() << endl;
   
    notable_dates.pop();
    notable_dates.display();
    
    cout << "Is the stack empty? " <<  notable_dates.empty() << endl;
    cout << "No the stack is of size " << notable_dates.get_size() << endl;

    for (int i = 0; i < MAX_STACK_SIZE * 2; i++) {
        notable_dates.push(i);
    }

    for (int i = 0; i < MAX_STACK_SIZE * 2; i++) {
        notable_dates.pop();
    }
    
    cout << "After catching exception." << endl;

}