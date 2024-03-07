#include<iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    long long cnt = 1;
    for(t; t > 0; --t)
    {
        int p, e; cin >> p >> e;
        cnt = (cnt * (e + 1)) % 1000000007;
    }
    cout << cnt;
    return 0;
}