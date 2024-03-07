#include<iostream>

using namespace std;

bool nto(long long n) {
    if(n < 2) return false;
    else {
        for(long long i = 2; i * i <= n; ++i) {
            if(n % i == 0) return false;
        }
        return true;
    }
}

int main() {
    long long n; cin >> n;
    int dem = 0;
    while(n % 2 == 0) {
        ++dem; n /= 2;
    }
    if(dem) {
        cout << "2^" << dem;
        if(n > 1) cout << " * ";
    }
    for(long long i = 3; i * i <= n; i += 2) {
        dem = 0;
        while(n % i == 0) {
            ++dem;
            n /= i;
        }
        if(dem) {
            cout << i << "^" << dem;
            if(n > 1) cout << " * ";
        }
    }
    if(n > 1) cout << n << "^1"; 
    return 0;
}