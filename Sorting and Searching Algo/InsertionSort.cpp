#include <iostream>
using namespace std;

void insertion(int arr[], int n)
{
    int target = 0;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        target = arr[i];
        while (j >= 0 && arr[j] > target)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        swap(arr[j + 1], target);
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