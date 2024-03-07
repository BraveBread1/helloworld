#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    bool prime[n + 1];
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i < n + 1; ++i)
    {
        prime[i] = true;
    }
    for(int i = 2; i * i < n + 1; ++i)
    {
        if(prime[i])
        {
            for(int j = i * i; j < n + 1; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for(int i = 2; i <= n; ++i)
    {
        if(prime[i]) cout << i << " ";
    }
    return 0;
}