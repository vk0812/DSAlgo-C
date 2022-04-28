#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Stack using STL
    stack<int> s;

    s.push(1);
    s.push(2);

    cout << "Top Element - " << s.top() << endl;
    s.pop();
    cout << "Top Element - " << s.top() << endl;

    // s.empty() to check if stack empty or not
    cout << "Size - " << s.size() << endl;
}