#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n], ar[m];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < m; i++)
        cin >> ar[i];
    int i = 0, j = 0;
    vector<int> v;
    for (int j = 0; j < m; j++)
    {
        if (arr[i] < ar[j])
        {
            i++;
        }
        else if (ar[j] < arr[i])
            j++;
        else
        {
            v.push_back(arr[i]);
            i++;
            j++;
        }
    }
    for (int k = 0; k < v.size(); k++)
    {
        cout << v[k] << " ";
    }
}