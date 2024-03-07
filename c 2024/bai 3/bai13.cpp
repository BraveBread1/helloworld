#include<iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for(t; t > 0; --t)
    {
        int n, m; cin >> n >> m;
        int a[n];
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        bool cs = true;
        for(int i = 0; i < n - 1; ++i)
        {
            if(a[i + 1] > a[i])
            {
                m -= a[i + 1] - a[i];
            }
            else if(a[i + 1] < a[i])
            {
                m += a[i] - a[i + 1];
            }
            if(m < 0) 
            {
                cs = false;
                break;
            }
        }
        if(cs) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}