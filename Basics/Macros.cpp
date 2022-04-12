#include <iostream>
using namespace std;

#define PI 3.14 // no memory created
// all instances of PI changed to 3.14 before compile time
// PI = PI + 1 not possible since no memory for PI
int main()
{
    int r = 5;
    // double pi = 3.14 this creates memory for pi

    double area = PI * r * r;
    cout << area << endl;
}