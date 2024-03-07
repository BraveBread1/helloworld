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
        int n, m, k;
        cin >> n >> m >> k;
        bool exist1[k + 1], exist2[k + 1];
        for(int i = 1; i <= k; ++i) 
        {
            exist1[i] = false;
            exist2[i] = false;
        }
        int a[n], b[m];
        int tmp;
        int cnt1 = 0, cnt2 = 0;
        for(int i = 1; i <= n; ++i) 
        {
            cin >> tmp;
            if(tmp > k) continue;
            if(!exist1[tmp])
            {
                exist1[tmp]= true;
                ++cnt1;
            }
        }
        for(int i = 1; i <= m; ++i) 
        {
            cin >> tmp;
            if(tmp > k) continue;
            if(!exist2[tmp])
            {
                exist2[tmp]= true;
                ++cnt2;
            }        
        }
        if(cnt1 < k / 2 || cnt2 < k / 2) {
            cout << "NO" << endl;
        }
        else
        {
            bool cs = true;
            for(int i = 1; i <= k; ++i)
            {
                if(!exist1[i] && !exist2[i])
                {
                    cs = false;
                    break;
                }
            }
            if(cs) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}