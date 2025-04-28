#include <iostream>  
#include "frac.h"
using namespace std;

int main()
{
	// Try all three possible fraction constructors
	// and the input/output routines.
	
	// These declarations use the default constructor
	Fraction f1, f2;

	// These declarations use the constructor with parameters
	Fraction f3(3,4), f4(6);

	f1 = 10;
 	f2 = 6;

	cout << "f3 + f4 = " << f3 + f4 << '\n';

	cout << "Getting ready to add Fraction plus int" << endl;
	cout << "f2 + 5 = " << f2 + 5 << '\n';

	// Use the objects

	cout << "\n The fraction f1 is " << f1;
	
	cout << "\n The fraction f2 is " << f2;

	cout << "\n The fraction f3 is " << f3;

	cout << "\n The fraction f4 is " << f4;

	cout << "\n Now enter first fraction: ";
	f1.Input();
	cout << "\nYou entered " << f1;

	cout << "\n Now enter second fraction: ";
	f2.Input();
	cout << "\nYou entered " << f2;

	Fraction result;
	result = f1 + f2;
	cout << "\nThe sum of the first and second fraction is " 
		<< result << '\n';

	// Finally, find the floating-point value of f1 and f2
	
	cout << "\n The value of fraction 1 is " << f1.Evaluate() << '\n';
	cout << "\n The value of fraction 2 is " << f2.Evaluate() << '\n';

	cout << "Goodbye!\n";

        return 0;
}