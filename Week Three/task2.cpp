#include <iostream>
using namespace std;

int main()
{
double salary = 5000.98;
// 8 Bytes
cout << sizeof(salary) << " Bytes" << endl;
// 64 Bits
cout << 8 * sizeof(salary) << " Bits" << endl;
return 0;
}