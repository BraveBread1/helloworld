#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    long long sum = 0;
    for(int i = 1; 2 * i - 1 <= n; ++i)
    {
        sum += 2 * i - 1;
    }
    cout << sum;
}