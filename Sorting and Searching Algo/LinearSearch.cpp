#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << "index " << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}