#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Linkedlist
{
private:
    Node *head;

public:
    Linkedlist()
    {
        head = NULL;
    }
    int cal_size();
    void insertf(int data);
    void insertl(int data);
    void insertp(int pos, int data);
    void disp();
};

void Linkedlist::insertf(int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void Linkedlist::disp()
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}

int main()
{
    Linkedlist *list = new Linkedlist();
    list->insertf(6);
    list->insertf(8);
    list->insertf(9);
    list->disp();
}