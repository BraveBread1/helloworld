#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i)
    {
        int max = a[i][0];
        for(int j = 0; j < n; ++j)
        {
            if(a[i][j] > max) max = a[i][j];
        }
        cout << max << endl;
    }
    return 0;
}