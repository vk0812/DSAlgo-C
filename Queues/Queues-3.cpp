#include <iostream>
using namespace std;

class CircularQueue
{
public:
    int n;
    int *arr;
    int front = -1, rear = -1;
    CircularQueue(int n)
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
    void push(int val)
    {
        if (isFull())
        {
            cout << "Circular Queue OverFlow" << endl;
            return;
        }

        if (front == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = val;
        }
        else if (front != 0 && rear == n - 1)
        {
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            arr[++rear] = val;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Circular Queue UnderFlow" << endl;
            return;
        }
        if (front == rear) // if single element
        {
            front = -1;
            rear = -1;
        }
        else if (front == n - 1) // if front reaches end
        {
            front = 0;
        }
        else // normal case
        {
            front++;
        }
    }
};

int main()
{
    CircularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
}