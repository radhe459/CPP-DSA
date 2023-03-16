#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(5);
    q.pop();
    cout << q.empty() << endl;
    cout << q.front() << endl;

    cout << q.back() << endl;
}