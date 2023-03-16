
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v(50000);
    for (int i = 0; i < 50000; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}