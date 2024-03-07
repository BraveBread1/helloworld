#include<iostream>
#include<algorithm>

using namespace std;

int tong(int a[], int n) {
    long long tong = 0;
    for(long long i = 0; i < n; ++i) {
        tong += a[i] * i;
        tong %= 1000000007;
    }
    return tong;
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << tong(a, n);
    return 0;
}