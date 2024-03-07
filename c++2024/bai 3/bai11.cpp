#include<iostream>

using namespace std;

int c(int k, int n)
{
    if(k == 0 || k == n)
    {
        return 1;
    }
    if(k == 1) return n;
    return c(k - 1, n - 1) + c(k, n - 1);
}

void can(int n)
{
    for(int i = 0; i < n; ++i)
    {
        cout << "  ";
        for(int j = 1; j < n - i; ++j)
        {
            cout << "  ";
        }
        for(int x = 0; x <= i; ++x)
        {
            cout << c(x, i) << "   ";
        }
        cout << endl;
    }
}

void vuong(int n)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j <= i; ++j)
        {
            cout << c(j, i) << "   ";
        }
        cout << endl;
    }
}

int main()
{
    int q; cin >> q;
    for(q; q > 0; --q)
    {
        int x;
        int n;
        cin >> x >> n;
        if(x == 1)
        {
            can(n);
        }
        else
        {
            vuong(n);
        }
    }
    return 0;
}