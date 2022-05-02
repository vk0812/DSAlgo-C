#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    cout << "Front - " << d.front() << endl;
    cout << "Back - " << d.back() << endl;
    d.push_front(3);
    d.push_back(4);
    cout << "Front - " << d.front() << endl;
    cout << "Back - " << d.back() << endl;
    d.pop_front();
    d.pop_back();
    cout << "Front - " << d.front() << endl;
    cout << "Back - " << d.back() << endl;
}