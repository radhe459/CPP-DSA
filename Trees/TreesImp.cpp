#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        right = left = NULL;
    }
};

void preorder(struct Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main()
{
    struct Node *root = new Node(5);
    root->left = new Node(10);
    root->left->left = new Node(15);
    root->left->right = new Node(20);
    root->right = new Node(18);
    cout << "PreOrder" << endl;
    preorder(root);
    cout << endl;
    cout << "PostOrder" << endl;
    postorder(root);
    cout << endl;
    cout << "Inorder" << endl;
    inorder(root);
}