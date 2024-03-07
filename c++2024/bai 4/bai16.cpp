#include<iostream>
#include<cmath>

using namespace std;

int digit(long long s)
{
    int cnt = 0;
    while(s > 0)
    {
        ++cnt;
        s /= 10;
    }
    return cnt;
}

bool armstrong(long long s)
{
    long long n = s;
    long long result = 0;
    int cs = digit(s);
    while(n > 0)
    {
        result += (long long)pow(n % 10, cs);
        n /= 10;
    }
    if(result == s) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a, b;
    cin >> a >> b;
    for(long long i = a; i <= b; ++i)
    {
        long long n = i;
        long long result = 0;
        int cs = digit(s);
        while(n > 0)
        {
            result += (long long)pow(n % 10, cs);
            n /= 10;
        }
        if(result == s) return true;
        else return false;
        if(armstrong(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}