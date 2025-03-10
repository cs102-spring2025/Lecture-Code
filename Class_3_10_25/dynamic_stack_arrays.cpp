 #include <iostream>
 #include <string>
 using namespace std;
 
 /**
  * @brief Stack implemented with dynamic array
  * 
  */
 class DynamicStack {
 private:
     int capacity; //capacity of the stack
     int size; //current size of the stack
     int* stack; //dynamically allocated stack
 
 public:
     /**
      * @brief Construct a new Dynamic Stack object
      * Note: default constructor has no parameters
      */
     DynamicStack() {
         size = 0; //all stacks start off empty
         capacity = 1; //by default, all stacks only hold one element
         stack = new int[capacity]; //dynamically allocate the array
     }
 
     /**
      * @brief Construct a new Dynamic Stack object
      * Note: Not a default constructor, it specifies the initial capacity
      * @param initial_capacity - the capacity we want the stack to have when we create it
      */
     DynamicStack(int initial_capacity) {
         size = 0; //all stacks start off empty
         capacity = initial_capacity; //we can specify the capacity
         stack = new int[capacity]; //and the dynamically allocate the stack
     }
 
     /**
      * @brief Destroy the Dynamic Stack object
      * Note: destructor, indicated by the ~ symbol going to be automatically called
      * to free up memory
      */
     ~DynamicStack() {
         cout << "Destructing ..... ";
         delete[] stack;
     }
 
     /**
      * @brief Get the capacity attribute
      * 
      * @return int - the capacity of the stack
      */
     int get_capacity() {
         return capacity;
     }
     
     /**
      * @brief Get the size attribute
      * 
      * @return int - the size of the stack
      */
     int get_size() {
         return size;
     }
 
     /**
      * @brief Push a new int x to the top of the stack
      * 
      * @param x - the int to be put on the top of the stack
      */
     void push(int x){
         if(size == capacity){
             resize();
         }
         stack[size] = x;
         size++;
     }
 
     /**
      * @brief Resizes the stack if we ran out of space
      * 
      */
     void resize(){
         //copy of our stack for preserving the stack contents
         int* temp = stack; // creating a copy not a reference
 
         //increase our capacity and make a new array
         capacity++;
         stack = new int[capacity];
 
         for (int i = 0; i < size; i++) {
             stack[i] = temp[i];
         }
 
         //delete temp
         delete[] temp;
     }
 
     /**
      * @brief Prints the stack sideways
      * 
      * Exercise: make it print vertically like an actual stack with the
      * top on the top
      */
     void display() {
         cout << "Stack[ ";
         for (int i = 0; i < size - 1; i++) {
             cout << stack[i] << " | ";
         }
         cout << stack[size -1] << " ] " << endl;
     }
 
     /**
      * @brief Returns what is on the top of the stack
      * 
      * @return int - what is on top of the stack
      */
     int top() {
         return stack[size - 1];
     }
 
     /**
      * @brief Removes the top item off the stack, does not return it
      * To return, use top then pop
      * 
      * Exercise: make it exit gracefully if there's an error
      */
     void pop() {
         if(!empty()) {
             size--;
         }
         else {
             cout << "Error: Stack underflow!" << endl;
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
 
 };
 
 int main() {
     DynamicStack test_stack(15000);
     // alternative notation
     //DynamicStack test_stack = DynamicStack(50000); 
     
     //Demonstrate that we can't run out of space now because our stack keeps growing!
     for (int i = 0; i < 20000; i++) 
         test_stack.push(i);

     for (int i = 0; i < 1000; i++) 
         test_stack.pop();

     cout << "top = " << test_stack.top() << endl;
     cout << "Now size = " << test_stack.get_size() << endl;
     cout << " and capacity = " << test_stack.get_capacity() << endl;

 
 }