#include<iostream>

using namespace std;

bool check(int n)
{
    int last = n % 10;
    do
    {
        n /= 10;
        if(n % 10 > last) return false;
    }
    while(n > 0);
    return true;
}

int main()
{
    int n; cin >> n;
    bool prime[n + 1];
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i <= n; ++i) prime[i] = true;
    for(int i = 2; i * i <= n; ++i)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(prime[i] && check(i)) 
        {
            cout << i << " ";
            ++cnt;
        }
    }
    cout << endl << cnt;
    return 0;
}