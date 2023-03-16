#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insertf(Node **head, int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = *head;
    *head = newnode;
}

void insertl(Node **head, int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

int cal_size(Node **head)
{
    Node *temp = *head;
    int t = 0;
    while (temp->next != NULL)
    {
        temp = temp->next;
        t++;
    }
    return t + 1;
}
void insertp(Node **head, int pos, int data)
{
    int size = cal_size(head);
    if (pos < 1 && size < pos)
    {
        cout << "Invalid position";
    }
    Node *newnode = new Node();
    newnode->data = data;
    Node *temp = *head;
    while (--pos)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void disp(Node **head)
{
    Node *temp = *head;
    while (temp->next != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}

int main()
{
    Node *head = NULL;
    cout << "start insertion" << endl;
    insertf(&head, 7);
    insertf(&head, 8);
    insertf(&head, 9);
    disp(&head);
    cout << "End insertion" << endl;
    insertl(&head, 15);
    insertl(&head, 19);
    insertl(&head, 21);
    disp(&head);
    cout << "position insertion" << endl;
    insertp(&head, 2, 100);
    insertp(&head, 4, 200);
    insertp(&head, 5, 300);
    disp(&head);
    cout << "size of linked list: " << cal_size(&head);
}
