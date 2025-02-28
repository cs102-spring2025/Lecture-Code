#include <iostream>
using namespace std;

int main () {

    int* ptr = new int(10); 
   // int* ptr = new int;
   // *ptr = 10;
    cout << "Address: " <<  ptr << " has a value " << *ptr << endl;
    delete ptr;             
    cout << "Address after deallocating memory: " << ptr << endl; 
    cout << *ptr << endl;
    ptr = nullptr;   
    cout << "Address after setting nullptr: " << *ptr << endl;    
    
   return 0;


}