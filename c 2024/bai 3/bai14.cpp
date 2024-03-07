#include<iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for(t; t > 0; --t)
    {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        int cnt = 0;
        for(int i = 0; i < k; ++i)
        {
            if(a[i] <= k) ++cnt;
        }
        cout << k - cnt << endl;
    }
    return 0;
}