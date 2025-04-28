#include "frac.h"

// operator overload definition

Fraction operator+(Fraction f1, Fraction f2)
{
   Fraction r;        // declare a Fraction to hold the result

   // load result Fraction with sum of adjusted numerators
   r.numerator = (f1.numerator*f2.denominator)
                  + (f2.numerator*f1.denominator);

   // load result with the common denominator
   r.denominator = f1.denominator * f2.denominator;

   return r;         // return the result Fraction
}

 
ostream& operator<< (ostream& s, Fraction f)
{
  s << f.numerator << '/' << f.denominator;
  return s;
}

// member function definitions

Fraction::Fraction()
// Default constructor.  Initializes fraction to 0/1
{
   numerator = 0; 
   denominator = 1;
}

Fraction::Fraction(int n, int d)
// initializes fraction to n/d
// what kind of error checking should be added?
{
   cout << "Running constructor with parameter n = " << n
	<< " and d = " << d << endl;
   numerator = n;
   denominator = d;
}

void Fraction::Input()
// Get a fraction from standard input, in the form "numerator/denominator."
// what kind of error checking should be added?
{
   char divSign;	// used to consume the '/' character during input
   cin >> numerator >> divSign >> denominator;
}

void Fraction::Show()
// Display a fraction, in the form "numerator/denominator."
{
   cout << numerator << '/' << denominator;
}

int Fraction::GetNumerator()
{
   return numerator;
}

int Fraction::GetDenominator()
{
   return denominator;
}

void Fraction::SetValue(int n, int d)
// what sort of error checking should be added?
{
   numerator = n;
   denominator = d;
}


double Fraction::Evaluate()
// Calculates and returns the decimal value of a fraction
{
   double n = numerator;	// convert numerator to double
   double d = denominator;	// convert denominator to double
   return (n / d);		// compute and return float representation
}