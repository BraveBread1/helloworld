#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int m; cin >> m;
    int a[n][n];
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < n; ++i)
    {
        sum1 += a[i][i];
        sum2 += a[i][n - 1 - i];
    }
    cout << sum1 << endl << sum2;
    return 0;
}