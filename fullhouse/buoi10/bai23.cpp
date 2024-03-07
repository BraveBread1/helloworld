#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
    int n, l; cin >> n >> l;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    int max1 = a[0];
    int max2 = l - a[n - 1];
    if(max1 < max2) max1 = max2;
    int max = 0;
    for(int i = 0; i < n - 1; ++i) {
        int hieu = a[i + 1] - a[i];
        if(hieu > max) max = hieu;
    }
    if(max > max1 * 2) {
        cout << fixed << setprecision(10) << (double)max / 2;
    }
    else cout << fixed << setprecision(10) << max1;
    return 0;
}