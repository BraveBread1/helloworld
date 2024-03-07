#include<iostream>

using namespace std;

int check(int n) {
    int tong = 0;
    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0) tong += i;
    }
    if(n == tong) return true;
    else return false;
}

int main() {
    int n; cin >> n;
    for(int i = 2; i <= n; i++) {
        if(check(i)) cout << i << " ";
    }
    return 0;
}