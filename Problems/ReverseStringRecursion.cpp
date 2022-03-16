#include <iostream>
#include <string>
using namespace std;

string reverse(string s, int n, int i)
{
    if (i == n - 1)
    {
        string a(1, s[i]);
        return a;
    }
    string rev = reverse(s, n, i + 1);
    return (rev + s[i]);
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    cout << reverse(s, n, 0) << endl;
}

// Think using call stack of functions