#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && arr[i] == arr[i + 1])
            count++;
        else
        {
            cout << arr[i] << " " << count << endl;
            count = 1;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    frequency(arr, n);
    return 0;
}
