#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    vector<int> vect;
    void push(int n)
    {
        vect.push_back(n);
        cout << "pushed element " << vect.back() << endl;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            ;
            return;
        }
        int temp = vect.back();
        vect.pop_back();
        cout << "deleted element " << temp << endl;
    }
    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Element at top " << vect.back() << endl;
    }
    void size()
    {
        cout << "size of Stack " << vect.size() << endl;
    }
    bool isEmpty()
    {
        if (vect.empty())
            return true;
        else
            return false;
    }
};

int main()
{
    class Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(34);
    s.pop();
    cout << s.isEmpty();
    s.peek();
    s.size();
}