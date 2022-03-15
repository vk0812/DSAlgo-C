// Prime Factors of a given number using Sieve of Eratosthenes
#include <iostream>
using namespace std;

int smallestPrimeFactor(int n)
{
    int prime[n + 1] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    int k;
    for (k = 2; k <= n; k++)
    {
        if (prime[k] == 0)
        {
            if (n % k == 0)
            {
                break;
            }
        }
    }
    return k;
}

int main()
{
    int n;
    cin >> n;
    while (n != 1)
    {
        cout << smallestPrimeFactor(n) << endl;
        n = n / smallestPrimeFactor(n);
    }
}