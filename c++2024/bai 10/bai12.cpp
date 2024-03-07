#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    double a[n + 1];
    a[0] = 0;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    double sum = 0;
    for(int i = 0; i < k; ++i)
    {
        sum += a[i];
    }
    double avr, min;
    int ind;
    for(int i = 1; i <= n - k + 1; ++i)
    {
        sum = sum - a[i - 1] + a[i + k - 1];
        avr = sum / k;
        min = 1000000000;
        for(int j = i; j < i + k; ++j)
        {
            if(abs(avr - a[j]) < min){
                min = abs(avr - a[j]);
                ind = j;
            }
        }
        long long result = 0;
        for(int j = i; j < i + k; ++j)
        {
            if(j != ind)
            {
                result += abs(a[j] - a[ind]);
            }
        }
        cout << result << " ";
    }
    return 0;
}