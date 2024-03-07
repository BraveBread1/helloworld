#include<iostream>

using namespace std;

int main()
{
    int m, n; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int j = 0; j < m; ++j) cin >> b[j];
    int c[n + m];
    int i = 0, j = 0, k = 0;
    while(i < n && j < m)
    {
        while(a[i] <= b[j] && i < n)
        {
            c[k] = a[i];
            ++k;
            ++i;
        }
        while(a[i] >= b[j] && j < m)
        {
            c[k] = b[j];
            ++k;
            ++j;
        }
    }
    while(i < n)
    {
        c[k] = a[i];
        ++k;
        ++i;
    }
    while(j < m)
    {
        c[k] = b[j];
        ++k;
        ++j;  
    }
    for(int x = 0; x < m + n; ++x)
    {
        cout << c[x] << " ";
    }
    return 0;
}