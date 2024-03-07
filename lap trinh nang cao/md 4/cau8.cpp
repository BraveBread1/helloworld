#include<iostream>

using namespace std;

int main()
{
    long long n; cin >> n;
    int cnt = 0;
    do
    {
        ++cnt;
        n /= 10;
    }
    while(n != 0);
    cout << cnt << endl;
    return 0;
}