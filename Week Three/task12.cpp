#include <iostream>
using namespace std;

int main()
{
    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012; 
/*
    cout <<  sizeof(a) << "\n"; //2
    cout <<  sizeof(b) << "\n"; //4 
    cout <<  sizeof(c) << "\n"; //12 not 16
    cout << int('P'); //80
*/


    // Change ??? To Something Else To Get The Output
    cout << sizeof(c) - sizeof(b) << "\n";    // 8 
    cout << sizeof(c) + sizeof(b) << "\n";    // 16 
    cout << sizeof(c) * sizeof(a) << "\n";    // 24 
    cout << a * int(c) << "\n";    // 5000
    cout << char( (b / a) * (sizeof(a) * sizeof(b)) ) << "\n"; // P
    return 0;
}