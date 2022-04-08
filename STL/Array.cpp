#include <iostream>
#include <array>
using namespace std;

int main()
{
    int basic[4] = {1, 2, 3, 4};
    array<int, 4> a = {1, 2, 3, 4};
    cout << "Size of Array " << a.size() << endl;
    cout << "Element at 2nd Index " << a.at(2) << endl; // or a[2]
    cout << "Empty or Not " << a.empty() << endl;
    // 0 false and 1 true
    cout << "Front Element " << a.front() << endl;
    cout << "Last Element " << a.back() << endl;
}