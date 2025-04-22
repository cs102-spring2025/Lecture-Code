#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    public:
      Vehicle(string brand) {
        brand = _brand;
      };

      string get_brand() {
        return _brand;
      }

      void honk() {
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
    private:
      string _vin;
      
  };
  
  int main() {
    Car myCar("Subaru", "Z45T459P");
    //myCar.honk();
    cout << myCar.get_brand() + " " + myCar.get_vin();
    return 0;
  }