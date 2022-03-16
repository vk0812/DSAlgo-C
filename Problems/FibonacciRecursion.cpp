#include <iostream>
using namespace std;

int nfibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return (nfibo(n - 1) + nfibo(n - 2));
}

int main()
{
    int n;
    cin >> n;
    cout << nfibo(n) << endl;
}