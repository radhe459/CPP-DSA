#include <iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l, temp[h - l];
    while (l <= mid && j <= h)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= h)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    int p = l;
    while (p < k)
    {
        arr[p] = temp[p];
        p++;
    }
}

void Mergesort(int arr[], int l, int h)
{
    if (l < h)
    {
        int mid = l + (h - l) / 2;
        Mergesort(arr, l, mid);
        Mergesort(arr, mid + 1, h);
        Merge(arr, l, mid, h);
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
    Mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}