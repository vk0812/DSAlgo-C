#include <iostream>
using namespace std;

// Doubly Linked Lists
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

int getLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    cout << "Length of Linked List - " << getLength(head) << endl;
    printLL(head);
    InsertAtHead(head, 5);
    InsertAtHead(head, 2);
    cout << "Length of Linked List - " << getLength(head) << endl;
    printLL(head);
    InsertAtTail(tail, 15);
    InsertAtTail(tail, 20);
    cout << "Length of Linked List - " << getLength(head) << endl;
    printLL(head);
    cout << head->data << endl;
    cout << tail->data << endl;
}