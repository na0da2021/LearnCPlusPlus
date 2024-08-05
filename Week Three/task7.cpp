/*
int a = 1;
int b = 13;
int c = 17;
int d = 70;

==========Output Needed==============
"EWS"
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;

    cout << int('E') << '\n'
         << int('W') << '\n'
         << int('S') << '\n';
    cout << char(d - a) << char(d + c) << char(d + b) << '\n';
    return 0;
}