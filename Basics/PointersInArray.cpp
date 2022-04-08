#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Address of First Element of the Array - " << arr << endl;
    cout << "Address of First Element of the Array - " << &arr[0] << endl;
    cout << "Address of Second Element of the Array - " << &arr[1] << endl;

    cout << "First Element of the Array - " << *arr << endl;       // or *&arr[0]
    cout << "Third Element of the Array - " << *(arr + 2) << endl; // or *&arr[2]
    // arr[i] = *(arr+i)

    int *p = &arr[0];
    cout << "Size of Array - " << sizeof(arr) << endl;
    cout << "Size of Address of arr[0] - " << sizeof(p) << endl;
    cout << "Size of arr[0] - " << sizeof(*p) << endl;
}