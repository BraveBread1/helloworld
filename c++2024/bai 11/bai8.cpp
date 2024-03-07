#include<iostream>

using namespace std;

int main()
{
    int n, m, k; cin >> n >> m >> k;
    int a[n + 1][m + 1];
    for(int i = 0; i <= n; ++i) a[i][0] = 0;
    for(int j = 0; j <= m; ++j) a[0][j] = 0;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j) cin >> a[i][j];
    }
    int max = 0;
    int sum = 0;
    for(int i = 0; i < k; ++i)
    {
        for(int j = 0; j < k; ++j) sum += a[i][j];
    }
    for(int i = 1; i <= n - k + 1; ++i)
    {
        for(int j = 0; j <= k - 1; ++j) 
        {
            sum -=a[i - 1][j];
            sum += a[i + k - 1][j];
        }
        int tmpsum = sum;
        for(int j = 1; j <= m - k + 1; ++j)
        {
            for(int x = i; x <= i + k - 1; ++x)
            {
                tmpsum = tmpsum - a[x][j - 1] + a[x][j + k - 1];
            }
            if(tmpsum > max) max = tmpsum;
        }
    }
    cout << max;
    return 0;
}