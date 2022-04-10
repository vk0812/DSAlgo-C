#include <iostream>
using namespace std;

int getSum(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        // OR sum += *(a+i);
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    // size of below line is 8+(n*4)
    // 8 for pointer and n*4 for n integer elements
    int *arr = new int[n]; // Dynamic Array Created
    // arr stores address of first element

    // arr[i] = *(arr+i)

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // OR cin>>*(arr+i);
    }

    int sum = getSum(arr, n);
    cout << "Sum is - " << sum << endl;
}