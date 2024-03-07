#include<iostream>

using namespace std;

const long long mod = 1000000007;

long long cs(long long n)
{
    long long sum = 0;
    while(n > 0)
    {
        sum += n % 10;;
        n /= 10;
    }
    return sum;
}

long long fac(long long n)
{
    if(n == 1) return 1;
    if(cs(n) % 2 == 0) return (n * fac(n - 1)) % mod;
    else return fac(n - 1);
}

int main()
{
    long long n; cin >> n;
    cout << fac(n);
    return 0;
}