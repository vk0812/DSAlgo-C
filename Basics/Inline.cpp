#include <iostream>
using namespace std;

// A function can be made inline if consists of 1 to 3 lines
// no. of lines allowed sometimes depends on compiler too
inline int getMax(int &a, int &b)
{
    return ((a > b) ? a : b);
}

// all instances of getMax changed with the line of the function
// directly before compile time

int main()
{
    int a = 1;
    int b = 2;
    int ans;

    ans = getMax(a, b); // since function is inline it comes here as it is
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a, b); // since function is inline it comes here as it is
    cout << ans << endl;
}