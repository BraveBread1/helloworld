#include<iostream>

using namespace std;

int cnt(int n)
{
    if(n == 1) return 2;
    if(n == 2) return 3;
    int dp[n + 1];
    dp[1] = 2;
    dp[2] = 3;
    for(int i = 3; i <= n; ++i)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    int n; cin >> n;
    cout << cnt(n);
    return 0;
}