#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        next = NULL;
        prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Doublell
{
    Node *head;

public:
    Doublell()
    {
        head = NULL;
    }

    void insertf(int data);
    void insertl(int data);
    void disp();
    void deleteVal(int val);
    void deletePos(int pos);
};

void Doublell::insertf(int data)
{
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void Doublell::insertl(int data)
{
    Node *newnode = new Node(data);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = NULL;
}

void Doublell::deleteVal(int val)
{
    if (head == NULL)
    {
        cout << "list is empty";
        return;
    }
    if (head->next == NULL)
    {
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == val)
            break;
        temp = temp->next;
    }
    if (temp->data == val)
    {
        temp->prev->next = temp->next;
        (temp->next)->prev = temp->prev;
    }
}

void Doublell::disp()
{
    Node *temp = head;
    cout << "Forward display" << endl;
    while (temp->next)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;
    cout << endl
         << "Backward display" << endl;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    free(temp);
}

int main()
{
    Doublell list;
    list.insertf(5);
    list.insertf(5);
    list.insertf(5);
    list.insertf(5);
    list.insertl(8);
    list.insertl(10);
    list.insertl(15);
    list.deleteVal(8);
    list.disp();
    // list.insertl(7);
}