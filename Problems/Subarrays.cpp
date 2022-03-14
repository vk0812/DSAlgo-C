// All subarrays
// Maximum sum of all subarrays
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int max = -9999999;
    int a[] = {1, 2, 3, 4, -5};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum = sum + a[k];
            }
            if (sum > max)
            {
                max = sum;
            }
            sum = 0;
        }
    }
    cout << "Maximum sum of all subarrays " << max;
}
// But this is O(n^3) time complexity
// See Kadane's Algorithm