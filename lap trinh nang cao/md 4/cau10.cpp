#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n; cin >> n;
    double a[n], b[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];
    double result = 0;
    for(int i = 0; i < n; ++i)
    {
        result += a[i] * b[i];
    }
    cout << fixed << setprecision(2) << result;
    return 0;
}