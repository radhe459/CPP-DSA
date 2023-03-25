#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        next = NULL;
    }
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class CircularLL
{
public:
    Node *head;
    CircularLL()
    {
        head = NULL;
    }

    void insertF(int val);
    void insertL(int val);
    void insertPos(int pos, int val);
    void deleteF();
    void deleteL();
    void deletePos(int pos);
    void disp();
    int get(int ind);
};

void CircularLL::insertF(int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        head->next = head;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    head = newnode;
}
void CircularLL::insertL(int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        head->next = head;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
}

void CircularLL::disp()
{
    Node *temp = head;
    cout << temp->data << " ";
    temp = temp->next;
    while (temp != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    cout << "start" << endl;
    CircularLL cllist;
    cllist.insertF(5);
    cllist.insertF(6);
    cllist.insertF(7);
    cllist.insertL(9);
    cllist.insertL(10);
    cllist.disp();
}
