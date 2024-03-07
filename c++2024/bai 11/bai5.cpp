#include<iostream>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n][m];
    int max[n];
    for(int i = 0; i < n; ++i)
    {
        int x = 1000;
        int index;
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
            if(a[i][j] < x) 
            {
                x = a[i][j];
                index = j;
            }
        }
        max[i] = index;
    }
    bool check = true;
    for(int i = 0; i < n; ++i)
    {
        int index = max[i];
        bool cs = true;
        for(int j = 0; j < n; ++j)
        {
            if(a[j][index] > a[i][index])
            {
                cs = false;
                break;
            }
        }
        if(cs)
        {
            cout << i + 1 << " " << index + 1 << endl;
            check = false;
        }
    }
    if(check) cout << "-1";
    return 0;
}