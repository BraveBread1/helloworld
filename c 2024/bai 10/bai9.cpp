#include<iostream>

using namespace std;

int cs(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;;
        n /= 10;
    }
    return sum;
}

int f(int n)
{
    if(n == 1) return -1;
    if(cs(n) % 2 == 0) return n + f(n - 1);
    else return -n + f(n - 1);
}

int main()
{
    int n; cin >> n;
    cout << f(n);
    return 0;
}