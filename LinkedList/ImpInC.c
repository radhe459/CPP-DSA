#include <stdio.h>
#include <stdlib.h>

struct ll
{
    int data;
    struct ll *next;
};

void insertF(struct ll **head, int data)
{
    struct ll *newnode = (struct ll *)malloc(sizeof(struct ll));
    newnode->data = data;
    newnode->next = *head;
    *head = newnode;
}

void insertL(struct ll **head, int data)
{
    struct ll *newnode = (struct ll *)malloc(sizeof(struct ll));
    newnode->data = data;
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    struct ll *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newnode;
}

void display(struct ll **head)
{
    struct ll *temp = *head;
    while (temp->next != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}

int cal_size(struct ll **head)
{
    struct ll *temp = *head;
    int t = 0;
    while (temp->next != NULL)
    {
        t++;
        temp = temp->next;
    }
    return t + 1;
}
void insertm(struct ll **head, int pos, int data)
{
    int size = cal_size(head);
    if (pos < 1 || size < pos)
    {
        printf("invalid position\n");
        return;
    }
    struct ll *newnode = (struct ll *)malloc(sizeof(struct ll));
    newnode->data = data;
    newnode->next = NULL;
    struct ll *temp = *head;
    while (--pos)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

int main()
{
    struct ll *head = NULL;
    insertF(&head, 5);
    insertF(&head, 5);
    insertF(&head, 5);
    insertL(&head, 10);
    insertL(&head, 10);
    insertL(&head, 10);
    insertL(&head, 10);
    insertL(&head, 10);
    display(&head);
    insertm(&head, 3, 15);
    insertm(&head, 4, 16);
    insertm(&head, 10, 15);
    display(&head);
    printf("%d\n", cal_size(&head));
}