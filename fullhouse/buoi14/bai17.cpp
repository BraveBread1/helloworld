#include<iostream>

using namespace std;

int tongChan(long long n) {
    int tong = 0;
    while(n > 0) {
        int du = n % 10;
        if(du % 2 == 0) {
            tong += du;
        }
        n /= 10;
    }
    return tong;
}

int tongLe(long long n) {
    int tong = 0;
    while(n > 0) {
        int du = n % 10;
        if(du % 2 != 0) {
            tong += du;
        }
        n /= 10;
    }
    return tong;
}

int main() {
    long long n; cin >> n;
    cout << tongChan(n) << endl << tongLe(n);
    return 0;
}