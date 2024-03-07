#include<iostream>
#include<map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int i = 0;
    int j = 1;
    while(j < n && a[i] == a[j])
    {
        ++i;
        ++j;
    }
    if(j == n) {
        cout << "1";
        return 0;
    }
    int max = 1;
    int len = 1;
    map<int, bool> m;
    m[a[i]] = true;
    while(j < n)
    {
        if(m[a[j]])
        {
            if(i == j - 1)
            {
                while(j < n && a[i] == a[j])
                {
                    ++i;
                    ++j;
                }
            }
            else{
                while(a[i] != a[j])
                {
                    m[a[i]] = false;
                    ++i;
                    --len;
                }
                ++i;
                ++j;
            }
        }
        else
        {
            m[a[j]] = true;
            ++j;
            ++len;
        }
        if(len > max) max = len;
    }
    cout << max;
    return 0;
}