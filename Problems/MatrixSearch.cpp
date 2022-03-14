// O(n) complexity search algorithm
#include <iostream>
using namespace std;

int main()
{
    int a[4][4] = {{1, 4, 7, 11},
                   {2, 5, 8, 12},
                   {3, 6, 9, 16},
                   {10, 13, 14, 17}};

    // You can either start from top right or bottom left only
    int i = 0;
    int j = 3;
    int k;
    cin >> k;
    bool b = false;
    while (i < 4 && j >= 0)
    {
        if (a[i][j] > k)
        {
            j--;
        }
        else if (a[i][j] < k)
        {
            i++;
        }
        else
        {
            b = true;
            break;
        }
    }
    if (b)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}