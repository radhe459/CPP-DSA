#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int top;
    int max;
    int *a;

public:
    Stack(int size)
    {
        top = -1;
        max = size;
        a = new int[max];
    }

    void push(int x);
    int pop();
    int peek();
    bool isempty();
    bool isfull();
};

int main()
{
    Stack s(5);
    Stack ss(4);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(0);
    s.isempty();
    ss.isempty();
    s.pop();
}

void Stack::push(int x)
{
    if (isfull())
    {
        return;
    }
    else
    {
        a[++top] = x;
        cout << a[top] << " is inserted in stack" << endl;
    }
}

int Stack::pop()
{
    if (isempty())
    {
        return INT_MIN;
    }
    return a[top--];
}

int Stack::peek()
{
    if (isempty())
    {
        return INT_MIN;
    }
    return a[top];
}

bool Stack::isfull()
{
    if (top >= max - 1)
    {
        cout << "stack is full" << endl;
        return true;
    }
    return false;
}

bool Stack::isempty()
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
        return false;
    }
}