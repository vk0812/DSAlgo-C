#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vector - dynamic array
    // size automatically gets doubled when index goes out of range
    // creates a new vector of double size and dumps the old one

    vector<int> v;
    // v.capacity gives total memory allocated to vector
    cout << "Capacity " << v.capacity() << endl;
    v.push_back(1);
    v.push_back(2);
    cout << "Capacity " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity " << v.capacity() << endl; // memory gets doubled when trying to go out of index
    cout << "Size " << v.size() << endl;         // gives true size of the array

    cout << "Element at 2nd index " << v.at(2) << endl; // or v[2]

    // v.front() and v.back works here also
    v.pop_back(); // last element removed
    cout << "Size after popping " << v.size() << endl;

    // v.clear() clears the size of the vector but not the capacity

    vector<int> a(5, 1); // size of vector 5 and every element is 1;
    for (int i : a)
    {
        cout << i << " ";
    }
    // vector<int> last(a) copies content of a to last vector
}
