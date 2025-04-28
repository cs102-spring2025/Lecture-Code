#include <iostream>
using namespace std;

class Dollars {
private:
    int _dollars;
    int _cents;

public:
    Dollars(int, int);
    Dollars operator+(const Dollars &other);
    int get_dollars() const {return _dollars;}
    int get_cents() const {return _cents;}
};

Dollars::Dollars(int dollars, int cents) {
    _dollars = dollars;
    _cents = cents;
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
    Dollars change(7, 53);
    Dollars a_bit_more(8, 56);
    cout << change << endl;

    Dollars money = change + a_bit_more;
    cout << money << endl;

    cout << money.get_dollars() << " dollars and " << money.get_cents() << " cents" << endl;
    
}