#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    public:
      Vehicle(string brand) {
        _brand = brand;
      };

      string get_brand() {
        return _brand;
      }

      virtual void honk() {
        cout << "Tuut, tuut! \n" ;
      }

    protected:
      string _brand;
  };
  
  class Car: public Vehicle {
    public:
        Car(string brand, string vin) : Vehicle (brand) {
            _vin = vin;
        }

        string get_vin() {
            return _vin;
        }

        void honk () {
            cout << "tuut, tuut, tuut! \n" ;
        }
    
        private:
      string _vin;
      
  };
  
  int main() {
    //Car myCar("Subaru", "Z45T459P");
    //myCar.honk();
    //cout << myCar.get_brand() + " " + myCar.get_vin() << endl;
    Vehicle v("Subaru");
    v.honk();
    return 0;
  }


//1.	Identify the base and derived class.
//2.	Identify the line of code that calls the base class constructor.
//3.	Identify any overridden methods.
//4.	What is the output of this program?
