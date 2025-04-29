// C++ Program to overload == operator 
#include<iostream> 
#include<string> 
using namespace std; 
  
class Car{ 
  private: 
    string name; 
    int cost; 
    public: 
        Car(string n, int c){ 
            name=n; 
            cost=c; 
        } 
        
        bool operator == (Car &c) {
            if (name == c.name && cost == c.cost )
                return true;
            return false;
        }

}; 
int main(){ 
    Car car1 ("Subaru",500000); 
    Car car2 ("Subaru",1000000); 
    if (car1 == car2) 
        cout<<"The two cars are equal!"<<endl; 
    else
        cout<<"The two cars are not equal!"<<endl; 
    
    //cout << car1 << endl;
}