#include<iostream>

using namespace std;

long long ucln(long long a, long long b)
{
    while(b != 0)
    {
        long long tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{
    long long a, b; cin >> a >> b;
    cout << ucln(a, b);
    return 0;
}