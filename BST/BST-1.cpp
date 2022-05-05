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

Node *insertinBST(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data < root->data)
        root->left = insertinBST(root->left, data);
    else if (data > root->data)
        root->right = insertinBST(root->right, data);
    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
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

void takeInput(Node *&root)
{
    int data;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        root = insertinBST(root, data);
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter data into BST" << endl;
    takeInput(root);
    levelOrderTraversal(root);
}