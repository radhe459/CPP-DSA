#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int> &arr, int l, int h)
{
    int target = arr[h];
    int swapind = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < target)
        {
            swapind++;
            swap(arr[swapind], arr[j]);
        }
    }
    swap(arr[swapind + 1], arr[h]);
    return swapind + 1;
}

void quicksort(vector<int> &arr, int l, int h)
{
    if (l < h)
    {
        int ind = pivot(arr, l, h);
        quicksort(arr, l, ind - 1);
        quicksort(arr, ind + 1, h);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    quicksort(v, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}