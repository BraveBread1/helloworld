#include<iostream>

using namespace std;

int tongcs(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int t; cin >> t;
    bool a[100001];
    a[0] = false;
    a[1] = false;
    for(int i = 2; i < 100001; ++i) a[i] = true;
    for(int i = 2; i * i < 100001; ++i)
    {
        if(a[i])
        {
            for(int j = i * i; j < 100001; j += i)
            {
                a[j] = false;
            }
        }
    }
    for(int i = 2; i < 100001; ++i)
    {
        if(a[i])
        {
            if(tongcs(i) % 5 != 0)
            {
                a[i] = false;
            }
        }
    }
    for(t; t > 0; --t)
    {
        int l, r; cin >> l >> r;
        int cnt = 0;
        for(int i = l; i <= r; ++i)
        {
            if(a[i])
            {
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}