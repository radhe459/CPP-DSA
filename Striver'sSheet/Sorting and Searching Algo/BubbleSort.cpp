#include <iostream>
using namespace std;

void bubble(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                k = 1;
            }
        }
        if (k == 0)
            break;
    }
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
    bubble(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}