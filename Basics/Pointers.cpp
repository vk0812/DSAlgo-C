#include <iostream>
using namespace std;

int main()
{
    // A pointer points to the address of the variable in the memory
    int a = 10;
    int *aptr;
    aptr = &a; // address
    cout << a << endl;
    cout << *aptr << endl;
    cout << aptr << endl;
    cout << &a << endl;
    // The value of a can be changed from its pointer also
    *aptr = 20;
    cout << a << endl;
    cout << &a << endl;

    int b = 15;
    int *c = &b;
    cout << c << endl;
    cout << *c << endl;
    cout << &b << endl;
    c++; // int occupies 4 bytes
    cout << c << endl;
    cout << &b << endl;
    cout << *c << endl;
    cout << b << endl;
}