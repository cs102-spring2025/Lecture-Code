#include <iostream>
using namespace std;

class Complex
{
private:
	int _real, _imag;

public:
	Complex(int r, int i);
    Complex operator+(const Complex &other);
    friend ostream& operator << (ostream &out, const Complex &c);

};

Complex::Complex(int r, int i) { _real = r; _imag = i; }

// write function here
// (a + ib) + (c + id) = (a+c) + i(b + d)

Complex Complex::operator+(const Complex &other) {
    int real = _real + other._real;
    int imag = _imag + other._imag;
    return Complex (real, imag);

}

// Can we make this a member function?
ostream& operator << (ostream &out, const Complex &c)
{
	out << c._real;
	out << "+i" << c._imag << endl;
	return out;
}


int main()
{
Complex c1 (3,4);
Complex c2 (1,2);
// c3 = c1 + c2 is equivalent to: c1.operator+ (c2)
Complex c3 = c1 + c2;
cout << c3 << endl;
return 0;
}
