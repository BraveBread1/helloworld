#include<iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for(t; t > 0; --t)
    {
        int n; cin >> n;
        int a[n];
        int cnt = 0;
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
            ++cnt;
            if(cnt == a[i])
            {
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
}