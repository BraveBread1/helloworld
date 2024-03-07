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
    int q; cin >> q;
    for(q; q > 0; --q)
    {
        int a, m, b, n;
        cin >> a >> m >> b >> n;
        cout << toHop(a, m) - toHop(b, n) << endl;
    }
    return 0;
}