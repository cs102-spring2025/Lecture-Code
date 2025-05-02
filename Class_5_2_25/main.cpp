#include "array.h"
#include <iostream>
using namespace std;


int main()
{
    Array<int> int_array(4);
    Array<double> double_array(4);
    Array<string> string_array(4);

   cout << int_array.getLength() <<"\n";
   cout << double_array.getLength() << "\n";
   cout << string_array.getLength() << "\n";


}