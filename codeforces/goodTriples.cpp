#include<iostream>

using namespace std;

int tong(int n) {
    int tong = 0;
    while(n != 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; ++i) {
        int n; cin >> n;
        int x = tong(n);
        int dem = 0;
        for(int j = 0; j <= n; ++j) {
            for(int a = 0; a <= n; ++a) {
                for(int b = 0; b <= n; ++b) {
                    if(a + b + j == n && tong(a) + tong(b) + tong(j) == tong(n)) ++dem;
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}