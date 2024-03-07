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
        int sum = 0;
        for(int i = 1; i <= n; ++i) 
        {
            cin >> a[i];
            sum += a[i];
        }
        sum /= n;
        int sub = 0;
        bool cs = true;
        for(int i = n; i >= 1; --i)
        {
            sub += a[i];
            if(sub > sum * (n - i + 1))
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