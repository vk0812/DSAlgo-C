#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *temp)
{
    cout << "Enter data:" << endl;
    int data;
    cin >> data;
    temp = new Node(data);
    if (data == -1)
        return NULL;
    cout << "Enter data to the left of " << data << endl;
    temp->left = buildTree(temp->left);
    cout << "Enter data to the right of " << data << endl;
    temp->right = buildTree(temp->right);
    return temp;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // acts as seperator between levels

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL) // if seperator found go to next line
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

void buildfromLevelOrderTraversal(Node *&root)
{
    queue<Node *> q;
    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter data on left of " << temp->data << endl;
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }
        cout << "Enter data on right of " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = NULL;
    // root = buildTree(root);
    buildfromLevelOrderTraversal(root);
    cout << "Printing" << endl;
    levelOrderTraversal(root);
}