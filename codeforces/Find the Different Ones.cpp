#include<iostream>
#include<map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    for(t; t > 0; --t)
    {
        map<int, int> m;
        int n; cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        int begin = 1, end;
        for(int i = 0; i < n; ++i)
        {
            if(a[i] != a[begin])
            {
                end = i - 1;
                m.insert({begin, end});
                begin = i;
            }
        }
        m.insert({m.rbegin()->second, n});
        int q; cin >> q;
        int l, r;
        for(q; q > 0; --q)
        {
            cin >> l >> r;
            if(l == r) {
                cout << -1 << " " << -1 << endl;
                continue;
            }
            for(map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
            {
                if(l <= it->second)
                {
                    if(r <= it->second)
                    {
                        cout << -1 << " " << -1 << endl;
                        break;
                    }
                    else {
                        cout << it->second << " " << it->second + 1 << endl;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}