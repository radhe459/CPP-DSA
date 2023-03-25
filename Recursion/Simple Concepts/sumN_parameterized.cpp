#include <bits/stdc++.h>
using namespace std;

int sumN(int n, int sum)
{
    if (n == 0)
        return sum;
    return sumN(n - 1, sum + n);
}

int main()
{
    int n, sum = 0;
    cin >> n;
    cout << sumN(n, sum);
}