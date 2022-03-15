#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string n = "vidit";
    string s(5, 'v');
    cout << n << endl;
    cout << s << endl;

    string s1;
    getline(cin, s1); // if you need spaces in your sentence
    // if you just take cin>>s1 then only first word is used
    cout << s1 << endl;

    string s2 = s + s1; // or s.append(s1)
    cout << s2 << endl;

    cout << n[2] << endl; // accessing characters is same as arrays

    // To clear a string use s.clear();
    // To check whether a string is empty or not s.empty()

    string s11 = "abc";
    string s22 = "abc";
    cout << s22.compare(s11) << endl;

    cout << s2.erase(0, 4) << endl; // erase 4 letters starting from 0th index
    // s.find('some string') returns first index of some string
    // s.insert(2,'some string') inserts some string at 2 index
    // s.size() or s.length() size of string
    // s.substr(3,2) 2 letters from 3rd index onwards (3rd inclusive)
    // stoi(s) converts string to integer
    // to_string(x) converts an integer to string

    // sort(s.begin(),s.end()) to sort a string lexicographically
    // s.begin() and s.end() are opening and closing iterators
    // but for sort function you need to import #include<algorithm>

    // sort(n.begin(), n.end()); // sorts the string in ascending order
    cout << n << endl;
    // in order to sort in descending order
    // sort(n.begin(), n.end(), greater<int>());

    transform(n.begin(), n.end(), n.begin(), ::toupper);
    // for lower write ::tolower inplace of ::toupper
    cout << n << endl;
}