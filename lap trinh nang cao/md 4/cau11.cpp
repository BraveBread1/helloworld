#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n; cin >> n;
    double a[n];
    double sum = 0;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    double mean = sum / n;
    double var;
    for(int i = 0; i < n; ++i)
    {
        var += (a[i] - mean) * (a[i] - mean);
    }
    var /= n;
    cout << fixed << setprecision(2) << var << endl;
    return 0;
}