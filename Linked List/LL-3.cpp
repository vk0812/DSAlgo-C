#include <iostream>
using namespace std;

// Circular Linked List
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertNode(Node *&tail, int element, int d)
{
    if (tail == NULL) // if empty list
    {
        Node *temp = new Node(d);
        temp->next = temp;
        tail = temp;
    }
    else // non empty list
    {
        // ASSUMING element present in the list
        Node *prev = tail;
        Node *temp = new Node(d);
        while (prev->data != element)
        {
            prev = prev->next;
        }
        temp->next = prev->next;
        prev->next = temp;
    }
}

void printLL(Node *tail)
{
    Node *temp = tail;
    cout << tail->data << " "; // to account for single element case
    // can also be done using do while loop
    while (temp->next != tail)
    {
        temp = temp->next;
        cout << temp->data << " ";
    }
    cout << endl;
}

int main()
{
    Node *tail = NULL;
    InsertNode(tail, 1, 10); // empty list case
    InsertNode(tail, 10, 20);
    InsertNode(tail, 10, 15);
    printLL(tail);
}