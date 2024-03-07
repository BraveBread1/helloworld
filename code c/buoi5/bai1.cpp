#include<iostream>
using namespace std;

int gt(int n) {
    int giaithua = 1;
    for(int i = 2; i <= n; i++) {
        giaithua *= i;
    }
    return giaithua;
}

int main() {
    int n; cin >> n;
    int tong = 0;
    for(int i = n; i > 0; i /= 10) {
        int du = gt(i % 10);
        tong += du;
    }
    if(n == tong) cout << "1";
    else cout << "0";
}