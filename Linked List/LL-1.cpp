#include <iostream>
using namespace std;

// Singly Linked Lists
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

void InsertAtHead(Node *&head, int d)
{
    // Creating New Node
    Node *temp = new Node(d);
    // Changing next node address of this node from NULL to address of next node
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next; // tail = temp
}

void InsertAtPosition(Node *&head, Node *&tail, int pos, int d)
{
    // inserting at first pos
    if (pos == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1; // to reach the (pos-1)th node
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at last pos
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    Node *toinsert = new Node(d);
    toinsert->next = temp->next;
    temp->next = toinsert;
}

void deleteNode(int pos, Node *&head, Node *&tail)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL; // so that deleted node's next pointer becomes NULL
        delete temp;       // free memory from heap
    }
    else
    {
        Node *prev = head;
        int count = 1;
        while (count != pos - 1)
        {
            prev = prev->next;
            count++;
        }
        Node *curr = prev->next;
        prev->next = curr->next;
        if (prev->next == NULL) // just to update tail if last element is deleted
        {
            tail = prev;
        }
        curr->next = NULL; // so that deleted node's next pointer becomes NULL
        delete curr;       // free memory from heap
    }
}

void printLL(Node *&head)
{
    Node *temp = head; // since we want no change in head
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
    cout << "Data - " << node1->data << endl;
    cout << "Address of next Node - " << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    InsertAtHead(head, 2);
    InsertAtHead(head, 5);
    InsertAtTail(tail, 20);
    InsertAtTail(tail, 30);
    InsertAtPosition(head, tail, 4, 15); // after 10 and before 20
    InsertAtPosition(head, tail, 1, 1);
    InsertAtPosition(head, tail, 8, 50);
    printLL(head);
    deleteNode(4, head, tail); // 4th pos element to be deleted
    printLL(head);
}