#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    cout << binary_search(v.begin(), v.end(), 4) << endl; // 0 for absent
    cout << binary_search(v.begin(), v.end(), 3) << endl; // 1 for present

    cout << "Lower Bound of 3 " << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout << "Upper Bound of 3 " << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl;
}