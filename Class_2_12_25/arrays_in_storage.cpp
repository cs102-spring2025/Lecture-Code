/**
 * @file arrays_in_storage.cpp
 * @author Karyn Doke
 * @brief 
 * @version 0.1
 * @date 2025-02-13
 */
#include "Hexdump.hpp"
#include <iostream>
using namespace std;

int main(){
    int16_t a[10] = { 0, 11, 22, 33, 44, 55, 66, 77, 88, 99};
    cout << "sizeof(a): " << sizeof(a) << endl;
    cout << Hexdump(a, sizeof(a)) << endl;
    //cout << CustomHexdump<16, true>(a, sizeof(a)) << std::endl;
    
    int32_t b[5] = { 0x00, 0x11, 0x22, 0x33, 0x44};
    cout << Hexdump(b, sizeof(b)) << endl;
    cout << addressof(b[0]) << endl;
    cout << addressof(b[1]) << endl;
    cout << addressof(b[2]) << endl;
    cout << addressof(b[3]) << endl;
    cout << addressof(b[4]) << endl;
    cout << "/************/" << endl;

    int16_t c[2][2] = {{0x00, 0x01}, {0x10, 0x11}};
    cout << addressof(c[0][0]) << endl;
    cout << addressof(c[0][1]) << endl;
    cout << addressof(c[1][0]) << endl;
    cout << addressof(c[1][1]) << endl;

    return 0;
}