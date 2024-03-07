#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int tong = 0;
    for(n; n > 0; n /= 10) {
        int du = n % 10;
        tong += du;
    }
    cout << tong;
    return 0;
}