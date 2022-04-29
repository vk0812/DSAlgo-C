#include <iostream>
using namespace std;

class Stack
{
public:
    int top;
    int size;
    int *arr;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (top == size - 1)
        {
            cout << "Stack OverFlow" << endl;
        }
        else
        {
            top++;
            arr[top] = element;
        }
    }
    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "Stack UnderFlow" << endl;
    }
    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }
    bool empty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack s(4);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5); // Stack OverFlow here
    cout << "Top - " << s.peek() << endl;
    s.pop();
    s.push(5);
    cout << "Top - " << s.peek() << endl;
}