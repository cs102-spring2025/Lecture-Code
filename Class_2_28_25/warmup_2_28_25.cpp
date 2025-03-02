#include <iostream>
using namespace std;

int main() {

    int a = 40;        
    int& ref = a;      
    
    cout << "Value of a: " << a << endl;     
    cout << "Value of ref (alias for a): " << ref << endl; 
    
    ref = 50;          
    cout << "New value of a: " << a << endl;  
    
    int b = 60;
    ref = &b;   // is this legal?

    return 0;    
}

