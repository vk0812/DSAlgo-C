#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Maps are basically same as Dictionary of Python
    // Key-Value Pair
    map<string, int> marks;
    marks["AA"] = 29;
    marks["BB"] = 28;
    marks["CC"] = 30;
    cout << "Marks of BB " << marks["BB"] << endl;
    marks.insert({"DD", 27});
    for (auto i : marks)
    {
        // each element stored in the form of a pair
        cout << i.first << " " << i.second << endl;
    }
    // in case  of maps to erase
    // marks.erase(key) only key needs to be given
}