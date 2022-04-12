#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Set allows you to insert unique elements only
    set<int> s;
    // Set in sorted order always
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(1);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it); // removes index 1 element here(2)
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Count of 4 " << s.count(4) << endl;   // present in set or not - 1 for present
    cout << "Count of -4 " << s.count(-4) << endl; // present in set or not - 0 for absent

    set<int>::iterator itr = s.find(4); // will get referrence of 4 in set (address)
    cout << *itr << endl;               // from address we will print back 4
}