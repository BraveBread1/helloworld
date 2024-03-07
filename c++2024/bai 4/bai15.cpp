#include<iostream>

using namespace std;

long long Pow(int a, int b)
{
    long long result = 1;
    for(int i = 1; i <= b; ++i)
    {
        result *= 1LL * a;
    }
    return result;
}

bool armstrong(long long n)
{
    int digit = 0;
    for(long long i = n; i > 0; i /= 10)
    {
        ++digit;
    }
    long long result = 0;
    long long i = n;
    while(i > 0)
    {
        result += Pow(i % 10, digit);
        i /= 10;
    }
    return result == n;
}

int main()
{
    long long n; cin >> n;
    if(armstrong(n))
    {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}