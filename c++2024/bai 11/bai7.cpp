#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n][m];
    vector<int> v;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j) 
        {
            cin >> a[i][j];
            v.push_back(a[i][j]);
        }
    }
    sort(v.begin(), v.end());
    int x = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            a[i][j] = v[x];
            ++x;
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}