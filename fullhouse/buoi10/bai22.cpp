#include<iostream>
#include<algorithm>
using namespace std;

int giamdan(int a, int b) {
    return a > b;
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n, giamdan);
    int giam = 0;
    long long tong = 0;
    for(int i = 0; i < n; ++i) {
        if(giam >= a[i]) break;
        tong += a[i] - giam;
        ++giam;
    }
    cout << tong;
    return 0;
}