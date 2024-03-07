#include<iostream>

using namespace std;

int main() {
    int n, d; cin >> n >> d;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    long long dem = 0;
    for(int i = 0; i < n - 1; ++i) {
        if(a[i] >= a[i + 1]) {
            int chia = (a[i] - a[i + 1]) / d;
            a[i + 1] += (chia + 1) * d;
            dem += chia + 1;
        }
    }
    cout << dem;
    return 0;
}