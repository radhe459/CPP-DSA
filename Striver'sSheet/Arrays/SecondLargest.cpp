#include <iostream>
#include <limits.h>
using namespace std;

int secLargest(int arr[], int n)
{
    int seclar = INT_MIN, large = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            seclar = large;
            large = arr[i];
        }
        else if (arr[i] < large && arr[i] > seclar)
        {
            seclar = arr[i];
        }
    }
    return seclar;
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
    cout << secLargest(arr, n);
}