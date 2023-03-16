#include <stdio.h>
#include <stdlib.h>

#define size 20

int Stack[size], top = -1;

int main()
{
    while (1)
    {
        printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        printf("Enter your choice(1-5):\n");
        int ch, n;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter number: ");
            scanf("%d", &n);
            push(Stack, n);
            break;
        case 2:
            pop(Stack);
            break;
        case 3:
            peek(Stack);
            break;
        case 4:
            display(Stack);
            break;
        case 5:
            exit(0);
        default:
            printf("please choose correct option\n");
            break;
        }
    }
}

void push(int Stack[], int n)
{
    if (top == size - 1)
    {
        printf("Stack is full\n");
        return;
    }
    Stack[++top] = n;
}

void pop(int Stack[])
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    int del = Stack[top];
    top--;
    printf("Element deleted is %d\n", del);
}

void peek(int Stack[])
{
    printf("Element at top is %d\n", Stack[top]);
}

// Not present in stack but for clear understanding
void display(int Stack[])
{
    for (int i = top; i > -1; i--)
    {
        printf("%d ", Stack[i]);
    }
}