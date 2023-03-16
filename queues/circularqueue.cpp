#include <iostream>
#include <limits.h>
using namespace std;

class Queue
{
public:
    int front, rear, maxsize = 0;
    int *a;

    Queue(int size)
    {
        front = -1;
        rear = -1;
        maxsize = size;
        a = new int[size];
    }

    void enqueue(int n);
    int dequeue();
    bool full();
    bool empty();
    void display();
};

bool Queue::full()
{
    if (rear + 1 == front || front == 0 && rear == maxsize - 1)
        return true;
    return false;
}
bool Queue::empty()
{
    if (front == -1)
        return true;
    return false;
}

void Queue::enqueue(int n)
{
    if (full())
    {
        cout << "Queue is full" << endl;
        return;
    }
    if (rear == -1 && front == -1)
        front = 0;
    rear = (rear + 1) % maxsize;
    a[rear] = n;
    cout << "pushed successfully" << endl;
}

int Queue::dequeue()
{
    if (empty())
    {
        cout << "Queue is empty" << endl;
        return INT_MIN;
    }
    int item = a[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % maxsize;
    }
    return item;
}

void Queue::display()
{
    int i;
    for (i = front; i != rear; i = (i + 1) % maxsize)
        cout << a[i] << " ";
    cout << a[i];
}

int main()
{
    Queue q = Queue(6);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(4);
    q.enqueue(8);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    q.empty();
    q.full();
    q.display();
}