#include<iostream>

using namespace std;

long long Pow(long long a, int b)
{
    long long result = 1;
    for(int i = 1; i <= b; ++i)
    {
        result *= a;
    }
    return result;
}

int main()
{
    int n, p; cin >> n >> p;
    int exp = 1;
    int lt = Pow(p, exp);
    int max;
    int result = 0;
    while(lt <= n)
    {
        max = n - n % lt;
        int b = max / lt;
        result += b;
        ++exp;
        lt = Pow(p, exp);
    }
    cout << result;
    return 0;
}