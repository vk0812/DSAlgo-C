// Matrix(n,m) paths problem
// Recursion
#include <iostream>
using namespace std;

int noofWays(int n, int m)
{
    if (n == 1 || m == 1) // base case
    {
        return 1;
    }
    return (noofWays(n - 1, m) + noofWays(n, m - 1));
}

int main()
{
    cout << noofWays(4, 4) << endl;
    ;
}