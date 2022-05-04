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

void inorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1
    cout << "Inorder Traversal" << endl;
    inorderTraversal(root);
    cout << endl;
    cout << "Preorder Traversal" << endl;
    preorderTraversal(root);
    cout << endl;
    cout << "Postorder Traversal" << endl;
    postorderTraversal(root);
    cout << endl;
}