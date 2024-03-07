#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    for(t; t > 0; --t)
    {
        int n; cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; ++i) cin >> a[i];
        if(n == 1) cout << 0 << endl;
        else if(a[1] != a[n])
        {
            int i = 2;
            int cnt1 = 1;
            while(i <= n && a[i] == a[1])
            {
                ++i;
                ++cnt1;
            }
            i = n - 1;
            int cnt2 = 1;
            while(i >= 1&& a[i] == a[n])
            {
                --i;
                ++cnt2;
            }
            if(cnt1 > cnt2) cout << n - cnt1 << endl;
            else cout << n - cnt2 << endl;
        }
        else 
        {
            int i = 2;
            int cnt = 2;
            while(i <= n && a[i] == a[1])
            {
                ++i;
                ++cnt;
            }
            i = n - 1;
            while(i >= 1 && a[i] == a[1])
            {
                --i;
                ++cnt;
            }
            if(cnt >= n) cout << "0" << endl;
            else cout << n - cnt << endl;
        }
    }
    return 0;
}