#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int i, pivot = arr[h];
    int swapindex = l - 1;
    for (i = l; i < h; i++)
    {
        if (arr[i] < pivot)
        {
            swapindex++;
            swap(arr[i], arr[swapindex]);
        }
    }
    swap(arr[swapindex + 1], arr[h]);
    swapindex++;
    return swapindex;
}

void quicksort(int arr[], int l, int h)
{
    if (l < h)
    {
        int index = partition(arr, l, h);
        quicksort(arr, l, index - 1);
        quicksort(arr, index + 1, h);
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
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}