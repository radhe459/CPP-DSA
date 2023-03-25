//MEMOIZATION

#include <bits/stdc++.h>
using namespace std;

int fibo(vector<int> &dp, int n)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fibo(dp, n - 1) + fibo(dp, n - 2);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << fibo(dp, n);
}