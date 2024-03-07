#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    long long tong = 0, tich = 1;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++ i) {
        tong += (long long)a[i];
        tong = tong % 1000000007;
        tich *= (long long)a[i];
        tich = tich % 1000000007;
    }
    cout << tong << endl;
    cout << tich;
    return 0;
}