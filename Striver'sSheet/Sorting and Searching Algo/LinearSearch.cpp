#include <iostream>
using namespace std;
int linear(int *arr, int n, int i, int k)
{
    if (i == n)
        return -1;
    if (arr[i] == k)
    {
        return i;
    }
    i += 1;
    return linear(arr, n, i, k);
}

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
    cout << "index  " << linear(arr, n, 0, k);
}