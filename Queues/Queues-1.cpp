#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // FIFO - First In First Out
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front - " << q.front() << endl;
    cout << "Back - " << q.back() << endl;
    q.pop();
    cout << "Front - " << q.front() << endl;
    cout << "Back - " << q.back() << endl;
    q.pop();
    cout << "Size - " << q.size() << endl;
}