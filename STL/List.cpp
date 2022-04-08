#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "After Erase" << endl;
    l.erase(l.begin()); // whatever number the iterator points to is removed
    for (int i : l)
    {
        cout << i << " ";
    }
    // l.size() for size of list
    // Rest all common ones also work for list
}