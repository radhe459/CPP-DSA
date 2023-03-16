#include <iostream>
using namespace std;

void frequency(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            continue;
        for (int k = 0; k < n; k++)
        {
            if (arr[i] == arr[k])
                count++;
        }
        cout << arr[i] << "  " << count << endl;
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
    frequency(arr, n);
}
