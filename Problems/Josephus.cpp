// Josephus Problem
#include <iostream>
using namespace std;

int josephus(int n, int k)
{
    if (n == 1) // when just ine person left in the circle - base case
    {
        return 0;
    }
    return ((josephus(n - 1, k) + k) % n);
}

int main()
{
    cout << josephus(5, 3) << endl;
}