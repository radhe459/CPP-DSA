
// Tabulation.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Tabulation unoptimized
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << "unoptimized space " << dp[n] << endl;

    // Tabulation optimized space.

    int prevs = 0, prev = 1, cur = 0;
    for (int i = 2; i <= n; i++)
    {
        cur = prev + prevs;
        prevs = prev;
        prev = cur;
    }
    cout << "optimized space " << cur << endl;
}