#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int **q = &p; // double pointer

    cout << "What's inside p block - " << p << endl;        // address of i
    cout << "Value at address in p block - " << *p << endl; // value of i
    cout << "Address of p block - " << &p << endl;          // address of p

    cout << "What's inside q block - " << q << endl;        // address of p
    cout << "Address of q block - " << &q << endl;          // address of q
    cout << "Value at address in q block - " << *q << endl; // address of i
    cout << "Value of i block - " << **q << endl;           // value at i

    **q = **q + 1;
    cout << "Changed Value of i block - " << i << endl;
    cout << "Changed Value of i block - " << *p << endl;
    cout << "Changed Value of i block - " << **q << endl;
}