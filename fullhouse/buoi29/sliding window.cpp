#include<iostream>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int sum = 0;
    for(int i = 0; i < k; ++i)
    {
        sum += a[i];
    }
    cout << sum << " ";
    for(int i = 1; i <= n - k; ++i)
    {
        sum = sum - a[i - 1] + a[i + k - 1];
        cout << sum << " ";
    }
    return 0;
}