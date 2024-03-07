#include<iostream>
#include<cmath>

using namespace std;

int digit(int n)
{
    int cnt = 0;
    while(n > 0)
    {
        ++cnt;
        n /= 10;
    }
    return cnt;
}

bool automorphic(long long n)
{
    int cs = digit(n);
    long long a = n * n;
    return n == a % (long long)pow(10, cs);
}

int main()
{
    int n; cin >> n;
    if(automorphic(n))
    {
        cout << "Automorphic";
    }
    else cout << "Not Automorphic";
    return 0;
}