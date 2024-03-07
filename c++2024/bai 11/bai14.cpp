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
    int x, y; cin >> x >> y;
    for(int i = 0; i < n; ++i)
    {
        int tmp = a[i][x - 1];
        a[i][x - 1] = a[i][y - 1];
        a[i][y - 1] = tmp;
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}