#include <iostream>
using namespace std;

class Queue
{
public:
    int n;
    int *arr;
    int f = 0, r = 0;
    Queue(int n)
    {
        this->n = n;
        arr = new int[n];
    }
    void push(int val)
    {
        if (r == n)
        {
            cout << "Queue OverFlow" << endl;
            return;
        }
        arr[r++] = val;
    }
    void pop()
    {
        if (f == r)
        {
            cout << "Queue UnderFlow" << endl;
            return;
        }
        f++;
    }
    int front()
    {
        return arr[f];
    }
    int back()
    {
        return arr[r - 1];
    }
    int size()
    {
        int cf = f;
        int count = 0;
        while (cf < r)
        {
            count++;
            cf++;
        }
        return count;
    }
};

int main()
{
    Queue q(5);
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