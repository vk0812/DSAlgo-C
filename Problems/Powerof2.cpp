// Check whether an entered number is a power of 2
// Using Bit Manipulation

#include <iostream>
using namespace std;

bool powerof2(int n)
{
    // Suppose n = 8(1000) then n-1 = 7(0111)
    // To obtain n-1 from n - we can do inverse of all numbers after rightmost set bit (including it)
    // set bit - 1 bit
    // and 8 & 7 is 0000 this only happens for power of 2 numbers
    cout << (n & (n - 1)) << endl;
    if ((n & (n - 1)) == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << powerof2(n) << endl;
}