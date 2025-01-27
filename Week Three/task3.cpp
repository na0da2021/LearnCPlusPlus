/*
 Output Needed
"Maximum Integer Number Is => 2147483647"
"Minimum Integer Number Is => -2147483648"
"Maximum Short Integer Number Is => 32767"
"Minimum Short Integer Number Is => -32768"
*/
#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    cout << "Maximum Integer Number Is => " << INT_MAX << endl; 
    cout << "Minimum Integer Number Is => " << INT_MIN << endl; 
    cout << "Maximum short Integer Number Is => " << SHRT_MAX << endl; 
    cout << "Minimum Short Integer Number Is => " << SHRT_MIN << endl; 
    return 0;
}