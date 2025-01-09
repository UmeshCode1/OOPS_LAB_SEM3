// program to implement explicit type casting.

// Therory : Expilcit type casting is a way to convert one data type to another data type.

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    float b = 3.14;
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
    cout << "Value of a is " << float(a) << endl;
    cout << "Value of b is " << int(b) << endl;
    return 0;
}