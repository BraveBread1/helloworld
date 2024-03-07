#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int dp[n + 1];
    if(n == 1) 
    {
        cout << "0" << endl;
        return 0;
    }
    else if(n == 2) {
        cout << "1";
        return 0;
    }
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3; i <= n; ++i)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n];
    return 0;
}