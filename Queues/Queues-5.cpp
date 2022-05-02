#include <iostream>
using namespace std;

class Dequeue
{
public:
    int n;
    int *arr;
    int front = -1, rear = -1;
    Dequeue(int n)
    {
        this->n = n;
        arr = new int[n];
    }
    bool isFull()
    {
        if (front == 0 && rear == n - 1)
            return true;
        else if (rear == (front - 1) % (n - 1))
            return true;
        return false;
    }
    bool isEmpty()
    {
        if (front == -1)
            return true;
        return false;
    }
    void push_front(int val)
    {
        if (isFull())
        {
            cout << "Dequeue OverFlow" << endl;
            return;
        }
        if (front == -1)
            front = rear = 0;
        else if (rear != n - 1 && front == 0)
            front = n - 1;
        else
            front--;
        arr[front] = val;
    }
    void push_rear(int val)
    {
        if (isFull())
        {
            cout << "Dequeue OverFlow" << endl;
            return;
        }
        if (front == -1)
            front = rear = 0;
        else if (front != 0 && rear == n - 1)
            rear = 0;
        else
            rear++;
        arr[rear] = val;
    }
    void pop_front()
    {
        if (isEmpty())
        {
            cout << "Dequeue UnderFlow" << endl;
            return;
        }
        if (front == rear)
            front = rear = -1;
        else if (front == n - 1)
            front = 0;
        else
            front++;
    }
    void pop_rear()
    {
        if (isEmpty())
        {
            cout << "Dequeue UnderFlow" << endl;
            return;
        }
        if (front == rear)
            front = rear = -1;
        else if (rear == 0)
            rear = n - 1;
        else
            rear--;
    }
};

int main()
{
    Dequeue d(3);
    // Functions
}