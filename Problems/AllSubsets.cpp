#include <iostream>
using namespace std;

void getSubsets(int a[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << a[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int a[4] = {1, 2, 3, 4};
    getSubsets(a, 4);
}