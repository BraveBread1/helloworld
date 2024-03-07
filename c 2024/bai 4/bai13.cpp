#include<iostream>

using namespace std;

int main()
{
    long long max = 1000001;
    short h[max];
    h[0] = 0;
    for(long long i = 2; i < max; ++i)
    {
        for(long long j = i; j < max; j += i)
        {
            ++h[j];
        }
    }
    int q; cin >> q;
    for(q; q > 0; --q)
    {
        long long a, b; cin >> a >> b;
        long long n = a * b;
        cout << h[n] + 1 << endl;
    }
    return 0;
}