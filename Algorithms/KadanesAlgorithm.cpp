// Gives us O(n) complexity
#include <iostream>
using namespace std;

int main()
{
    int a[] = {-1, 4, 2, -3, 5};
    int sum[5];

    if (a[0] > 0)
    {
        sum[0] = a[0];
    }
    else
    {
        sum[0] = 0;
    }

    for (int i = 1; i < 5; i++)
    {
        sum[i] = sum[i - 1] + a[i];
        if (sum[i] < 0)
        {
            sum[i] = 0;
        }
    }
    int max_sum = -9999999;
    for (int j = 0; j < 5; j++)
    {
        max_sum = max(max_sum, sum[j]);
    }

    cout << "Max Sum is " << max_sum;
}