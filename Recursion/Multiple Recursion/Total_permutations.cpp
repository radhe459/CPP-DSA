#include <bits/stdc++.h>

using namespace std;

void permutations(int i, int n, vector<int> permu, vector<int> v)
{
    if (i == n)
    {
        for (int i = 0; i < permu.size(); i++)
            cout << permu[i] << " ";
        cout << endl;
        return;
    }
    permu.push_back(v[i]);
    permutations(i + 1, n, permu, v);
    permu.pop_back();
    permutations(i + 1, n, permu, v);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> permu;
    permutations(0, n, permu, v);
}