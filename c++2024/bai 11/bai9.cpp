#include<iostream>

using namespace std;

int main()
{
    int m, n, k; cin >> m >> n >> k;
    char a[m][n];
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; ++i)
    {
        for(int x = 1; x <= k; ++x)
        {
            for(int j = 0; j < n; ++j)
            {
                for(int y = 1; y <= k; ++y)
                {
                    cout << a[i][j];
                }
            }
            cout << endl;
        }
    }
    return 0;
}