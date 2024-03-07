#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n + 1][n + 1];
    bool check = true;
    for(int i = 1; i <= n; ++i)
    {
        bool cs = true;
        for(int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] >= 0) cs = false;
        }
        if(cs) 
        {
            cout << i << " ";
            check = false;
        }
    }
    if(check) cout << "-1";
    return 0;
}