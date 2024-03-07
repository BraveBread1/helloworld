#include<iostream>
#include<math.h>

using namespace std;

bool nto (long long n) {
    if(n <2) return false;
    for(long long i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}
bool fib(long long n) {
    int tong = 0;
    for(long long i = n; i > 0; i /= 10) {
        tong += i % 10;
    }
    long long b = 0;
    long long b1 = 1;
    long long b2 = 1;
    while(b <= tong){
        if(tong == b) return true;
        b = b1;
        b1 = b2;
        b2 = b + b1;
    }
    return false;
}

int main() {
    long long n; cin >> n;
    for(int i = 1; i <= n; i++) {
        if(nto(i) && fib(i)) cout << i << " ";
    }
    return 0;
}