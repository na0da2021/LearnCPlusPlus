/*
=========== Edit Anything Except Values ===========
unsigned int a = 100;
unsigned int b = -100;
short c = 100;
long d = 500.55;

=========== Do Not Edit ================
cout << a << "\n"; // 100
cout << b << "\n"; // -100
cout << c << "\n"; // 100
cout << d << "\n"; // 500.55
*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 100;
    int b = -100;
    short c = 100;
    float d = 500.55;

    cout << a << "\n"; // 100
    cout << b << "\n"; // -100
    cout << c << "\n"; // 100
    cout << d << "\n"; // 500.55

    return 0;
}