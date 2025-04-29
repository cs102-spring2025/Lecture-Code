#include <iostream>
using namespace std;

class Dollars {
private:
    int _dollars;
    int _cents;

public:
    Dollars(int, int);
    Dollars operator+(const Dollars &other);
    Dollars operator*(const int& factor);
    int get_dollars() const {return _dollars;}
    int get_cents() const {return _cents;}
};

Dollars::Dollars(int dollars, int cents) {
    _dollars = dollars;
    _cents = cents;
}


Dollars Dollars::operator*(const Dollars &other) {
    
//int amount = (_dollars * other._dollars) + (_dollars *other._cents)  
//            +(other._dollars * _cents) + ( other._cents * _cents);

 //   int dollars = amount/100;
 //   int cents = amount%100;

    int cents = _cents * other._cents % 100;
    int dollars = (_dollars * other._cents) + ((_cents * other._cents)/100);

    int cents2 = (other._dollars * _cents);
    int dollars2 = other._dollars * _dollars;
    cout << cents2 << dollars2 << endl;

    return Dollars(dollars, cents);

}

Dollars Dollars::operator*(const int &factor) {
    int cents = _cents * factor % 100;
   // cout << _cents << _cents*factor << endl;
    int dollars = (_dollars * factor) + ((_cents * factor)/100);
    return Dollars(dollars, cents);
}
    


Dollars Dollars::operator+(const Dollars &other) {
    int cents = _cents + other._cents;
    int dollars = _dollars + other._dollars + (cents/100);
    return Dollars(dollars, cents % 100);
}

ostream& operator<<(ostream &out, const Dollars &d) {
    out << "$" << d.get_dollars() << ".";
    //handle formatting for < 10 cents
    if(d.get_cents() < 10)
        out << 0;
    out << d.get_cents();

    return out;
}

int main() {
    Dollars change(1, 2);
    Dollars a_bit_more(1, 5);
    //cout << change << endl;

    Dollars money = change * a_bit_more;
    cout << money << endl; 


    //Dollars mon = change * 5;
   // cout << mon << endl;
   // Dollars money = change + a_bit_more;
   // cout << money << endl;

   // cout << money.get_dollars() << " dollars and " << money.get_cents() << " cents" << endl;
    
}