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
        int n, k; cin >> n >> k;
        int a[n + 1], b[n + 1];
        for(int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        for(int i = 1; i <= n; ++i) cin >> b[i];

    }
}