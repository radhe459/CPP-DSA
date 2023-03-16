#include <iostream>
using namespace std;

void insertion(int arr[], int n)
{
    int i, j, target;
    for (int i = 1; i < n; i++)
    {
        target = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > target)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = target;
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
    insertion(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}