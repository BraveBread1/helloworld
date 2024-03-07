#include<iostream>

using namespace std;

int main()
{
    long long n, x; cin >> n >> x;
    long long a[n];
    for(long long i = 0; i < n; ++i) cin >> a[i];
    long long cnt = 0;
    for(long long i = 0; i < n; ++i)
    {
        long long j = i + 1;
        long long sum = a[i];
        while(j < n && sum < x)
        {
            sum += a[j];
            ++j;
        }
        if(sum == x) ++cnt;
    }
    cout << cnt;
    return 0;
}