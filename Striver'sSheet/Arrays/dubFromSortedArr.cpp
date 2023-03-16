#include <iostream>
using namespace std;

int dupsort(int arr[], int n)
{
    int i = 1;
    for (int j = 0; j < n - 1; j++)
    {
        while (arr[j] == arr[j + 1])
            j++;
        // j -= 1;
        // cout << i << " " << j << endl;
        arr[i++] = arr[j + 1];
    }
    // cout << i << endl;
    return i;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k = dupsort(arr, n);

    for (int j = 0; j < k; j++)
        cout << arr[j] << " ";
}