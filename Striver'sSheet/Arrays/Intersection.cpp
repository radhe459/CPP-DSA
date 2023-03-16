#include <iostream>
#include <vector>
using namespace std;

void Intersection(int a[], int b[], int n, int m)
{
    vector<int> v;
    vector<int> visited(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] && visited[j] == 0)
            {
                v.push_back(a[i]);
                visited[j] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < m; j++)
        cin >> b[j];
    Intersection(a, b, n, m);
    return 0;
}