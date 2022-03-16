// Use recursion to find n raised to power of p
#include <iostream>
using namespace std;

int prod(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return n * (prod(n, p - 1));
}

int main()
{
    cout << prod(3, 4) << endl;
}