#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> Unionof(vector<int> &v1, vector<int> &v2, int n, int m)
{
    map<int, int> freq;
    vector<int> Union;
    for (int i = 0; i < n; i++)
    {
        freq[v1[i]++];
    }
    for (int j = 0; j < m; j++)
    {
        freq[v2[j]]++;
    }
    for (auto &it : freq)
    {
        Union.push_back(it.first);
    }
    return Union;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> v2[j];
    }
    vector<int> Union = Unionof(v1, v2, n, m);
    for (auto &it : Union)
        cout << it << " ";
}