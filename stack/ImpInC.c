#include <stdio.h>
#include <limits.h>

struct Stack
{
    int top;
    int maxsize;
    int *array;
};

struct Stack *create(int max)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->maxsize = max;
    stack->top = -1;
    stack->array = (int *)malloc(stack->maxsize * sizeof(int));
}
int isEmpty(struct Stack *s)
{
    if (s->top == -1)
        printf("cannot peek or pop stack is empty\n");
    return s->top == -1;
}

void push(struct Stack *s, int n)
{
    if (isFull(s))
        return;
    s->array[++s->top] = n;
    printf("%d is pushed in stack\n", n);
}
int isFull(struct Stack *s)
{
    if (s->top == s->maxsize - 1)
        printf("Stack is full\n");
    return s->top == s->maxsize - 1;
}

int peek(struct Stack *s)
{
    if (isEmpty(s))
        return;
    return s->array[s->top];
}

int pop(struct Stack *s)
{
    if (isEmpty(s))
        return;
    return s->array[s->top--];
}

int size(struct Stack *s)
{
    return s->top + 1;
}

int main()
{
    struct Stack *s = create(5);
    push(s, 5);
    push(s, 6);
    push(s, 8);
    push(s, 9);
    push(s, 9);
    push(s, 10);
    printf("peeked top element %d\n", peek(s));
    printf("popped element %d\n", pop(s));
    printf("peeked top element %d\n", peek(s));
    printf("Size of stack %d\n", size(s));
}