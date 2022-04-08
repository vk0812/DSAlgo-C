#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    // p = &a (address of a)
    // *p = a (value of a)
    cout << p << endl;
    cout << *p << endl;
    *p = *p + 1; // updates value of a also
    cout << p << endl;
    cout << a << endl;
    cout << *p << endl;
    int *q = p;
    // since p is address therefore '*' before q variable
    cout << q << endl;
    cout << *q << endl;
    *q = *q + 1;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << *q << endl;
}