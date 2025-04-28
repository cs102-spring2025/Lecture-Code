#include <iostream>

using namespace std;

class Fraction
{
   friend Fraction operator+(Fraction f1, Fraction f2);
   friend ostream& operator<<(ostream& s, Fraction f);

public:
   Fraction();			// Set numerator = 0, denominator = 1.
   Fraction(int n, int d=1);	// constructor with parameters

   // standard input/output routines
   void Input();		// input a fraction from keyboard.
   void Show();			// Display a fraction on screen

   // accessors
   int GetNumerator();
   int GetDenominator();

   // mutator
   void SetValue(int n, int d); // set the fraction's value through parameters

   double Evaluate();		// Return the decimal value of a fraction

private:
   int numerator;		// top part
   int denominator;		// bottom part
};