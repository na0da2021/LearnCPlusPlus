/*
char a = '~';
char b = '&';
char c = '%';
char d = 'A';
========Output Needed==========
"ASCII Value of ~ Is 126"
"ASCII Value of & Is 38"
"ASCII Value of % Is 37"
"ASCII Value of A Is 65"
*/
#include <iostream>
using namespace std;

int main()
{
    char a = '~';
    char b = '&';
    char c = '%';
    char d = 'A';

    cout << "ASCII Value of " << a << " Is "  << int(a) << endl;
    cout << "ASCII Value of " << b << " Is "  << int(b) << endl;
    cout << "ASCII Value of " << c << " Is "  << int(c) << endl;
    cout << "ASCII Value of " << d << " Is "  << int(d) << endl;

    return 0;
}