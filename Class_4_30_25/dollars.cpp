#include <iostream>
using namespace std;

class Dollars {
private:
    int _dollars;
    int _cents;

public:
    Dollars();
    Dollars(int, int);
    Dollars operator+(const Dollars &other);
    Dollars operator-(const Dollars &other);
    Dollars operator*(const int& factor);
    friend ostream& operator<<(ostream &out, const Dollars &d);
    friend istream& operator>>(istream &in, Dollars &d);
    int get_dollars() const {return _dollars;}
    int get_cents() const {return _cents;}
    void simplify();
    
};

Dollars::Dollars() {
    _dollars = 0;
    _cents = 0;
}

Dollars::Dollars(int dollars, int cents) {
    _dollars = dollars;
    _cents = cents;
}

Dollars Dollars::operator+(const Dollars &other) {
    int cents = _cents + other._cents;
    int dollars = _dollars + other._dollars + (cents/100);
    return Dollars(dollars, cents % 100);
}

Dollars Dollars::operator-(const Dollars &other) {
    int cents = abs(_cents - other._cents);
    int dollars = abs(_dollars - other._dollars);
    return Dollars(dollars, cents);
}

Dollars Dollars::operator*(const int &factor) {
    int cents = _cents * factor % 100;
    int dollars = (_dollars * factor) + ((_cents * factor)/100);
    return Dollars(dollars, cents);
}

void Dollars::simplify() {
    _dollars = _dollars + _cents / 100;
    _cents = _cents % 100;
}
    
ostream& operator<<(ostream &out, const Dollars &d) {
    out << "$" << d._dollars << ".";
    //handle formatting for < 10 cents --> i.e. if 4 then 04
    if(d._cents < 10)
        out << 0;
    out << d._cents;
    return out;
}
// c3 = c1 + c2 --> c1.operator(c2)
// in >> d1
istream& operator>>(istream &in, Dollars &d) {
    cout << "Enter a dollar amount: " << endl;
    in >> d._dollars;
    cout << "Enter a cents amount: " << endl;
    in >> d._cents;
    return in;
}


int main() {
    Dollars change(1, 86);
    Dollars a_bit_more(1, 85);

    Dollars money = change - a_bit_more;
    cout << money << endl; 

    Dollars mon = change * 5;
    cout << mon << endl;
   
    Dollars my_money = change * a_bit_more;
    cout << my_money << endl;

    Dollars more_money;
    cin >> more_money;
    more_money.simplify();
    cout << more_money << endl;
    
}