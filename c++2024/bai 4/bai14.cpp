#include<iostream>

using namespace std;

bool prime(long long n)
{
    if(n < 2) return false;
    for(long long i = 2; i * i <= n; ++i)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int countFibo(long long a, long long b)
{
    long long f1 = 0, f2 = 1;
    long long fibo = f1 + f2;
    int cnt = 0;
    while(fibo <= b)
    {
        if(fibo >= a && prime(fibo))
        {
            ++cnt;
        }
        f1 = f2;
        f2 = fibo;
        fibo = f1 + f2;
    }
    return cnt;
}

int main()
{
    long long a, b; cin >> a >> b;
    cout << countFibo(a, b);
    return 0;
}