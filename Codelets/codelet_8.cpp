#include <iostream> 
#include <string> 
using namespace std;

void mystery();
// increments static integer

int main() { 
	int harry = 11; 
	cout << harry << endl;

for (int i = 0; i < 3; i++) { 
	mystery(); 
	harry++;
} 

	cout << harry << endl;
string name = "Voldemort";
string* he_who_must_not_be_named = &name; 
string* you_know_who = he_who_must_not_be_named; 
cout << *you_know_who << endl;
*he_who_must_not_be_named = "Tom Riddle";
cout << *he_who_must_not_be_named << endl; 
cout << *you_know_who << endl; 

}

void mystery() { 
	static int harry = 0; 
	harry += 10;
cout << harry << endl;

}
