#include<iostream>
#include<algorithm>
#include<iomanip>

bool comp(double a, double b)
{
    return a > b;
}

using namespace std;

int main()
{
    int n; cin >> n;
    double a[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n, comp);
    for(int i = 0; i < n; ++i) cout << fixed << setprecision(2) << a[i] << " ";
    return 01;
}
