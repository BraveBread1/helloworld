#include<iostream>

using namespace std;

bool prime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i * i <= n; ++i)
    {
        if(n % i == 0) return false;
    }
    return true;
}

bool fibo(int n)
{
    int b1 = 1, b2 = 1;
    int b = b1 + b2;
    while(b < n)
    {
        b1 = b2;
        b2 = b;
        b = b1 + b2;
    }
    if(b == n) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    if(fibo(n) && prime(n))
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }
    return 0;
}