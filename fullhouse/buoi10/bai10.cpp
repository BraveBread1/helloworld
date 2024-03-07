#include<iostream>
#include<algorithm>

using namespace std;

int bs(int a[], int l, int r, int x) {
    int res = -1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] > x) {
            res = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    return res;
}

int main() {
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    long long dem = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] > k) {
            int x = n - i;
            dem += (x - 1) * x / 2;
            break;
        }
        int x = k - a[i];
        int y = bs(a, i + 1, n - 1, x);
        if(y != -1) {
            dem += n - y;
        }
    }
    cout << dem;
    return 0;
}