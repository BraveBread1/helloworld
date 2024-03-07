#include<iostream>

using namespace std;

long long Pow(long long a, long long n, long long m)
{
    if(n == 1) return a % m;
    return (a * Pow(a, n - 1, m)) % m;
}

int main()
{
    long long a, n, m;
    cin >> a >> n >> m;
    cout << Pow(a, n, m);
    return 0;
}