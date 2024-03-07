#include<iostream>

using namespace std;

int main()
{
    long long n; cin >> n;
    long long sum = n / 2;
    long long x = n / 4;
    long long max = 0;
    long long x1 = x, y1 = sum - x;
    for(long long i = 1; i <= 4; ++i)
    {
        long long y = sum - x;
        long long S = x * y;
        if(S > max)
        {
            max = S;
            x1 = x;
            y1 = y;
        }
        ++x;
    }
    cout << x1 << " " << y1;
    return 0;
}