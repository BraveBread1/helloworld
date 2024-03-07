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

int main()
{
    int t; cin >> t;
    for(t; t > 0; --t)
    {
        long long n; cin >> n;
        long long i = 2;
        if(prime(n)) 
        {
            cout << "NO" << endl;
            continue;
        }
        while(n % i != 0)
        {
            ++i;
        }
        if(prime(n / i) && n / i != i)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}