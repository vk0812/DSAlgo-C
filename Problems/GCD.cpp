// GCD using Euclid's Theorem
// Suppose 2 numbers 42 and 24 - GCD(HCF) = 6
// 42%24=18
// 24%18=6 (24 and 18 gcd also 6)
// 18%6=0 (18 and 6 gcd also 6)
// Once we get 0 second number is our gcd

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int c;
    while (true)
    {
        c = a % b;
        if (c == 0)
        {
            break;
        }
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}