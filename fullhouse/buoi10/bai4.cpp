#include<iostream>

using namespace std;

int main() {
    long long n; cin >> n;
    long long a[n];
    for(long long i = 0; i < n; ++i) cin >> a[i];
    long long q; cin >> q;
    for(long long i = 1; i <= q; ++i) {
        long long x, y; cin >> x >> y;
        long long tong = 0;
        for(long long j = x - 1; j <= y - 1; ++j) tong += a[j];
        cout << tong << endl;
    }
    return 0;
}