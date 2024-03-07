#include<iostream>
#include<vector>

using namespace std;

void nhap(long long a[], int n) {
    for(int i = 1; i <= n; ++i) cin >> a[i];
}

void mang_cong_don(long long a[], int n) {
    for(int i = 1; i <= n; ++i) {
        a[i] = a[i - 1] + a[i]; 
    }
}

int main() {
    int n; cin >> n;
    long long a[n + 1];
    nhap(a, n);
    mang_cong_don(a, n);
    int q; cin >> q;
    for(int i = 1; i <= q; ++i) {
        int l, r; cin >> l >> r;
        long long tong = a[r] - a[l - 1];
        cout << tong << endl;
    }
    return 0;
}