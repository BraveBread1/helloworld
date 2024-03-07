#include<iostream>
#include<cmath>

using namespace std;

const int mod = 10000007;

long long binh(long long a)
{
    return (a * a) % mod;
}

long long mu(long long a, long long b)
{
    if(b == 0) return 1;
    if(b % 2 == 0)
    {
        return binh(mu(a, b / 2));
    }
    else {
        return (binh(mu(a, b / 2)) * a) % mod;
    }
}

int main()
{
    int n, k; cin >> n >> k;
    while(n != 0 && k != 0)
    {
        long long a, b, c, d;
        a = mu(n, k);
        b = mu(n - 1, k);
        c = mu(n,  n);
        d = mu(n - 1, n - 1);
        long long result = a + 2 * b + c + 2 * d;
        result %= mod;
        cout << result << endl;
        cin >> n >> k;
    }
    return 0;
}