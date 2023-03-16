#include <iostream>
#include <limits.h>

using namespace std;

class Queue
{
private:
    int front, rear, currsize, maxsize;
    int *array;

public:
    Queue(int size)
    {
        front = 0;
        maxsize = size;
        rear = size - 1;
        currsize = 0;
        array = new int[size];
    }
    void enqueue(int n);
    int dequeue();
    bool isfull();
    bool isempty();
    void display();
};

bool Queue::isfull()
{
    if (currsize == maxsize)
        cout << "queue is full" << endl;
    return currsize == maxsize;
}

bool Queue::isempty()
{
    if (currsize == 0)
        cout << "Queue is empty" << endl;
    return currsize == 0;
}

void Queue::enqueue(int n)
{
    if (isfull())
    {
        return;
    }
    else
    {
        rear = (rear + 1) % maxsize;
        array[rear] = n;
        currsize++;
        cout << "Enqueued successfully" << endl;
    }
}

int Queue::dequeue()
{
    if (isempty())
    {
        return INT_MIN;
    }
    else
    {
        int item = array[front];
        front = (front + 1) % maxsize;
        currsize--;
        return item;
    }
}

void Queue::display()
{
    int i = front, j;
    for (j = 0; j < currsize; j++)
    {
        cout << array[(i + j) % maxsize] << " ";
    }
}

int main()
{
    Queue queue = Queue(5);
    queue.enqueue(5);
    queue.enqueue(4);
    queue.enqueue(4);
    queue.enqueue(4);
    queue.enqueue(4);
    queue.dequeue();
    queue.enqueue(6);
    queue.enqueue(6);
    queue.display();
}
