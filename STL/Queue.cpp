#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Queue works on the concept of first in and first out
    queue<string> q;
    q.push("Vidit");
    q.push("is");
    q.push("a");
    q.push("good");
    q.push("boy");
    cout << "First Element - " << q.front() << endl;
    q.pop();
    cout << "First Element - " << q.front() << endl;
    // size using s.size()
    // empty or not using s.empty()
}