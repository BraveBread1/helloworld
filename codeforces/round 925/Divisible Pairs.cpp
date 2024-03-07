#include<iostream>

using namespace std;

int toHop(int k, int n)
{
    int result = 1;
    for(int i = 1; i <= k; ++i)
    {
        result *= (n - k + i);
        result /= i;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    int n, x, y;
    for(t; t > 0; --t)
    {
        cin >> n >> x >> y;
        if(x > y)
        {
            int cntx[x];
            for(int i = 0; i < x; ++i) cntx[i] = 0;
            int du;
            for(int i = 0; i < n; ++i) 
            {
                int g; cin >> g;
                du = g % x;
                ++cntx[du];
            }
            int cnt = 0;
            int half;
            cnt += toHop(2, cntx[0]);
            if(x % 2 == 0)
            {
                cnt += toHop(2, cntx[x / 2]);
                half = x / 2 - 1;
            }
            else half = x / 2;
            for(int i = 1; i <= half; ++i)
            {
                if((x - i + x) % y == (i + x) % y)
                {
                    cnt += cntx[i] * cntx[x - i];
                }
            }
            cout << cnt << endl;
        }
        else {
            int cnty[y];
            for(int i = 0; i < y; ++i) cnty[i] = 0;
            int du;
            for(int i = 0; i < n; ++i)
            {
                int g; cin >> g;
                du = g % y;
                ++cnty[du];
            }
            int cnt = 0; int half;
            for(int i = 0; i < y; ++i)
            {
                if(i % x)
            }

        }
    }
    return 0;
}