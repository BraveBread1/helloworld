#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    long long n; cin >> n;
    map<long long, long long> m;
    long long M, sum;
    for(long long i = 0; i < n; ++i)
    {
        long long x, y; cin >> x >> y;
        m.insert({y, x});
        M += x;
        sum += x * y;
    }
    double avr = 1.0 * sum / M;
    for(int i = )
}