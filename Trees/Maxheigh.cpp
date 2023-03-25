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

int maxheight(struct Node *root)
{
    if (root == NULL)
        return 0;

    int lheight = maxheight(root->left);
    int rheight = maxheight(root->right);
    return max(lheight + 1, rheight + 1);
}

void posEle(struct Node *root, int pos)
{
    if (root == NULL)
        return;
    if (pos == 0)
        cout << root->data << " ";
    posEle(root->left, pos - 1);
    posEle(root->right, pos - 1);
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

    cout << "\n\nElements at position k: ";
    posEle(root, 2);

    cout << "\n\nMaxheight of tree: " << maxheight(root);
}