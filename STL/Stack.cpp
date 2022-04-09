#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Stack works on the concept of last in first out
    stack<string> s;
    s.push("Vidit");
    s.push("is");
    s.push("a");
    s.push("good");
    s.push("boy");
    cout << "Top Element - " << s.top() << endl;
    s.pop();
    cout << "Top Element - " << s.top() << endl;
    // size using s.size()
    // empty or not using s.empty()
}